#include <bits/stdc++.h>
#define nl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define sz(v) v.size()
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
/// sort(a,a+n); array sorting[0 base index]
/// reverse(a,a+n); array reverse[0 base index]
/// sort(s.begin(),s.end()); string sorting
/// reverse(s.begin(),s.end()); string reverse
/// int max_element = *max_element(a,a+n);[0 base index]
/// int min_element = *min_element(a,a+n);[0 base index]
/// int max_indx = max_element(a,a+n)-a;[0 base index]
/// int min_indx = min_element(a,a+n)-a;[0 base index]
using namespace std;

int main()
{
    int t;
    cin>>t;  // Logic + Expalanation from abid vai
    while(t--)
    {
        ll l,r,a;
        cin >> l >> r >> a;
        ll x = l/a;
        ll y = r/a;

        if(x==y) cout << (r/a) + (r%a) << endl;
        else
        {
             x = (r/a) + (r%a);
             y = ((r/a)-1) + (a-1); // a-1 = highest mod value of a

             ll ans = max(x,y);

             cout << ans << endl;
        }


    }
    return 0;
}
