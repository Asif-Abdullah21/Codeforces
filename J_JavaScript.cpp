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
    string s1,s2;
    cin >> s1 >> s2;

    bool flag = false;

    for (int i = 0; i < s1.size(); i++)
    {
        if((s1[i]>='a' && s1[i]<='z') || (s1[i]>='A' && s1[i]<='Z'))
        {
            flag = true;
            break;
        }
    }

    for (int i = 0; i < s2.size(); i++)
    {
        if((s2[i]>='a' && s2[i]<='z') || (s2[i]>='A' && s2[i]<='Z'))
        {
            flag = true;
            break;
        }
    }

    if(flag) cout << "NaN\n";
    else{
        int a = stoi(s1);
        int b = stoi(s2);

        cout << a-b << endl;
    }
    
     
    return 0;
}
