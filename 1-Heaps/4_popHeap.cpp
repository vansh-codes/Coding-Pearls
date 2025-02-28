#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr, int i)
{ // O(logN)
    int largest = i;
    int left = i * 2 + 1, right = i * 2 + 2;
    int n = arr.size();

    if (left < n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right < n && arr[largest] < arr[right])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, largest);
    }
}

// Step1: Replace the root or element to be deleted by the last element.
// Step2: Delete the last element from the Heap.
// Step3: Heapify
void pop(vector<int> &arr)
{
    if (arr.size() == 1)
    {
        arr.pop_back();
        return;
    }

    arr[0] = arr[arr.size() - 1];
    arr.pop_back();
    heapify(arr, 0);
}

int main()
{ // O(N)
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = (n / 2 - 1); i >= 0; i--)
    {
        heapify(arr, i);
    }

    cout << "Heapified: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
