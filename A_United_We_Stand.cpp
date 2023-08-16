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
        int n;
        cin >> n;
        int a[n];
        vector<int> v1;
        vector<int> v2;

        for (int i = 0; i < n; i++)
        {
           cin >> a[i];
        }

        sort(a,a+n);
        int cnt=1;

        int i=n-1;
        while (i>0 && a[i]==a[i-1])
        {
            cnt++;  
            i--;      
        }
        
        if(cnt!=n)
        {
           // cout << cnt << endl;
            cout << n-cnt << " " << cnt << endl;
            int temp=0;
            for (int i = 0; i < n-cnt; i++)
            {
                cout << a[i] << " ";
                temp++;
            }

            cout << endl;
            
            
            for (int j = temp; j < n; j++)
            {
                cout << a[j] << " ";
            }
            cout << endl; 
        }
        else cout << -1 << endl;

         
    }
     
    return 0;
}
