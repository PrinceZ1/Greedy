/*Cho một xâu kí tự S chỉ bao gồm các kí tự '(' hoặc kí tự ')'. S có độ dài là số chẵn có giá trị N. Xâu S gồm N / 2 kí tự mở ngoặc và N / 2 kí tự đóng ngoặc. Ở mỗi thao tác các bạn được lựa chọn 1 kí tự bất kì của S để đưa về vị trí đầu tiên hoặc vị trí cuối cùng của dãy. Các bạn hãy xác định số thao tác tối thiểu cần thực hiện để tạo được 1 xâu dấu ngoặc hợp lệ. Một số ví dụ về xâu hợp lệ : (), (((()))), ()((()))...

Input Format

Một dòng duy nhất chứa xâu S

Constraints

1<=N<=1000;

Output Format

In ra số thao tác tối thiểu cần thực hiện

Sample Input 0

)))((((())
Sample Output 0

3
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9;

int main()
{
    string s ; cin >> s;
    stack<char>st;
    int ans = 0;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(st.empty())
        {
            st.push(s[i]);
        }
        else if(s[i] == ')' && st.top() == '(')
        {
            ans += 2;
            st.pop();
        }
        else st.push(s[i]);
    }
    cout << (s.length() - ans) / 2;
}