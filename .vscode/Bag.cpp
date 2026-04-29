#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Item {
    int id;
    int w;
    int p;
    double d;
};

class Knapsack {
private:
    int n;
    int c;
    vector<Item> items;
    int currentWeight;
    int currentValue;
    int bestValue;
    vector<int> bestX;
    vector<int> currentX;

public:
    Knapsack(int capacity, vector<Item> item_list) {
        c = capacity;
        items = item_list;
        n = items.size();

        currentWeight = 0;
        currentValue = 0;
        bestValue = 0;
        bestX.resize(n, 0);
        currentX.resize(n, 0);

        sort(items.begin(), items.end(), [](Item a, Item b) {
            return a.d > b.d;
        });
    }

    int Bound(int i) {
        if (currentWeight >= c) return 0;
        int boundValue = currentValue;
        int remainingWeight = c - currentWeight;

        while (i < n && items[i].w <= remainingWeight) {
            remainingWeight -= items[i].w;
            boundValue += items[i].p;
            i++;
        }
        if (i < n) {
            boundValue += items[i].p * ((double)remainingWeight / items[i].w);
        }
        return boundValue;
    }

    void Backtrack(int i) {
        if (i >= n) {
            if (currentValue > bestValue) {
                bestValue = currentValue;
                bestX = currentX;
            }
            return;
        }

        if (currentWeight + items[i].w <= c) {
            currentWeight += items[i].w;
            currentValue += items[i].p;
            currentX[i] = 1;

            Backtrack(i + 1);

            currentWeight -= items[i].w;
            currentValue -= items[i].p;
            currentX[i] = 0;
        }

        if (Bound(i + 1) > bestValue) {
            Backtrack(i + 1);
        }
    }

    void Solve() {
        Backtrack(0);
        cout << "最大价值为: " << bestValue << endl;
        cout << "选中的物品 (按输入顺序): ";
        for (int i = 0; i < n; i++) {
            if (bestX[i] == 1) {
                cout << "物品" << items[i].id << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    // system("chcp 65001"); 
    int n, c;
    cout << "请输入物品数量 n 和 背包容量 c: ";
    cin >> n >> c;

    vector<Item> items(n);
    cout << "请输入每个物品的重量 w 和 价值 p:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> items[i].w >> items[i].p;
        items[i].id = i + 1;
        items[i].d = (double)items[i].p / items[i].w;
    }

    Knapsack solver(c, items);
    solver.Solve();

    return 0;
}