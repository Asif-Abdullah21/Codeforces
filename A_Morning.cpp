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
        string s; cin >> s;
        int sum = 0;

        if(s[0]=='1') sum++;
        else if(s[0]=='0') sum = 10; 
        else sum = (s[0]-'0'); 

        for (int i = 1; i < s.size(); i++)
        {
            if(s[i]=='0' && s[i-1]=='0')
            {
                sum++;
            }
            else if(s[i]=='0' && s[i-1]!='0')
            {
                int a = s[i-1]-'0';
                int b = s[i]-'0';

                sum += (11-a);
            }
            else if(s[i]!='0' && s[i-1]=='0')
            {
                int a = s[i-1]-'0';
                int b = s[i]-'0';

                sum += (11-b);
            }
            else{
                int a = s[i-1]-'0';
                int b = s[i]-'0';

                sum += (abs(b-a)+1);
            }

            
         
        }

        cout << sum << endl;
        
    }
     
    return 0;
}
