/*Cho N công việc. Mỗi công việc được biểu diễn như một bộ 3 số nguyên dương , trong đó JobId là mã của việc, Deadline là thời gian kết thúc của việc, Profit là lợi nhuận đem lại nếu hoàn thành việc đó đúng thời gian. Thời gian để hoàn toàn mỗi công việc là 1 đơn vị thời gian. Hãy cho biết lợi nhuận lớn nhất có thể thực hiện các việc với giả thiết mỗi việc được thực hiện đơn lẻ.

Input Format

Dòng thứ 1 chứa số nguyên dương N; N dòng tiếp theo mô tả id, deadline, profit của N công việc

Constraints

1<=N<=10^5; 1<=JobID<=N; 1<=Deadline<=N; 1<=Profit<=1000;

Output Format

In ra lợi nhuận lớn nhất

Sample Input 0

4
1 4 20
2 1 10
3 1 40
4 1 30
Sample Output 0

60
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

struct Job
{
    int stt , fi , se;
};
bool cmp(Job a , Job b)
{
    return a.se > b.se;
}
int main()
{
    int n ; cin >> n;
    Job a[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin >> a[i].stt >> a[i].fi >> a[i].se;
    }
    sort(a , a + n , cmp);
    int check[n + 1];
    memset(check, 0, sizeof(check));
    int res = 0;
    for(int i = 0 ;i < n ;i++)
    {
        while(check[a[i].fi] && a[i].fi > 0) --a[i].fi;
        if(a[i].fi > 0 && !check[a[i].fi])
        {
            res += a[i].se;
            check[a[i].fi] = 1;
        }
    }
    cout << res;
}