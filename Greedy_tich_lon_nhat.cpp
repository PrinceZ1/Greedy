/*Cho dãy số A gồm N phần tử là các số nguyên. Hãy tính tích lớn nhất của 2 hoặc 3 phần tử trong dãy.

Input Format

Dòng đầu tiên là N; Dòng thứ 2 là N phần tử của mảng A

Constraints

1<=N<=1000; 0<=abs(A[i])<=10^6

Output Format

In ra tích lớn nhất của 2 hoặc 3 phần tử trong mảng

Sample Input 0

5
-9 4 3 -3 1 
Sample Output 0

108
*/


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    ll n ; cin >> n; 
    ll a[n] ; for(ll &x : a) cin >> x;
    sort(a , a + n);
    ll ans , count;
    ans = max(a[n - 1] * a[n - 2] * a[n - 3] , a[n - 1] * a[n - 2]);
    count = max(a[0] * a[1] * a[n - 1] , a[0] * a[1]);
    cout << max(ans , count);
}