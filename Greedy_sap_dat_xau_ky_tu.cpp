/*Cho xâu ký tự S. Ta gọi giá trị của xâu S là tổng bình phương số lần xuất hiện mỗi ký tự trong S. Hãy tìm giá trị nhỏ nhất của xâu S sau khi thực hiện K lần loại bỏ ký tự.

Input Format

Dòng 1 chứa số nguyên K; Dòng 2 chứa xâu S;

Constraints

1<=K<=100000; 1<=len(S)<=100000;

Output Format

In ra đáp án của bài toán

Sample Input 0

2
adrwda
Sample Output 0

4
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    int k ; cin >> k;
    string s; cin >> s;
    map<char,int>mp;
    for(char x : s)
    {
        mp[x]++;
    }
    priority_queue<int>Q;
    for(pair<char,int> x : mp)
    {
        Q.push(x.second);
    }
    while(k-- && !Q.empty())
    {
        int tmp = Q.top();
        Q.pop();
        tmp -= 1;
        if(tmp > 0 ) Q.push(tmp);
    }
    ll res = 0;
    while(!Q.empty())
    {
        res += Q.top() * Q.top();
        Q.pop();
    }
    cout << res << endl;
}