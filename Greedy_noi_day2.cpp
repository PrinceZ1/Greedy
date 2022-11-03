/*Cho N sợi dây, biết chi phí nối 2 sợ dây là tổng độ dài của 2 sợi dây đó. Nhiệm vụ của bạn là nối N sợi dây này thành 1 sao cho chi phí nối dây là lớn nhất

Input Format

Dòng 1 chứa số nguyên N; Dòng 2 chứa N số nguyên là độ dài các sợ dây

Constraints

1<=N<=10^5; Các sợi dây có độ dài không quá 10^9;

Output Format

Đáp án của bài toán chia dư với 10^9 + 7

Sample Input 0

9
10 1 5 7 4 8 7 7 1 
Sample Output 0

305
Sample Input 1

3
5 6 1
Sample Output 1

23
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    int n ; cin >> n;
    priority_queue<ll>Q;
    for(int i = 0 ;i < n;i++)
    {
        int x ; cin >> x;
        Q.push(x);
    }
    ll ans = 0;
    while(Q.size() > 1)
    {
        int tmp = Q.top(); Q.pop();
        tmp %= MOD;
        int res = Q.top(); Q.pop();
        res %= MOD;
        Q.push(tmp + res);
        ans += tmp + res;
        ans %= MOD;
    }
    cout << ans;
}