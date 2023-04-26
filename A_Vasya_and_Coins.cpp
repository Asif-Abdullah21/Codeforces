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

while(t--)
{
    ll a,b;
    cin >> a >> b;

    if(a==0) cout << 1 << endl;
    else cout << (b*2)+a+1 << endl;
}
return 0;
}