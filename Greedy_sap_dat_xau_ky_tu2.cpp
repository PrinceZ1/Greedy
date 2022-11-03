/*Cho xâu kí tự S chỉ bao gồm các kí tự in thường, hãy kiểm tra xem có thể sắp đặt lại các kí tự trong xâu sao cho không có 2 kí tự kề nhau nào giống nhau hay không?

Input Format

Dòng duy nhất chứa xâu S

Constraints

1<=len(S)<=10000;

Output Format

Nếu có thể sắp đặt lại xâu kí tự in ra YES, ngược lại in ra NO.

Sample Input 0

aqeaaqwq
Sample Output 0

YES
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    string s ; cin >> s;
    map<char,int>mp;
    for(char x : s) mp[x]++;
    int ans = 0;
    for(pair<char,int> x : mp) ans = max(ans , x.second);
    if(ans <= (s.length() / 2 + 1) && s.length() % 2 == 1) cout << "YES";
    else if(ans <= s.length() - ans && s.length() % 2 == 0) cout << "YES";
    else cout <<"NO";
}