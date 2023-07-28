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
    string s;   //idea from Tasir vai and Rifat Vai's code //
    cin >> s;
    
    int len = s.size();
    int cnt=0;

    while (len>1)
    {
        ll sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            sum += (s[i]-'0');
        }

        s = to_string(sum);
        len = s.size();
        cnt++;
        
    }

    cout << cnt << endl;
    
    
    return 0;
}
