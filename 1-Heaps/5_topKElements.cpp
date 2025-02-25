//? https://leetcode.com/problems/top-k-frequent-elements

#include <bits/stdc++.h>
using namespace std;

class minPQ
{
private:
    vector<pair<int, int>> pq;
    void heapify(int i)
    { // O(logN)
        int largest = i;
        int left = i * 2 + 1, right = i * 2 + 2;
        int n = pq.size();

        if (left < n && pq[largest] < pq[left])
        {
            largest = left;
        }
        if (right < n && pq[largest] < pq[right])
        {
            largest = right;
        }
        if (largest != i)
        {
            swap(pq[largest], pq[i]);
            heapify(largest);
        }
    }

public:
    pair<int, int> top()
    {
        return pq[0];
    }

    void pop()
    {
        pq[0] = pq[pq.size() - 1];
        pq.pop_back();
        heapify(0);
    }

    void push(pair<int, int> val)
    {
        pq.push_back(val);
        if (pq.size() == 1)
            return;

        int j = pq.size() - 1;
        while (j != 0)
        {
            int parent = (j - 1) / 2;
            if (pq[parent].first > pq[j].first)
            {
                swap(pq[parent], pq[j]);
                j = parent;
            }
            else
                break;
        }
    }
};

int main()
{

    return 0;
}