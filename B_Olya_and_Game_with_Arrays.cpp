// Codeforces Round 892 (Div. 2), problem: (B) Olya and Game with Arrays

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
    cin >> t;   //explained by masud_abdullah

    while (t--)
    {
        int sz;
        cin >> sz;
        vector<int> sec;
        int mn = INT_MAX;

        while (sz--)
        {
            int n;
            cin >> n;

            int a[n];

            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
            }

            sort(a,a+n);
            sec.push_back(a[1]);
            mn = min(mn,a[0]);
        }
         
        sort(sec.begin(),sec.end());
        ll sum = mn;

        for (int i = 1; i < sec.size(); i++)
        {
            sum += sec[i];
        }

        cout << sum << endl;
        
    }
     
    return 0;
}
