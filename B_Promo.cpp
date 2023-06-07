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
    int n,q;
    cin >> n >> q;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a,a+n,greater<int>());

    ll pre[n+4];
    pre[0] = 0;

    for (int i = 0; i < n; i++)
    {
        pre[i+1] = a[i] + pre[i];
    }

    // for (int i = 0; i <= n; i++)
    // {
    //     cout << pre[i] << " ";
    // }

    // cout << endl;
    

    while(q--){
        int x,y;
        cin >> x >> y;

        // ll sum = 0;
        // for(int i=x-y;i<x;i++)
        // {
        //     sum += a[i];
        // }
        // cout  << sum << endl;

        cout << pre[x] - pre[x-y] << endl;
        
    }
     
    return 0;
}
