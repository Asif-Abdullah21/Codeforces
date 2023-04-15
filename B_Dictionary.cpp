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
        string s;
        cin >> s;

        int val=s[0]-97;
        int ans =0;

        ans = (val*25) + s[1]-'a';

        if(s[0]>s[1]) cout << ans+1<< endl;
        else cout << ans << endl;

    }
    

    return 0;
}