#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define no (cout << "No\n")
#define yes (cout << "Yes\n")
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
        int n,m; cin >>n>> m;
        string s1,s2; cin >> s1 >> s2;

        int f1=1,f2=1;

        for (int i = 1; i < n; i++)
        {
            if(s1[i]==s1[i-1])
            {
                f1=0;
                break;
            }
        }

        for (int i = 1; i < m; i++)
        {
            if(s2[i]==s2[i-1])
            {
                f2=0;
                break;
            }
        }

        if(f1) {
            yes;
            continue;
        }   
        if(f1==0 && f2==0)
        {
            no;
            continue;
        }

        int tmZero=0,tmOne=0;

        for (int i = 1; i < n; i++)
        {
            if(s1[i]==s1[i-1])
            {
                if(s1[i]=='0')
                {
                    tmZero =1;
                }
                else if(s1[i]=='1')
                {
                    tmOne =1;
                }
            }
        }

        if(tmZero==1 && tmOne==1)
        {
            no;
            continue;
        }

        if(tmZero==1)
        {
            if(s2[0]=='1' && s2[m-1]=='1') yes;
            else no;
        }
        else if(tmOne==1)
        {
            if(s2[0]=='0' && s2[m-1]=='0') yes;
            else no;
        }


    }
     
    return 0;
}
