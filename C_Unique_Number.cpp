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
        string str; /// code idea from Rifat vai's code ///
        int n;
        cin >> n;
        if(n>45) cout << -1 << endl;
        else
        {
            for (int i = 9; i > 0; i--)
            {
                if(n-i>=0)
                {
                     n = n-i;
                     str += (i+48);//i+48 kore songka ke abr string a conver kortesi
                }

                if(n==0)
                {
                    break;
                }
            }

            // if(n==0)
            // {
                reverse(str.begin(),str.end());
                cout << str << endl;
           // }
            
        }
    }
    

    return 0;
}