#include <bits/stdc++.h>
using namespace std;

void insertHeap(vector<int> &arr, int val)
{ // O(logN)
    if (arr.size() == 0)
    {
        arr.push_back(val);
        return;
    }

    arr.push_back(val);
    int i = arr.size() - 1;
    while (i != 0)
    {
        int parent = (i - 1) / 2; // i/2 for 1 based indexing
        if (arr[parent] < arr[i])
        {
            swap(arr[i], arr[parent]);
            i = parent;
        } else break;
    }
}

int main() // O(N)
{
    int n;
    cin >> n;
    vector<int> arr;

    cout << "Insert at heap: " << endl;
    int val;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        insertHeap(arr, val);
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}