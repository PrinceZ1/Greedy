/*Cho mảng A[] gồm N số nguyên không âm và số K. Nhiệm vụ của bạn là hãy chia mảng A[] thành hai mảng con có kích cỡ K và N-K sao cho hiệu giữa tổng hai mảng con là lớn nhất. Ví dụ với mảng A[] = {8, 4, 5, 2, 10}, K=2 ta có kết quả là 17 vì mảng A[] được chia thành hai mảng {4, 2} và { 8, 5,10} có hiệu của hai mảng con là 23-6=17 là lớn nhất.

Input Format

Dòng duy nhất chứa 2 số nguyên N và K; Dòng thứ 2 gồm N số của mảng A[]

Constraints

1<=K<=N<=10^6; 0<=A[i]<=10^9;

Output Format

In ra đáp án của bài toán

Sample Input 0

6 4
3 10 10 7 5 2 
Sample Output 0

27
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    int n , k ; cin >> n >> k;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    ll sum1 = 0 , sum2 = 0;
    if(k > n / 2) 
    {
        sort(a  , a + n , greater<int>());
        for(int i = 0 ; i < k ; i++) sum1 += a[i];
        for(int i = k ; i < n; i++) sum2 += a[i];
        cout << sum1 - sum2 << endl;
    }
    else
    {
        sort(a , a + n);
        for(int i = 0 ; i < k ; i++) sum1 += a[i];
        for(int i = k ; i < n ; i++) sum2 += a[i];
        cout << sum2 - sum1;
    }
}