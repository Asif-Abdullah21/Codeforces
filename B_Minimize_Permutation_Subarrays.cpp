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
        int n;
        cin >> n;
        int a[n+1];
        int one_i =-1;
        int two_i =-1;

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if(a[i]==1) one_i = i;
            if(a[i]==2) two_i = i;
        }

        int mx_i =max_element(a+1,a+n+1)-a;
        if(two_i<one_i && mx_i>one_i) cout << one_i << " " << mx_i << endl;
        else if(two_i<one_i && mx_i<two_i) cout << mx_i << " " << two_i << endl;
        else if(one_i<two_i && mx_i<one_i) cout << mx_i << " " << one_i << endl;
        else if(one_i<two_i && mx_i>two_i) cout << mx_i << " " << two_i << endl;
        else cout << one_i << " " << one_i << endl;
        
    }
    
     
    return 0;
}
