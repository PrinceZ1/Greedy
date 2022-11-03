/*Cho hai số nguyên dương S và D, trong đó S là tổng các chữ số và D là số các chữ số của một số. Nhiệm vụ của bạn là tìm số nhỏ nhất thỏa mãn S và D?

Input Format

1 dòng gồm 2 số S, D

Constraints

1<=S,D<=1000;

Output Format

In ra số nhỏ nhất có D chữ số và có tổng bằng S, nếu không tìm được đáp án thì in ra -1

Sample Input 0

12 8
Sample Output 0

10000029
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    int s , d ; cin >> s >> d;
    if(d * 9 < s)
    {
        cout << -1;
    }
    else
    {
        string res = "";
        s -= 1;
        for(int  i = 0 ; i < d - 1 ; i++)
        {
            if(s >= 9)
            {
                res += "9";
                s -= 9;
            }
            else
            {
                res = to_string(s) + res;
                s = 0;
            }
        }
        s += 1;
        res = to_string(s) + res;
        cout << res;
    }
}