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
        ll a,b,n;


        cin >> a >> b >> n;

        ll ar[n];

        ll sum =0;

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            sum += ar[i];
        }

        if(sum+b<=a)
        {
             cout << sum+b-1 << endl;
             continue;
        }

        sort(ar,ar+n);

        ll ans =0;

        // int i=0;

        // // while (b<a)
        // // {
        // //     b+=ar[i];
        // //     i++;
        // // }
        // // i--;
        // // ans = b-ar[i]-1;
        // // b=1;

        for (int j = 0; j<n; j++)
        {
            b+= ar[j];
            if(b+ar[j]>=a)
            {
                ans += a-1;
                b=1;
            }
            else{
                ans += b-1;
                b=1;
            }
        }
        

      cout << ans << endl;
        
    }    

    return 0;
}
