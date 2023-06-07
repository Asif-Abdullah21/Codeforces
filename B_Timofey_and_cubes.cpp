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
    int n;
    cin >> n;
    int a[n+2];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int i=1,j=n;

    while (i<=n-i+1)
    {
        if(i%2 !=0)swap(a[i],a[j]);
        i++;
        j--;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }

    
     
    return 0;
}
