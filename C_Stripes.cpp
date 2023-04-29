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
int main() //taken help from Coding Community | Newton School
{
    fio;
    int t;
    cin >> t;

    while (t--)
    {
        char s[10][10];

        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                cin >> s[i][j];
            }
        }

        int cnt_r;

        for (int i = 1; i <= 8; i++)
        {
            cnt_r=0;
            for (int j = 1; j <= 8; j++)
            {
                if(s[i][j]=='R') cnt_r++;       
            }

            if(cnt_r==8) break;
        }

        if(cnt_r==8) cout << "R\n";
        else cout << "B\n";
        
    }
    

    return 0;
}