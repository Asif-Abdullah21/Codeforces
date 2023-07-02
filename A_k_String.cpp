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
    int k;
    cin >> k;

    string s;
    cin >> s;

    int cnt[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        cnt[s[i] - 97]++;
    }

    bool flag = true;

    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] % k != 0)
            flag = false;
    }

    if (!flag)
        cout << -1 << endl;
    else
    {
        string str;
        for (int i = 0; i < 26; i++)
        {
            if (cnt[i] > 0)
            {
                for (int j = 0; j < cnt[i] / k; j++)
                {
                    str += char(i+97);
                }
            }
        }

        for (int i = 0; i < k; i++)
        {
            cout << str;
        }

        cout << endl;
        
    }

    return 0;
}
