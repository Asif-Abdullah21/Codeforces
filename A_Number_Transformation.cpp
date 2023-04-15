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

// Masud_ Abdullah's code in below:

// #include<bits/stdc++.h>
// #define   nl         "\n"
// #define   nn         (cout << "NO\n")
// #define   yy         (cout << "YES\n")
// #define   ss         " "
// #define   ll         long long
// #define   pi         pair<int,int>
// #define   rv(v)      v.begin(),v.end()
// #define   sz(v)      v.size()
// #define   mm(a,x)    memset(a,x,sizeof(a))
// #define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int x,y;
//         cin>>x>>y;
//         if(x>y)cout<<0<<ss<<0<<nl;
//         else{
//                 if(y%x==0)cout<<1<<ss<<y/x<<nl;
//                 else cout<<0<<ss<<0<<nl;
//         }
//     }

//     return 0;
// }

