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
        int n;
        cin >> n;
        int a[n + 1];
        int b[n + 1];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int f = 1;

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[n - 1]) swap(a[i],b[i]);

            if (b[i] > b[n - 1]) swap(a[i],b[i]);

        }

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[n - 1] || b[i] > b[n - 1])
            {
                f = 0;
                break;
            }
        }

        if (f)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}

/* masud_abdullah

#include <bits/stdc++.h>
#define nl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define ll long long
#define pi pair<int, int>
#define rv(v) v.begin(), v.end()
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
        int n, f = 0;
        cin >> n;
        int a[n], b[n];
        
        for (int i = 0; i < n; i++)cin >> a[i];

        for (int i = 0; i < n; i++)cin >> b[i];

        for (int i = 0; i < n; i++)
        {
            if (a[i] > a[n - 1] || b[i] > b[n - 1])
            {
                swap(a[i], b[i]);
                if (a[i] > a[n - 1] || b[i] > b[n - 1])
                {
                    f = -1;
                    break;
                }
            }
        }

        if(f==0) cout << "YES\n";
        else cout << "NO\n";
        //cout << (f == 0 ? "YES" : "NO") << nl;
    }
    return 0;
}


*/

/* 

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
        int n;
        cin >> n;
        int a[n + 1];
        int b[n + 1];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int f = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[n - 1])
            {
                int temp = a[i];
                a[i] = b[i];
                b[i] = temp;
            }

            if (b[i] > b[n - 1])
            {
                int temp = b[i];
                b[i] = a[i];
                a[i] = temp;
            }
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[n - 1] || b[i] > b[n - 1])
            {
                f = 1;
                break;
            }
        }

        if (f == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}

*/