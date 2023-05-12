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
cin >>t;

while(t--)
{
    string s;
    cin >> s;
    int f=0;

    for (int i = 1; i < sz(s)/2; i++)
    {
        if(s[i]!=s[i-1]) f=1;
    }

    if(f) cout << "YES\n";
    else cout << "NO\n";
    
}
return 0;
}