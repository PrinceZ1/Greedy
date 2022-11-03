/*Hoàng yêu thích các số may mắn. Ta biết rằng một số là số may mắn nếu biểu diễn thập phân của nó chỉ chứa các chữ số may mắn là 4 và 7. Ví dụ, các số 47, 744, 4 là số may mắn và 5, 17, 467 không phải. Hoàng muốn tìm số may mắn bé nhất có tổng các chữ số bằng n. Hãy giúp anh ấy

Input Format

Dòng duy nhất chứa số nguyên dương n

Constraints

1<=n<=10^6;

Output Format

In ra đáp án của bài toán, nếu không tồn tại đáp án thì in ra -1

Sample Input 0

16
Sample Output 0

4444
Sample Input 1

14
Sample Output 1

77
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    int n ; cin >> n;
    for(int i = n / 7 ; i >= 0; i--)
    {
        if((n - i * 7) % 4 == 0)
        {
            cout << string((n - i * 7) / 4 , '4') << string(i , '7');
            return 0;
        }
    }
    cout << -1;
}