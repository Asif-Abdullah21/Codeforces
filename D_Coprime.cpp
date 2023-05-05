#include <bits/stdc++.h>
#define nl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define sz(v) v.size()
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
/// sort(a,a+n); array sorting[0 base index]
/// reverse(a,a+n); array reverse[0 base index]
/// sort(s.begin(),s.end()); string sorting
/// reverse(s.begin(),s.end()); string reverse
/// int max_element = *max_element(a,a+n);[0 base index]
/// int min_element = *min_element(a,a+n);[0 base index]
/// int max_indx = max_element(a,a+n)-a;[0 base index]
/// int min_indx = min_element(a,a+n)-a;[0 base index]
using namespace std;

int main()
{
    int t;
    cin>>t; //code explained by Abid_Ul_Islam brother
    while(t--)
    {
        int n,x;
        int cnt[1005] = {0};
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            cin >> x;

            cnt[x] = max(cnt[x],i);// storing the max index where the value is
        }

        int ans = -1;
        for (int i = 1; i <= 1000; i++)
        {
            if(cnt[i] != 0)
            {
                for (int j = 1; j <= 1000; j++)
                {
                    if(cnt[j] !=0 && __gcd(i,j)==1)
                    {
                        ans = max(ans,cnt[i]+cnt[j]);
                    }
                }
                
            }
        }

        cout << ans << endl;
        
        
    }
    return 0;
}
