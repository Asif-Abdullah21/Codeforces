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
    int x,y;
    cin >> x >> y;

    if(y<x) cout << "0 0\n";
    else if(y%x !=0) cout << "0 0\n";
    else{
        cout << "1 "<< y/x<< endl; 
    }
}


return 0;
}