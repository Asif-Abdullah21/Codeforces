#include <bits/stdc++.h>
#define   nl         "\n"
#define   nn         (cout << "NO\n")
#define   yy         (cout << "YES\n")
#define   ss         " "
#define   ll         long long
#define   ull        unsigned long long
#define   pii        pair<int,int>
#define   pll        pair<long long,long long>
#define   rv(v)      v.begin(), v.end()
#define   sz(v)      v.size()
#define   mm(a, x)   memset(a, x, sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
///sort(a,a+n); array sorting[0 base index]
///reverse(a,a+n); array reverse[0 base index]
///sort(s.begin(),s.end()); string sorting
///reverse(s.begin(),s.end()); string reverse
///int max_element = *max_element(a,a+n);[0 base index]
///int min_element = *min_element(a,a+n);[0 base index]
///int max_indx = max_element(a,a+n)-a;[0 base index]
///int min_indx = min_element(a,a+n)-a;[0 base index]
using namespace std;
int main()
{
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        int ans = 1;
        string s;
        cin >> s;

        if(s[0]=='0') cout << 0 << endl;
        else
        {
            if(s[0] == '?') ans *= 9;
            for (int i = 1; i < s.size(); i++)
            {
                if(s[i]=='?') ans *= 10;
            }
            
            cout << ans << endl;
        }
    }
    

    return 0;
}
