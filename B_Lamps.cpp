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

bool cmp(pii a,pii b)
{
    if(a.first==b.first)
    {
        return a.second>b.second;
    }
    return a.first<b.first;
}

int main()
{
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        pii a[n+1];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first >> a[i].second;
        }

        sort(a,a+n,cmp);
        
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i].first << " "<< a[i].second << endl;
        // }
        // cout << endl;
        ll sum = a[0].second;
        int cnt=2;
        for (int i = 1; i < n; i++)
        {
            if(a[i].first!=a[i-1].first) cnt=1;

            if(cnt<=a[i].first)
            {
                sum += a[i].second;
                cnt++;
            }
        }

        cout << sum << endl;
         
    }
     
    return 0;
}
