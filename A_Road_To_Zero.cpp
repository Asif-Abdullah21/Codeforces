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