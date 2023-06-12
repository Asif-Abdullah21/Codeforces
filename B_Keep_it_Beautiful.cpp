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
        FIO;
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int cnt=1,f=0,indx=0;
        for (int i = 1; i < n; i++)
        {
            if(v[i]<v[i-1])
            {
                f=1;
                indx=i;
                break;
            }
            else cnt++;
        }

        int last_val = v[indx];

        for (int i = indx+1; i < n; i++)
        {
            if(last_val==v[i]){
                 cnt++;
                 indx = i;
            }
            else break;
        }


        for (int i = 0; i <= indx; i++)
        {
            cout << 1;
        }

        for (int i = indx+1; i < n; i++)
        {
            if(v[i]>v[0]) cout << 0;
            else if(v[i]<last_val) cout << 0;
            else cout << 1;
        }
        cout << endl;
        
         
    }
     
    return 0;
}
