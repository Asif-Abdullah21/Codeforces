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
        int n;
        cin >> n;

        string s;
        cin >> s;
        string str="",temp = "";
        int cnt=0,f=0;
        
        for (int i = 0; i < n-1; i++)
        {
            if(s[i]!=s[i+1]) f=1;
            temp += s[i]; 
            temp += s[i+1]; 
            if((str.find(temp) != string :: npos)) cnt = cnt;
            else str += temp;
        }
        
        if(f==0) cout << 1 << endl;
        else cout << cnt << endl;
        
    }
    

    return 0;
}