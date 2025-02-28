/*
Ravi found a strange candy seller, while visiting to a park. Out of curiosity he purchased N boxes of candies.
Then he watch the time and it was time to go home. It takes M minutes to him to reach home.

He saw that every box have different number of candies. While the way to home he picked a box and finished all
the candies but as he dropped the box he saw that box is filled magically with the candies with the half of
candies as the previous.

If it takes 1 minute to him to finish one candy box regardless the number of candies in the box. Then how many
maximum candies he can eat in M minutes while reaching to home.

Input Format

1) First line of input consists N, the number of candy boxes.
2) Second line of input consists N space seperated input denoting number of candies in N boxes.
3) Third line of input consists M, the number of minutes required to reach him to home.

Output Format

The output would be an integer, denoting the number of maximum candies he can eat in M minutes.

Sample Input 0
3
17 28 25
3
Sample Output 0
70

Sample Input 1
4
5 6 2 3
3
Sample Output 1
14
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin>>n;
    int x;
    priority_queue<int> pq;
    while(n--){
        cin>>x;
        pq.push(x);
    }

    int m, ans = 0;
    cin>>m;
    while(m--){
        int temp = pq.top();
        pq.pop();
        pq.push(temp/2);
        ans += temp;
    }
    cout<<ans;
    return 0;
}
