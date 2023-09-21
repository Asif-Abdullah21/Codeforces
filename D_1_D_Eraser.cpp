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
        int n,m;
        cin >> n >> m;
        string s;
        cin >> s;

        int ans = 0;

        for (int i = 0; i < n;)
        {
            if(s[i]=='B')
            {
                ans++;
                i+=m;
            }
            else i++;
        }

        cout << ans << endl;
         
    }
     
    return 0;
}



/*

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
        int n,m;
        cin >> n >> m;
        string s;
        cin >> s;

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if(s[i]=='B')
            {
                ans++;
                i+=(m-1);
            }
        }

        cout << ans << endl;
         
    }
     
    return 0;
}



*/