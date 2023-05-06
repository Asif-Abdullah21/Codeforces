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
        int n,k;
        cin >> n >> k;
        string str[n+1];

        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }

        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if(str[0]==str[i]) cnt++;
        }

        cout << cnt << endl;
        
        
    }
    

    return 0;
}