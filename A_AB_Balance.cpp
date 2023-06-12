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
        string s;
        cin >> s;
        int ab = 0, ba = 0;
        string s1 = "";

        for (int i = 0; i < s.size() - 1; i++)
        {

            s1 += s[i];
            s1 += s[i + 1];

            if (s1 == "ab")
                ab++;

            else if (s1 == "ba")
                ba++;
        }

        int cnt1 = 0, cnt2 = 0,f=0;

        int val = abs(ab - ba);

        if (ab == ba)
            cout << s << endl;
        else if (ab > ba)
        {
            if (s[0] == 'a' && s[1] == 'b')
            {
                s[0] = 'b';
                cnt1++;
            }
            if (cnt1 == val)
             {
                   cout << s << endl;
                   f=1;
             }
            else
            {
                for (int i = 2; i < s.size(); i++)
                {
                    if (s[i] == 'a' && s[i + 1] == 'b' && s[i - 1] == 'b')
                    s[i] = 'b';
                    cnt1++;
                    if(cnt1==val)
                    {
                        cout << s << endl;
                        f=1;
                        break;
                    }
                }
            }
        }

        else if (ba > ab)
        {
            if (s[1] == 'a' && s[1] == 'b')
                cnt2++;

            for (int i = 2; i < s.size(); i++)
            {
                if (s[i] == 'a' && s[i + 1] == 'b' && s[i - 1] == 'b')
                    cnt2++;
            }
        }
    }

    return 0;
}
