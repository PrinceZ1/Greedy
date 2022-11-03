/*Một phân số đơn vị nếu tử số của phân số đó là 1. Mọi phân số nguyên dương đều có thể biểu diễn thành tổng các phân số đơn vị. Ví dụ 2/3 = 1/2 + 1/6. Cho phân số nguyên dương P/Q bất kỳ , hãy biểu diễn phân số nguyên dương thành tổng phân số đơn vị với số hạng tử là ít nhất.

Input Format

1 dòng duy nhất chứa 2 số P, Q

Constraints

1<=P,Q<=200

Output Format

Đưa ra đáp án trên 1 dòng

Sample Input 0

9 6
Sample Output 0

1/1 + 1/2
Sample Input 1

5 6
Sample Output 1

1/2 + 1/3
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    ll tu , mau ; cin >> tu >> mau;
    while(true)
    {
        if(mau % tu == 0)
        {
            cout << 1 << "/" << mau / tu ;
            break;
        }
        ll res = mau / tu + 1;    
        cout << 1 << "/" << res << " + ";
        tu = tu * res - mau;
        mau = res * mau; 
    }
}