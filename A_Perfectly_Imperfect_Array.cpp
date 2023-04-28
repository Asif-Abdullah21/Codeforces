#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
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

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int f=0;

        for (int i = 0; i < n; i++)
        {
            int val = sqrt(a[i]);

            if(val*val != a[i])
            {
                f=1;
                break;
            }
        }

        if(f) cout << "YES\n";
        else cout << "NO\n";
        
        
    }
    

    return 0;
}