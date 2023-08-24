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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> v;
        v.push_back(a[0]); 
        for (int i = 1; i < n; i++)
        {
            v.push_back(1);
            if(v.back()==a[i-1]) v.pop_back();
            v.push_back(a[i]);
        }

        cout << v.size() << endl;
        for(int val:v) cout << val <<" ";

        // cout << v.front() << " ";
        // for (int i = 1; i < v.size(); i++)
        // {
        //     if(v[i]>=v[i-1]) cout << v[i] << " ";
        // }
        

        cout << endl;
        
    }
     
    return 0;
}
