/*Trong một buổi học toán, giáo viên viết 2 số nguyên, A và B, và yêu cầu Tèo thực hiện phép cộng. Tèo không bao giờ tính toán sai, nhưng thỉnh thoảng cậu ta chép các con số một cách không chính xác. Lỗi duy nhất của là ghi nhầm '5' thành '6' hoặc ngược lại. Cho hai số, A và B, tính tổng nhỏ nhất và lớn nhất mà Tèo có thể nhận được.

Input Format

1 dòng duy nhất chứa 2 số A và B

Constraints

1<=A<=B<=10^16

Output Format

In ra tổng lớn nhất và nhỏ nhất trên 1 dòng

Sample Input 0

891 746
Sample Output 0

1637 1636
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9;
void nhoNhat(string &s)
{
    for(char &x : s)
    {
        if(x == '6')
        {
            x = '5';
        }
    }
}
void LonNhat(string &s)
{
    for(char &x : s)
    {
        if(x == '5')
        {
            x = '6';
        }
    }
}
int main()
{
    string a , b ; cin >> a >> b ;
    LonNhat(a); LonNhat(b);
    cout << stoll(a) + stoll(b) << " ";
    nhoNhat(a);nhoNhat(b);
    cout << stoll(a) + stoll(b) << " ";
}