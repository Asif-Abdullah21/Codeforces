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
using namespace std;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        int n1,n2;
        cin >> n1 >> n2;

        ll sum1=0,sum2=0;

        int x;

        for (int i = 0; i < n1; i++)
        {
            cin >> x;
            sum1 += x;
        }

        for (int i = 0; i < n2; i++)
        {
            cin >> x;
            sum2 += x;
        }

        if(sum1>sum2) cout << "Tsondu\n";
        else if(sum1<sum2) cout << "Tenzing\n";
        else cout << "Draw\n";
        
    }
     
    return 0;
}
