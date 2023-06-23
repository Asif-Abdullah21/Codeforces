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
using namespace std;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    string str;
    cin >> str;
    int k;
    cin >> k;
    set<char> s;

    if(str.size()<k)
    {
         cout << "impossible\n";
         return 0;
    }

    for (int i = 0; i < str.size(); i++)
    {
        s.insert(str[i]);
    }

    if(s.size()>=k) cout << 0 << endl;
    else cout << k-s.size() << endl;
    
     
    return 0;
}




// #include <bits/stdc++.h>
// #define endl "\n"
// #define nn (cout << "NO\n")
// #define yy (cout << "YES\n")
// #define ll long long
// #define ull unsigned long long
// #define gcd(a, b) __gcd(a, b)
// #define lcm(a, b) ((a / gcd(a, b)) * b)
// #define pii pair<int, int>
// #define pll pair<long long, long long>
// #define mm(a, x) memset(a, x, sizeof(a))
// using namespace std;
// #define FIO                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);

// int main()
// {
   
  
//         string s;
//         int k;

//         cin>> s>> k;
//         if(s.size()<k) cout << "impossible\n";
//         else{
//             sort(s.begin(),s.end());
//             int cnt=1;
//             for (int i = 1; i < s.size(); i++)
//             {
//                 if(s[i]!=s[i-1]) cnt++;
//             }

//             if(cnt>=k) cout << 0 << endl;
//             else cout << k-cnt << endl;
            
//         }
        
     
//     return 0;
// }
