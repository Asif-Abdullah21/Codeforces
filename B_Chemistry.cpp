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
        int n,k; cin >> n >> k;
        string s; cin >> s;
        map<char,int> mp;

        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        } 
        int cnt=0;  

        for(auto it:mp)
        {
            if(it.second%2!=0)
            {
                cnt++;
            }
        }

        if(cnt<=k+1) yy; //jehetu palindrome a ektai odd thakte pare , er cheye besi na, even nia matha betha nai
        else nn;

         
    }
     
    return 0;
}
