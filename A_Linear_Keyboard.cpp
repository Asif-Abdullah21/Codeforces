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
        string s1,s2;
        cin >> s1 >> s2;
        int sum = 0,temp1=1,temp2=1;
        
        for (int i = 1; i < s2.size(); i++)
        {
            for (int j = 0; j < s1.size(); j++)
            {
                if(s2[i]==s1[j])
                {
                    temp2 = j+1;
                    break;
                }
            }
        
            for (int j = 0; j < s1.size(); j++)
            {
                if(s2[i-1]==s1[j])
                {
                    temp1 = j+1;
                    break;
                }
            }

            sum = sum + abs(temp2-temp1);
        }

        cout << sum << endl;
        
    }
    
    return 0;
} 

/* My first code(Accepted) Alhamdulillah:

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
        string s1,s2;
        cin >> s1 >> s2;
        int sum = 0,temp1=1,temp2=1;

        for (int i = 0; i < s1.size(); i++)
        {
            if(s1[i]==s2[0])
            {
                 temp1 = i+1;
                 break;
            }
        }
        

        for (int i = 1; i < s2.size(); i++)
        {
            for (int j = 0; j < s1.size(); j++)
            {
                if(s2[i]==s1[j])
                {
                    temp2 = j+1;
                    break;
                }
            }

            sum = sum + abs(temp2-temp1);
            temp1 = temp2; 
        }

        cout << sum << endl;
        
    }
    
    return 0;
} 

*/

/*

#include<bits/stdc++.h>
#define   nl         "\n"
#define   nn         (cout << "NO\n")
#define   yy         (cout << "YES\n")
#define   ss         " "
#define   ll         long long
#define   pi         pair<int,int>
#define   rv(v)      v.begin(),v.end()
#define   sz(v)      v.size()
#define   mm(a,x)    memset(a,x,sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;  // masud_abdullah
    int t;
    cin>>t;
    while(t--)
    {
        int cnt=0;
        string s1,s2;
        cin>>s1>>s2;

        for(int i=0;i<sz(s2)-1;i++)
        {
            int c1=0,c2=0;
            for(int j=0;j<sz(s1);j++)
            {
                if(s2[i]==s1[j])
                {
                    c1=j+1;
                }
            }
            for(int j=0;j<sz(s1);j++)
            {
                if(s2[i+1]==s1[j])
                {
                    c2=j+1;
                }
            }
            cnt+= abs(c2-c1);
        }
        cout<<cnt<<nl;
    }
    return 0;
}


*/