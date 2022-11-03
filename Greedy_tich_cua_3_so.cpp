/*Cho số nguyên dương N, nhiệm vụ của bạn là kiểm tra xem có thể viết N = a * b * c hay không, trong đó a, b, c là 3 số nguyên dương lớn hơn hoặc bằng 2 khác nhau.

Input Format

Dòng duy nhất chứa số nguyên dương N

Constraints

2<=N<=10^9

Output Format

In ra YES nếu có thể biểu diễn N dưới dạng tích của 3 số, ngược lại in ra NO

Sample Input 0

11
Sample Output 0

NO
Sample Input 1

24
Sample Output 1

YES
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9;

int main()
{
    int n ; cin >> n;
    set<int>se;
    for(int i = 2 ; i <= sqrt(n) ; i++)
    {
        if(n % i == 0)
        {
            se.insert(i);
            n /= i;
            if(se.size() == 2) break;
        }
    }
    if(se.size() <= 1 || n == 1 || se.count(n) == 1)
    {
        cout << "NO";
    }
    else cout << "YES";
}