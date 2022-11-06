// Kasey Hogeboom

#include <iostream>
#include <vector>
#include <cstdlib>                    //for random numbers
#include <ctime>                      //for random numbers

using namespace std;
////////////////////////////////////////////////////////////////

class DataItem { //(could have more data)

public:
    int iData; //data item (key)
    //--------------------------------------------------------------
    DataItem(int ii): iData(ii) //constructor
    {}
    //--------------------------------------------------------------
}; //end class DataItem
////////////////////////////////////////////////////////////////

class HashTable {

private:
    vector < DataItem * > hashArray; //vector holds hash table
    int arraySize;
    DataItem * pNonItem; //for deleted items
public:
    //-------------------------------------------------------------
    HashTable(int size): arraySize(size) //constructor
    {
        arraySize = size;
        hashArray.resize(arraySize); //size the vector
        for (int j = 0; j < arraySize; j++) //initialize elements
            hashArray[j] = NULL;
        pNonItem = new DataItem(-1); //deleted item key is -1
    }
    //-------------------------------------------------------------
    void displayTable()
    {
        cout << "Table: ";
        for (int j = 0; j < arraySize; j++)
        {
            if (hashArray[j] != NULL)
                cout << hashArray[j] -> iData << " ";
            else
                cout << "** ";
        }
        cout << endl;
    }
    //-------------------------------------------------------------
    int hashFunc(int key)
    {
        return key % arraySize; //hash function
    }
    //-------------------------------------------------------------
    void insert(DataItem * pItem) //insert a DataItem
    //(assumes table not full)
    {
        DataItem* key = pItem; //extract key
        int hashVal = hashFunc(key->iData); //hash the key
        //until empty cell or -1,
        int i = 0;
        int bucketsProbed = 0;
        while (bucketsProbed < arraySize) {
            if (hashArray[hashVal] == NULL || hashArray[hashVal] == pNonItem) {
                hashArray[hashVal] = key;
                return;
            }

            i++;
            hashVal = (hashFunc(key->iData) + i * i) % arraySize;
            bucketsProbed++;
        }
    } //end insert()

    //-------------------------------------------------------------
    DataItem * remove(int key) //remove a DataItem
    {
        int hashVal = hashFunc(key); //hash the key
        int i = 0;
        int bucketsProbed = 0;
        while (hashArray[hashVal] != NULL && bucketsProbed < arraySize) {
            if (hashArray[hashVal] -> iData == key) {
                DataItem *temp = hashArray[hashVal];
                hashArray[hashVal] = pNonItem;
                return temp;
            }
            i++;
            hashVal = (hashFunc(key) + i * i) % arraySize;
            bucketsProbed++;
        }
        return NULL;
    } //end remove()

    //-------------------------------------------------------------
    DataItem * find(int key) //find item with key
    {
        int hashVal = hashFunc(key); //hash the key
        int i = 0;
        int bucketsProbed = 0;
        while (hashArray[hashVal] != NULL && bucketsProbed < arraySize) {
            if (hashArray[hashVal] -> iData == key)
                return hashArray[hashVal];
            i++;
            hashVal = (hashFunc(key) + i * i) % arraySize;
            bucketsProbed++;
        }
        return NULL;

    } //-------------------------------------------------------------
}; //end class HashTable
////////////////////////////////////////////////////////////////

int main()
{
    DataItem * pDataItem;
    int aKey, size;
    char choice = 'b';

    size = 15;
    HashTable theHashTable(size);
    int arr[] = {12, 18, 13, 2, 3, 23, 5, 15, 22};
    for (int i = 0; i < 9; i++) {
        pDataItem = new DataItem(arr[i]);
        theHashTable.insert(pDataItem);
    }

    while (choice != 'x') //interact with user
    {
        cout << "Enter first letter of " <<
             "show, insert, delete, or find: ";
        cin >> choice;
        switch (choice)
        {
            case 's':
                theHashTable.displayTable();
                break;
            case 'i':
                cout << "Enter key value to insert: ";
                cin >> aKey;
                pDataItem = new DataItem(aKey);
                theHashTable.insert(pDataItem);
                theHashTable.displayTable();
                break;
            case 'd':
                cout << "Enter key value to delete: ";
                cin >> aKey;
                theHashTable.remove(aKey);
                theHashTable.displayTable();
                break;
            case 'f':
                cout << "Enter key value to find: ";
                cin >> aKey;
                pDataItem = theHashTable.find(aKey);
                if (pDataItem != NULL)
                    cout << "Found " << aKey << endl;
                else
                    cout << "Could not find " << aKey << endl;
                theHashTable.displayTable();
                break;
            case 'x':
                break;
            default:
                cout << "Invalid entry\n";
        } //end switch
    } //end while
    return 0;
} //end main()
