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

         int val = n*2;

         int a[val];
         for (int i = 0; i < val; i++)
         {
            cin >> a[i];
         }

         sort(a,a+val);

         vector<pair<int,int>> v;

         for (int i = 0,j=val-1; i < j; i++,j--)
         {
             v.push_back({a[j],a[i]});
         }

         ll sum = 0;

         for (int i = 0; i < v.size()-1; i++)
         {
            sum += (abs(v[i].first-v[i+1].first));
            sum += (abs(v[i].second-v[i+1].second));
         }

         cout << sum << endl;


         for (int i = 0; i < v.size(); i++)
         {
            cout << v[i].first << " " << v[i].second << endl;
         }
         
         
         


         
    }
     
    return 0;
}
