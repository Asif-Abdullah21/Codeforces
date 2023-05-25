#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define sort(a) sort(a, a + n)
#define rev(a) reverse(a, a + n)
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
    int f = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n; //code idea from iftekhar vai, explained by muhammad_sayem
        string s;
        cin >> s;
        int mx = 1, cnt = 1;

        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1]) cnt++;
            else cnt = 1;

            mx = max(cnt,mx);
            
        }

         cout << mx + 1 << endl;
    }

    return 0;
}
