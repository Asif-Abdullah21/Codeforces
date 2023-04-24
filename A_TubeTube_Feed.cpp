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

    int test;
    cin >> test;

    while (test--)
    {
        int q, t;
        cin >> q >> t;

        pii a[q + 1];

        for (int i = 0; i < q; i++)
        {
            cin >> a[i].first;
        }

        for (int i = 0; i < q; i++)
        {
            cin >> a[i].second;
        }

        int f = 0;

        for (int i = 0; i < q; i++)
        {
            if (a[i].first+i <= t)
            {
                f = 1;
                break;
            }
        }

        int mx = 0;
        if (f == 0)
            cout << -1 << endl;
        else
        {
            mx = -1;
            for (int i = 0; i < q; i++)
            {
                if (a[i].first+i <= t && a[i].second > mx)
                {
                    mx = i + 1;
                }
            }

            cout << mx << endl;
        }
    }

    return 0;
}