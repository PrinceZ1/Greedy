/*Có N nhóm học sinh, mỗi nhóm học sinh có từ 1 tới 4 người. Các nhóm học sinh này dự định sẽ đi thăm quan vườn bách thú bằng những chiếc xe taxi, mỗi xe taxi trở được tối đa 4 người. Hãy tìm số lượng taxi tối thiểu để có thể trở hết N nhóm học sinh này, biết rằng những học sinh ở cùng 1 nhóm sẽ đi cùng 1 taxi

Input Format

Dòng đầu tiên chứa số nguyên dương N là số nhóm học sinh; Dòng thứ 2 gồm N số là số lượng của các nhóm học sinh

Constraints

1<=N<=10000; Số lượng học sinh của mỗi nhóm là 1 số dương không quá 4

Output Format

In ra số lượng xe taxi tối thiểu cần dùng

Sample Input 0

6
2 1 3 1 2 2 
Sample Output 0

3
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ull;
const int MOD = 1e9 + 7;

int main()
{
    int n ; cin >> n;
    int a[5] = {0};
    for(int i = 0 ; i < n ;i++)
    {
        int x ; cin >> x;
        a[x]++;
    }
    int res = a[4] + a[3] + a[2] / 2;
    a[1] = a[1] > a[3] ? a[1] - a[3] : 0;
    a[2] %= 2;
    if(a[2] > 0)
    {
        res += 1;
        a[1] = a[1] > 2 ? a[1] - 2 : 0;
    }
    res += a[1] / 4;
    a[1] %= 4;
    if(a[1] > 0) res += 1;
    cout << res;
}