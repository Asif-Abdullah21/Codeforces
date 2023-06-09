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
    int t; cin >> t;

    while (t--)
    {
        int n,m;
        cin >> n;   

        if (n % 2 == 0)
            cout << n - 3 << " " << 2 << " "<< 1 << endl;
        else
        {
            n = n-1;   
            m = n/2;

            if(m%2==0) cout << m+1 << " " << m-1 << " " << 1 << endl;
            else cout << m+2 << " " << m-2 << " " << 1 << endl; 
        }
    }

    return 0;
}
