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
    string pass;
    cin >> pass;

    int t;
    cin >> t;

    string s,str;

    for (int i = 0; i < t; i++)
    {
        cin >> s;
        str += s;
    }

   // cout << str << endl;

    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]==pass[0] && str[i+1]==pass[1])
        {
            cout << "YES\n";
            return 0;
        }
    
        if(str[i]==pass[1] && str[i+1]==pass[0])
        {
            cout << "YES\n";
            return 0;
        }
    }

    int cnt=0;
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]==pass[0] && i%2 !=0)
        {
            cnt=1;
        }
        if(str[i]==pass[1] && i%2==0)
        {
            if(cnt==1) cnt++;
        }

        if(cnt>=2) 
        {
            cout << "YES\n";
            return 0;
        }
    }

    cnt=0;
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]==pass[1] && i%2==0)
        {
            cnt=1;
        }
        if(str[i]==pass[0] && i%2 !=0)
        {
            if(cnt==1) cnt++;
        }
       

        if(cnt>=2) 
        {
            cout << "YES\n";
            return 0;
        }
    }


    cout << "NO\n";
    
    

    return 0;
}