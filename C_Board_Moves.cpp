#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ll long long
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pii pair<int, int>
#define pll pair<long long, long long>
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
        ll n;
        cin >> n;
        int k = n/2;

        ll sum =0;

        int x = k;

        for (int i = 0; i < k; i++)
        {
            sum = sum + (((4*n)-4)*x);
            x--;
            n=n-2;
        }

        cout << sum << endl;
          
    }
     
    return 0;
}
