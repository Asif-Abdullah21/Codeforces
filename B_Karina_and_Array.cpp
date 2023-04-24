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
        ll n;
        cin >> n;

        ll a[n+1];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a,a+n);

        if(a[0]<0 && a[1]<0 && (a[0]*a[1]>a[n-1]*a[n-2])) cout << a[0]*a[1] << endl;
        else cout << a[n-1]*a[n-2] << endl;
        
    }
    

    return 0;
}