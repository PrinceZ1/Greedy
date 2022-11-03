/*Cho hệ gồm N hành động. Mỗi hành động được biểu diễn như một bộ đôi tương ứng với thời gian bắt đầu và thời gian kết thúc của mỗi hành động. Hãy tìm phương án thực hiện nhiều nhất các hành động nhất có thể, biết rắng 2 hành động phải được thực hiện một cách độc lập. 2 hành động được gọi là độc lập nếu thời gian kết thúc của hành động thứ nhất nhỏ hơn thời gian bắt đầu của hành động thứ 2.

Input Format

Dòng đầu tiên là số nguyên dương N; N dòng tiếp theo chứa thời gian bắt đầu và kết thúc của N hành động;

Constraints

1<=N<=10^6; 1<=Start[i]<=End[i]<=10^7;

Output Format

In ra số lượng hành động nhiều nhất có thể thực hiện.

Sample Input 0

16
1 5
2 7
3 7
5 7
6 7
10 12
10 13
1 3
7 8
9 14
5 6
9 10
3 5
8 13
1 6
3 6
Sample Output 0

4
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
bool cmp(pair<int,int>a , pair<int,int>b)
{
    return a.second < b.second;
}
int main()
{
    int n ; cin >> n;
    pair<int,int>A[n];
    for(int i = 0 ; i < n; i++)
    {
        cin >> A[i].first >> A[i].second;
    }
    sort(A , A + n , cmp);
    int ans = 1 , Min = A[0].second;
    for(int i = 1 ; i < n ; i++)
    {
        if(A[i].first > Min)
        {
            ++ans;
            Min = A[i].second;
        }
    }
    cout << ans << endl;
}