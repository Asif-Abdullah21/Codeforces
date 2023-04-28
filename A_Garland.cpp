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

        int cnt[10]={0};

        for (int i = 0; i < s.size(); i++)
        {
            cnt[s[i]-48]++;
        }

        int cnt_mx = *max_element(cnt,cnt+10);

        if(cnt_mx==1 || cnt_mx==2) cout << 4 << endl;
        else if(cnt_mx==3) cout << 6 << endl;
        else cout << -1 << endl;
        
    }
    

    return 0;
}


/*

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
        int cnt=1; //cnt == same numbers

        sort(s.begin(),s.end());
        for (int i = 1; i < s.size(); i++)
        {
            if(s[i]==s[i-1]) cnt++;
        }

        if(s[1]!=s[2]) cnt = 1;

        if(cnt==1 || cnt==2) cout << 4 << endl;
        else if(cnt==3) cout << 6 << endl;
        else cout << -1 << endl;
        
        
    }
    

    return 0;
}


*/