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

bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(a.first==b.first) return a.second<b.second;
    else return a.first>b.first;
}

int main()
{
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        int n,k;
        cin >> n >>k;
        int a[n+2];

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            a[i] = a[i]%k;
        }

        vector<int> ans;
        vector<pair<int,int>> v;

        for (int i = 1; i <= n; i++)
        {
            if(a[i]==0) ans.push_back(i);
            else{
                v.push_back({a[i],i});
            }
        }

        sort(v.begin(),v.end(),cmp);

        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i].first << " " << v[i].second<< endl;
        // }
        
        for (int i = 0; i < v.size(); i++)
        {
            ans.push_back(v[i].second);
        }

        for(int i:ans) 
        {
            cout <<i << " ";
        }

        cout << endl;
        
    }
     
    return 0;
}
