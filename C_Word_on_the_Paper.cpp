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
        char s[10][10];

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> s[i][j];
            }
            
        }

        string str;

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if(s[j][i]!='.') str += s[j][i];
            }
        }

        cout << str << endl;
        
         
    }
     
    return 0;
}
