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
    string str, s1, s2;
    cin >> t;
    int cnt1 = 0, cnt2 = 0;
    int f=0;

    while (t--)
    {
        cin >> str;
     
        if(f==0) 
        {
            s1 = str;
            f++;
        }
        
        if (str == s1)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
            s2 = str;
        }
    }

    if (cnt1 > cnt2)
        cout << s1 << endl;
    else
        cout << s2 << endl;

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
    int n;
    cin >> n;
    int cnt1 = 1, cnt2 = 0; //concept from muhammad_sayem

    string str[n+1];
    string s1, s2;
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    s1 = str[0];
    for (int i = 1; i < n; i++)
    {
        if(str[i] == s1) cnt1++;
        else{
             cnt2++;
             s2=str[i];
        }
    }

    if(cnt1>cnt2) cout << s1 << endl;
    else cout << s2 << endl;
    

    return 0;
}



*/