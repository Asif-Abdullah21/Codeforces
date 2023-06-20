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
        FIO;
        int n;
        cin >> n;
        int a[n];

        ll sum =0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += abs(a[i]);
        }

        int cnt=0;
        int mx = 0;

        for (int i = 0; i < n; i++)
        {
            if(a[i]<=0)
            {
                if(a[i]<0) cnt++;
            }
            else {
                if(cnt>0) mx++;
                cnt=0;
            }
        }

        if(cnt>0) mx++;

        cout << sum << " " << mx << endl;
        
         
    }
     
    return 0;
}
