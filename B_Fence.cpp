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
    int n,k;
    cin >> n >>k;

    int pre[n+2];
    int a[n+2];
    pre[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pre[i] = a[i] + pre[i-1];
    }
    
    // for (int i = 0; i <=n; i++)
    // {
    //     cout << pre[i] << endl;
    // }

    int mn = INT_MAX;
    int mn_i=0;

    for (int i = 0; i <=n-k; i++)
    {
        if(pre[i+k]-pre[i]<mn)
        {
            mn = pre[i+k]-pre[i];
            mn_i = i+1;
        }
    }

    cout << mn_i << endl;
    
     
    return 0;
}
