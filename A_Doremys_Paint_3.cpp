#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define no (cout << "No\n")
#define yes (cout << "Yes\n")
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
        int n; cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a,a+n);

        int cnt=1;

        for (int i = 1; i < n; i++)
        {
            if(a[i]!=a[i-1]){
                cnt++;

                if(cnt>2) break;
            }
        }

        if(cnt==1) yes;
        else if(cnt>2) no;
        else{
            map<int,int> mp;

            for (int i = 0; i < n; i++)
            {
                mp[a[i]]++;
            }

            if(abs(mp[a[0]]-mp[a[n-1]])<=1) yes;
            else no;
            
        }
        
    }
     
    return 0;
}
