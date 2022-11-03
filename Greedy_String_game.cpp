/*Tí vào Tèo chơi một trò chơi với xâu kí tự. Luật chơi như sau, ở mỗi lượt chơi 2 người có thể lựa chọn 1 trong 2 thao tác : 1. Hai người đi theo lượt, Tí là người đi trước, ở mỗi lượt đi 2 bạn nhỏ có thể lựa chọn 1 kí tự bất kỳ và xóa kí tự này khỏi xâu S. 2.Lấy xâu S sau đó sắp đặt lại các kí tự trong xâu sao cho nó là một xâu đối xứng thì người đó sẽ thắng. Biết rằng 2 bạn đều chơi tối ưu, bạn hãy xác định xem ai là người chiến thắng ?

Input Format

Dòng duy nhất chứa xâu S

Constraints

S chỉ bao gồm các kí tự in thường và có độ dài không quá 10000

Output Format

Nếu Tí thắng in ra 1, ngược lại nếu Tèo thắng in ra 2

Sample Input 0

kpjdpgb
Sample Output 0

1
Sample Input 1

safjaqih
Sample Output 1

2
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ull;
const int MOD = 1e9 + 7;

int main()
{
    string s ; cin >> s;
    vector<int>v;
    map<char,int>mp;
    for(int i = 0 ; i < s.length() ; i++)
    {
        mp[s[i]]++;
    }
    for(pair<char,int>x : mp)
    {
        if(x.second % 2 == 1)
        {
            v.push_back(x.second);
        }
    }
    if(v.size() <= 1) cout << 1;
    else
    {
        int tmp = v.size() - 1;
        if(tmp % 2 == 1) cout << 2;
        else cout << 1;
    }
}