#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class Items {
    private:
        string item;
        double cost;
    public:
        Items() {
            item = "";
            cost = 0;
        }
        Items(string itemName, double value) {
            item = itemName;
            cost = value;
        }
        void SetItemName(string itemName) {
            item = itemName;
        }
        void SetItemCost(double value) {
            cost = value;
        }
        string GetItemName() {
            return item;
        }
        double GetItemCost() {
            return cost;
        }
};

int main() {
    cout << fixed << setprecision(2);
    double maxCost;
    int maxItems;
    cin >> maxCost;
    cin >> maxItems;

    string itemName;
    double cost;
    Items items[maxItems];
    for (int i = 0; i < maxItems; i++) {
        cin >> itemName;
        cin >> cost;
        items[i].SetItemName(itemName);
        items[i].SetItemCost(cost);
    }

    // sort items
    Items temp;
    int j = 0;
    for (int i = 1; i < maxItems; i++) {
        j = i;
        while (j > 0 && items[j].GetItemCost() > items[j-1].GetItemCost()) {
            temp = items[j-1];
            items[j-1] = items[j];
            items[j] = temp;
            j--;
        }
    }

    // select which items to purchase
    vector<Items> purchased;
    double sum = 0;
    for (int j = 0; j < maxItems; j++) {
        if (sum + items[j].GetItemCost() <= maxCost) {
            sum += items[j].GetItemCost();
            purchased.push_back(items[j]);
        }
    }

    // display purchased items
    for (int k = 0; k < purchased.size(); k++) {
        cout << purchased[k].GetItemName() << " " << purchased[k].GetItemCost() << endl;
    }
    if (maxCost - sum != 0)
        cout << maxCost - sum << endl;

    return 0;
}
