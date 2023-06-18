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

        int cnt=0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if(a[i]==-1) cnt++;
        }

        if(cnt==0) cout << 0 << endl;
        else if(n==3)
        {
            cout << cnt << endl;
        }
        else if(n%2==0)
        {
            if(cnt<=n/2)
            {
                if(cnt%2==0) cout << 0 << endl;
                else cout << 1 << endl;
            }
            else{
                if((n/2)%2==0)
                {
                    cout << cnt-(n/2) << endl;
                }
                else cout << (cnt-(n/2))+1 << endl;
            }
        }
        else
        {
            if(cnt<=n/2)
            {
                if(cnt%2==0) cout << 0 << endl;
                else cout << 1 << endl;
            }
            else{
                if((n/2)%2==0)
                {
                    cout << cnt-(n/2) << endl;
                }
                else cout << (cnt-(n/2))+1 << endl;
            }
        }

        
         
    }
     
    return 0;
}
