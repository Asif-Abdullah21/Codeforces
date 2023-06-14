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
    cin >> t;  //idea from algobot youtube channel

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

        vector<int> taken;
        string s;
        taken.push_back(v[0]);
        s +='1';

        bool brocken = false;
        
        for (int i = 1; i < n; i++)
        {
            if(brocken == false)
            {
                if(v[i]>=taken.back())
                {
                    s += '1';
                    taken.push_back(v[i]);
                }
                else{
                    if(v[i]<=v[0]){
                        s +='1';
                        taken.push_back(v[i]);
                        brocken = true;
                    }
                    
                    else s +='0';
                }
            }
            else
            {
                if(v[i]<taken.back())
                {
                    s += '0';
                }
                else if(v[i]>v[0])
                {
                    s += '0';
                }
                else
                {
                    s +='1';
                    taken.push_back(v[i]);
                }
            }

        }
        

        cout << s << endl;
        
         
    }
     
    return 0;
}