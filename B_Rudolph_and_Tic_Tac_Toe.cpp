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
        char c[5][5];

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> c[i][j];
            }
        }

        if(c[0][0]=='X' && c[1][1]=='X' && c[2][2]=='X') cout << "X\n";
        else if(c[0][0]=='O' && c[1][1]=='O' && c[2][2]=='O') cout << "O\n";
        else if(c[0][0]=='+' && c[1][1]=='+' && c[2][2]=='+') cout << "+\n";
        else if(c[0][2]=='X' && c[1][1]=='X' && c[2][0]=='X') cout << "X\n";
        else if(c[0][2]=='O' && c[1][1]=='O' && c[2][0]=='O') cout << "O\n";
        else if(c[0][2]=='+' && c[1][1]=='+' && c[2][0]=='+') cout << "+\n";

        else if(c[0][0]=='X' && c[0][1]=='X' && c[0][2]=='X') cout << "X\n";
        else if(c[0][0]=='O' && c[0][1]=='O' && c[0][2]=='O') cout << "O\n";
        else if(c[0][0]=='+' && c[0][1]=='+' && c[0][2]=='+') cout << "+\n";

        else if(c[0][0]=='X' && c[0][1]=='X' && c[0][2]=='X') cout << "X\n";
        else if(c[0][0]=='O' && c[0][1]=='O' && c[0][2]=='O') cout << "O\n";
        else if(c[0][0]=='+' && c[0][1]=='+' && c[0][2]=='+') cout << "+\n";

        else if(c[1][0]=='X' && c[1][1]=='X' && c[1][2]=='X') cout << "X\n";
        else if(c[1][0]=='O' && c[1][1]=='O' && c[1][2]=='O') cout << "O\n";
        else if(c[1][0]=='+' && c[1][1]=='+' && c[1][2]=='+') cout << "+\n";

        else if(c[2][0]=='+' && c[2][1]=='+' && c[2][2]=='+') cout << "+\n";
        else if(c[2][0]=='X' && c[2][1]=='X' && c[2][2]=='X') cout << "X\n";
        else if(c[2][0]=='O' && c[2][1]=='O' && c[2][2]=='O') cout << "O\n";

        else if(c[0][0]=='X' && c[1][0]=='X' && c[2][0]=='X') cout << "X\n";
        else if(c[0][0]=='O' && c[1][0]=='O' && c[2][0]=='O') cout << "O\n";
        else if(c[0][0]=='+' && c[1][0]=='+' && c[2][0]=='+') cout << "+\n";

        else if(c[0][1]=='X' && c[1][1]=='X' && c[2][1]=='X') cout << "X\n";
        else if(c[0][1]=='O' && c[1][1]=='O' && c[2][1]=='O') cout << "O\n";
        else if(c[0][1]=='+' && c[1][1]=='+' && c[2][1]=='+') cout << "+\n";

        else if(c[0][2]=='+' && c[1][2]=='+' && c[2][2]=='+') cout << "+\n";
        else if(c[0][2]=='X' && c[1][2]=='X' && c[2][2]=='X') cout << "X\n";
        else if(c[0][2]=='O' && c[1][2]=='O' && c[2][2]=='O') cout << "O\n";

        else cout << "DRAW\n";

        
    }

    return 0;
}
