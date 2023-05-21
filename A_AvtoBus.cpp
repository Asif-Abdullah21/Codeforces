#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define sort(a) sort(a,a+n)
#define rev(a) reverse(a,a+n)
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
        ll n;
        cin >> n;

        if(n<4 || n%2 !=0) cout << -1 << endl;
        else
        {
            ll temp_n=n;
            //for minimum bus:
            ll mn=0;
            ll rem = n%6;
            if(rem==0) mn = (n/6);
            else
            {
                mn = (n/6)-1;
                n = n - (6*mn);
                mn += (n/4); // mn + 2
            }

            //for maximum bus:

            ll mx = 0;
            rem = temp_n%4;
            if(temp_n%4==0) mx = (temp_n/4);
            else
            {
                mx = (temp_n/4)-1;
                temp_n = temp_n - (4*mx);
                mx += (temp_n/6); //mx + 1
            }

            cout << mn << " " << mx << endl;
        }
    }
     
    return 0;
}
