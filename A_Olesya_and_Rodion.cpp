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
    int n,t; //concept form muhammad_sayem
    cin >> n >> t;

    if(n==1 && t==10) cout << -1 << endl;
    else if(t<10)
    {
        for (int i = 0; i < n; i++)
        {
            cout << t;
        }
        cout << endl;
    }
    else 
    {
        cout << 1;
        for (int i = 0; i < n-1; i++)
        {
            cout << 0;
        }

        cout << endl;
        
    }

    return 0;
}