/*Tèo đang chơi một game là nông trại vui vẻ, để tham gia game nông trại vui vẻ, các game thủ phải sử dụng 2 công vụ là cuốc và liềm. Biết rằng để đổi lấy 1 cái cuốc thì cần 2 đồng xu và 1 kim cương, để đổi lấy 1 cái liềm thì cần 1 đồng xu và 2 kim cương. Hãy xác định tổng số cuốc và liềm lớn nhất mà Tèo có thể đổi được biết rằng Tèo có a đồng xu và b kim cương.

Input Format

Dòng duy nhất chứa 2 số a và b

Constraints

0<=a,b<=10^9

Output Format

In ra đáp án của bài toán

Sample Input 0

6 8
Sample Output 0

4
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ull;
const int MOD = 1e9 + 7;

int main()
{
    int a , b; cin >> a >> b;
    cout << min({a, b , (a + b) / 3});
}