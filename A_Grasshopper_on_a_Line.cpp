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
    cin >> t;

    while (t--)
    {
        ll x, k;
        cin >> x >> k;

        if(x%k!=0)
        {
            cout << 1 << endl;
            cout << x << endl;
        }
        else{
            cout << 2 << endl;
            cout << x-1 << " "<< 1 << endl;
        }
    }

    return 0;
}
