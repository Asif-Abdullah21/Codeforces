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
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n+2];
        int tm = 0,cnt_0=0;
        int f=0;

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if(a[i]==0) cnt_0++; 
            if(f==0 && a[i] !=0)
            {
                tm = i;
                f=1;
            }
        }

        ll cnt=0;
        ll sum =0;
        for (int i = tm; i <n; i++)
        {
            if(a[i]==0) cnt++;
            sum += a[i];
        }

        if(cnt_0==n) cout << 0 << endl;
        else cout <<sum+cnt << endl;
        
        
    }
     
    return 0;
}
