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
        int n,m;
        cin >> n >> m;

        char s[n][m];
       
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>> s[i][j];
            }
            
        }

        int v=0,ika=0,k=0,a=0;
        
        

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
               // cout<<j<<i;
                
                
                if(s[j][i]=='v' && v==0)
                {
                //    cout << s[j][i] << endl;
                    v++;
                    break;
                }

                if(s[j][i]=='i' && v!=0 && ika==0)
                {
                   // cout << s[j][i] << endl;
                    ika++;
                    break;
                }

                if(s[j][i]=='k' && ika!=0 && k==0)
                {
                   // cout << s[j][i] << endl;
                    k++;
                    break;
                }

                if(s[j][i]=='a' && k!=0 && a==0)
                {
                   // cout << s[j][i] << endl;
                    a++;
                    break;
                }
            }
           // cout << endl;
            
        }

        if(a!=0) yy;
        else nn;


        
        
         
    }
     
    return 0;
}
