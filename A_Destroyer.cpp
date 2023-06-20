#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
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
        FIO;
        int n;
        cin >> n;

        int a[n];
        int cnt[101] ={0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }
        int f=1;

        for (int i = 100; i>=0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                if(cnt[i]>cnt[j]) 
                {
                    f=0;
                    break;
                }
            }
            
        }
        

        


        if(f) yy;
        else nn;


        
         
    }
     
    return 0;
}
