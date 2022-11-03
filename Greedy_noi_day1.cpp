/*Cho N sợi dây, biết chi phí nối 2 sợ dây là tổng độ dài của 2 sợi dây đó. Nhiệm vụ của bạn là nối N sợi dây này thành 1 sao cho chi phí nối dây là nhỏ nhất

Input Format

Dòng 1 chứa số nguyên N; Dòng 2 chứa N số nguyên là độ dài các sợ dây

Constraints

1<=N<=10^5; Các sợi dây có độ dài không quá 10^5;

Output Format

In ra chi phí nối dây tối thiểu

Sample Input 0

7
7 7 6 10 4 8 3 
Sample Output 0

124
Sample Input 1

4
4 3 2 6
Sample Output 1

29
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    int n ; cin >> n;
    priority_queue<ll , vector<ll> , greater<ll>>Q;
    for(int i = 0 ;i < n;i++)
    {
        int x ; cin >> x;
        Q.push(x);
    }
    ll ans = 0;
    while(Q.size() > 1)
    {
        int tmp = Q.top(); Q.pop();
        int res = Q.top(); Q.pop();
        Q.push(tmp + res);
        ans += tmp + res;
    }
    cout << ans;
}