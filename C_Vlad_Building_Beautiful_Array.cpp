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
int main()
{
    fio;
    int t;
    cin >> t;

    while (t--)
    {
        ll n,f=1;
        cin >> n;

        ll a[n + 1];
        ll mn_odd = 1e10;

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 != 0 && a[i] < mn_odd)
              {
                  mn_odd = a[i];
                  f=0;
              }
            
        }

        if(f) cout << "YES\n";
        else
        {
            int f=1;
            for (int i = 0; i < n; i++)
            {
                if(a[i]%2==0 && a[i]-mn_odd<1)
                {
                    f=0;
                    break;
                }
            }

             if(f) cout << "YES\n";
             else cout << "NO\n";
            
        }
    }
    return 0;
}

/*muhammad_sayem:

#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long,long long>
#define      rev(a)          reverse(a, a+n);
#define      sort(a)         sort(a, a+n);
#define      Srev(s)         reverse(s.begin(), s.end());
#define      sz(s)           s.size()
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    int test;
    cin >> test;

    while(test--){
        int n, i, flag = 0;  //Sayem's Code
        cin >> n;
        int a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a);

        for(i=0; i<n-1; i++){
            if( (a[i]%2 == 0 && a[i+1]%2 != 0) || (a[i]%2 != 0 && a[i+1]%2 == 0)){
                flag = 1;
                break;
            }
        }

        if(flag == 0) cout << yes << endl;
        else{
            if(a[0]%2 != 0) cout << yes << endl;
            else cout << no << endl;
        }

    }


    return 0;
}




*/