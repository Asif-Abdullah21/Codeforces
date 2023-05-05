#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define sz(v) v.size()
#define mem(a, x) memset(a, x, sizeof(a))
#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;

int pairs(int n)
{
    if(n==0) return 0;
    else return (n*(n-1))/2; 
    /*
    (n-1)*(n+1-1) theke asche sutro ta jehetu, 
    n 5 possible pair 4+3+2+1. tai sum of n numbers er sutro 
    theke eta banano jay
    */
}


int main()
{
    fio;
    int t,i;
    cin >> t;

    while (t--)
    {
         int n,k,f=0,a,b;
         cin >>n>>k;

         for ( i = 1; i <= n; i++)
         {
            if(pairs(i)+pairs(n-i)==k)
            {
                f=1;
                a =i;
                b= n-i;
                break;
            }
         }

      
         if(f)
         {
             cout << "YES\n";
             for (int j = 0; j < a; j++) cout << 1 << ' ';
             for (int j = 0; j < b; j++) cout << -1 << ' ';
             cout << endl;
         }
         else cout << "NO\n";
         
    }
    

    return 0;
}