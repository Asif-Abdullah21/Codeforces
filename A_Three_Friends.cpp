#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define ll long long
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define sz(v) v.size()
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        int a[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }

        if (a[0] == a[1] && a[1] == a[2])
            cout << 0 << endl;

        else
        {
            sort(a, a + 3);
            if (a[0] == a[1] && a[2] != a[1])
            {
                a[0]++;
                a[1]++;
                a[2]--;
            }

            else if (a[0]<a[1] && a[1]<a[2])
            {
                a[0]++;
                a[2]--;
            }

            else if (a[0]<a[1] && a[1] == a[2])
            {
                a[0]++;
                a[1]--;
                a[2]--;
            }

            ll sum = (a[1] - a[0]) + (a[2] - a[1]) + (a[2] - a[0]);
            
            if(sum<0) cout << 0 << endl;
            else cout << sum << endl;
        }
    }

    return 0;
}
