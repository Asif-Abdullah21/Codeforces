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

bool fun(ll n,ll m)
{
    if(n==m) return true;
    if(n<m || n%3!=0) return false;

    bool left = fun(n/3,m);
    bool right = fun((2*n)/3,m);

    return (left||right);
}

int main()
{
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        ll n,m;
        cin >> n >> m;

        if(fun(n,m)) cout << "YES\n";
        else cout << "NO\n"; 
    }
     
    return 0;
}
