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
        int n;
        cin >> n;

        int a[n];
        int b[n];

        ll sumA=0,sumB=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sumA += a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            sumB += b[i];
        }

        sort(a,a+n);
        sort(b,b+n);

        for (int i = 0; i < n; i++)
        {
            sumA += b[0];
        }
        
        for (int i = 0; i < n; i++)
        {
            sumB += a[0];
        }
        

        cout << min(sumA,sumB) << endl;
         
    }
     
    return 0;
}
