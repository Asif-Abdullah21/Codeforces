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
        int n,k;
        cin >> n >> k;

        int a[n],b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        sort(a,a+n);
        sort(b,b+n,greater<int>());

        for (int i = 0; i < k; i++)
        {
            //cout << a[i] << " " << b[i] << endl;
            if(a[i]<b[i]) swap(a[i],b[i]);
        }

        ll sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }

        cout << sum << endl;
        
        
         

    }
     
    return 0;
}
