/*Tại ngân hàng có các mệnh giá bằng 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000. Tổng số tiền cần đổi có giá trị bằng N. Hãy xác định xem có ít nhất bao nhiêu tờ tiền sau khi đổi tiền?

Input Format

Dòng duy nhất chứa số nguyên N

Constraints

1<=N<=10^9

Output Format

In ra số tờ tiền tối thiểu

Sample Input 0

138
Sample Output 0

6
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9;

int main()
{
    int n ; cin >> n;
    int a[] = {1000 , 500 , 200 , 100 , 50 , 20 , 10 , 5 , 2 , 1};
    ll ans = 0;
    for(int i = 0 ; i < 10 ; i++)
    {
        ans += n / a[i];
        n %= a[i];
    }
    cout << ans;
}