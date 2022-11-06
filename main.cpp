#include <iostream>
using namespace std;

class Link {
    public:
        double dData;
        Link* pNext;
        Link* pPrevious;

    public:
        Link(double dd): dData(dd), pNext(NULL), pPrevious(NULL) {}
        void displayLink() {
            cout << dData << " ";
        }
};

class DoublyLinkedList {
    private:
        Link* pFirst;
        Link* pLast;

    public:
        DoublyLinkedList() : pFirst(NULL), pLast(NULL) {}
        ~DoublyLinkedList() {
            Link* pCurrent = pFirst;
            while (pCurrent != NULL) {
                Link* pOldCur = pCurrent;
                pCurrent = pCurrent -> pNext;
                delete pOldCur;
            }
        }

        bool isEmpty() {
            return pFirst == NULL;
        }

        void insertFirst(double dd) {
            Link* pNewLink = new Link(dd);
            if (isEmpty())
                pLast = pNewLink;
            else
                pFirst -> pPrevious = pNewLink;
            pNewLink -> pNext = pFirst;
            pFirst = pNewLink;
        }

        void insertLast(double dd) {
            Link* pNewLink = new Link(dd);
            if (isEmpty())
                pFirst = pNewLink;
            else {
                pLast -> pNext = pNewLink;
                pNewLink -> pPrevious = pLast;
            }
            pLast = pNewLink;
        }

        void removeFirst() {
            Link* pTemp = pFirst;
            if (pFirst -> pNext == NULL)
                pLast = NULL;
            else
                pFirst -> pNext -> pPrevious = NULL;
            pFirst = pFirst -> pNext;

            delete pTemp;
        }

        void removeLast() {
            Link* pTemp = pLast;
            if (pFirst -> pNext == NULL)
                pFirst = NULL;
            else
                pLast -> pPrevious -> pNext = NULL;
            pLast = pLast -> pPrevious;
            delete pTemp;
        }

        bool insertAfter(double key, double dd) {
            Link* pCurrent = pFirst;
            while (pCurrent -> dData != key) {
                pCurrent = pCurrent -> pNext;
                if(pCurrent == NULL)
                    return false;
            }
            Link* pNewLink = new Link(dd);
            if (pCurrent == pLast) {
                pNewLink -> pNext = NULL;
                pLast = pNewLink;
            }
            else {
                pNewLink -> pNext = pCurrent -> pNext;
                pCurrent -> pNext -> pPrevious = pNewLink;
            }
            pNewLink -> pPrevious = pCurrent;
            pCurrent -> pNext = pNewLink;
            return true;
        }

        bool removeKey(double key) {
            Link* pCurrent = pFirst;
            while (pCurrent -> dData != key) {
                pCurrent = pCurrent -> pNext;
                if (pCurrent == NULL)
                    return false;
            }
            if (pCurrent == pFirst)
                pFirst = pCurrent -> pNext;
            else
                pCurrent -> pPrevious -> pNext = pCurrent -> pNext;

            if (pCurrent == pLast)
                pLast = pCurrent -> pPrevious;
            else
                pCurrent -> pNext -> pPrevious = pCurrent -> pPrevious;
            delete pCurrent;
            return true;
        }

        void displayForward() {
            cout << "List (first --> last): ";
            Link* pCurrent = pFirst;
            while (pCurrent != NULL) {
                pCurrent -> displayLink();
                pCurrent = pCurrent -> pNext;
            }
            cout << endl;
        }

        void displayBackward() {
            cout << "List (last --> first): ";
            Link* pCurrent = pLast;
            while (pCurrent != NULL) {
                pCurrent -> displayLink();
                pCurrent = pCurrent -> pPrevious;
            }
            cout << endl;
        }

        void priorityInsert(double dd) {
            insertFirst(dd);
        }

        double priorityRemove() {
            double temp = pLast -> dData;
            removeLast();
            return temp;
        }
};

int main() {
    
    DoublyLinkedList pqList;
    pqList.priorityInsert(50);
    pqList.priorityInsert(40);
    pqList.priorityInsert(30);
    pqList.priorityInsert(20);
    pqList.priorityInsert(10);
    cout << "---------- PriorityQueue ----------" << endl;
    pqList.displayForward();

    cout << "Calling priorityRemove()" << endl;
    double key = pqList.priorityRemove();
    cout << "Removed node with key " << key << endl;
    pqList.displayForward();
    key = pqList.priorityRemove();
    cout << "Removed node with key " << key << endl;
    pqList.displayForward();

    return 0;
}
