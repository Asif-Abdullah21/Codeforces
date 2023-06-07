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
        ll sum = 0;    //explained by Coding Community | Newton School
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum % 2 == 0)
        {
            cout << 0 << endl;
        }
        else{
            int mn = INT_MAX;

            for (size_t i = 0; i < n; i++)
            {
                int cnt=0;
                int temp = a[i]%2;
                while (temp == a[i]%2)
                {
                    cnt++;
                    a[i] /=2;
                }

                mn = min(cnt,mn);
            }

            cout << mn << endl;
            
        }
    }

    return 0;
}


    
