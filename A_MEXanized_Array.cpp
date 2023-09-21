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
        int n,k,x;
        cin >> n >> k >> x;

        if(n<k || x<k-1) cout << -1 << endl; 
        else{
            int temp = k-1;
            ll sum = (temp*(temp+1))/2;

            if(n>k)
            {
                int baki = n-k;
                if(x>k) sum += (x*baki);
                else sum += (baki*temp);
            }

            cout <<sum << endl;
        }
    }
     
    return 0;
}
