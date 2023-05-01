#include<bits/stdc++.h>
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   fio        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int main()
{
fio;
int t;
cin >> t;
while (t--)
{
    ll x,y,a,b;
    cin >> x >> y >> a >> b;

    ll ans =0;

    if(x>y) swap(x,y);

    ans = (y-x)*a;
    
    ll val1 = (x*2)*a;
    ll val2 = x*b;

    if(val1>=val2) ans += val2;
    else ans += val1;

    cout << ans << endl;
}


return 0;
}

/* 

#include<bits/stdc++.h>
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   fio        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int main()
{
fio;
int t;
cin >> t;
while (t--)
{
    ll x,y,a,b;
    cin >> x >> y >> a >> b;

    ll mn = min(x,y);
    ll mx = max(x,y);
    
    ll val1 = (mn*2)*a;
    ll val2 = mn*b;

    ll ans = 0;
    if(val2<=val1) 
    {
       // x = x-mn;
       // y = y-mn;
        ans += val2;
        ans += (mx-mn)*a;//ans += (x+y)*a;
    } 
    else
    {
        ans += (x+y)*a;
    }

    cout << ans << endl;
}


return 0;
}

*/

/* 

#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pii             pair <int,int>
#define      pll             pair<long long,long long>
#define      pb              push_back
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;             // code explainer (youtube channel) //

    int test;
    cin >> test;;
    while(test--){
        ll x, y;
        cin >> x >> y;
        ll a, b;
        cin >> a >> b;
        ll res = 0;

        if(x>y) swap(x,y);

        res += a*(y-x);

        if(2*a < b) res += x*(2*a);
        else res += x*b;

        cout << res << endl;
    }

    return 0;
}

*/