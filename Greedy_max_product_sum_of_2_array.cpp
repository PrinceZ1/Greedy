/*Cho mảng A[], B[] đều có N phần tử. Nhiệm vụ của bạn là tìm giá trị lớn nhất của biểu thức P = A[0]*B[0] + A[1]*B[1] + ..+A[N-1]*B[N-1] bằng cách tráo đổi vị trí các phần tử của cả mảng A[] và B[].

Input Format

Dòng 1 chứa số nguyên dương N; Dòng 2 chứa N số nguyên của mảng A[]; Dòng 3 chứa N số nguyên của mảng B[];

Constraints

1<=N<=10^5; 0<=A[i], B[i]<=10^6

Output Format

In ra đáp án của bài toán

Sample Input 0

7
9 4 5 3 9 4 10 
9 5 3 1 10 1 5 
Sample Output 0

270
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin >> a[i];
    }
    int b[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin >> b[i];
    }
    sort(a , a + n);
    sort(b , b + n);
    ll sum = 0;
    for(int i = 0 ; i<n ;i++)
    {
        sum += 1ll * a[i] * b[i];
    }
    cout << sum;
}