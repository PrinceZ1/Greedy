/*Ta gọi một cặp số (x, y) là tương tự nhau nếu chúng có cùng tính chất chẵn lẻ hoặc có abs(x - y) = 1. Bạn được cung cấp một mảng A[] có N phần tử, hãy kiểm tra xem có thể chia N phần tử này thành các cặp, sao cho mỗi cặp số đều tương tự nhau.

Input Format

Dòng đầu tiên chứa số nguyên dương N là số chẵn. Dòng 2 chứa N số nguyên của mảng A[]

Constraints

1<=N<=100; 1<=A[i]<=1000;

Output Format

In ra YES nếu có thể chia thành các cặp tương tự, ngược lại in ra NO

Sample Input 0

6
78 17 17 42 11 43 
Sample Output 0

YES
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9;
bool check(int a[] , int n)
{
    int le = 0 , chan = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] % 2 == 0) ++chan;
        else ++le;
    }
    if((le + chan) % 2 != 0) return false;
    else if(le % 2 == 0) return true;
    for(int i = 0 ; i < n; i++)
    {
        for(int j = i + 1 ; j < n ; j++)
        {
            if(abs(a[j] - a[i]) == 1)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    if(check(a , n)) cout << "YES";
    else cout << "NO";
}