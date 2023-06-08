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
#define sz(v) v.size()
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
        int n;
        cin >> n;

        string s;
        cin >> s;
        int cnt1[n],cnt2[n];
        set<char> s1,s2;

        for (int i = 0; i < n; i++)
        {
            s1.insert(s[i]);
            cnt1[i] = s1.size();
        }

        for (int i = n-1; i >= 0; i--)
        {
            s2.insert(s[i]);
            cnt2[i] = s2.size();
        }

        // for (int i = 0; i < n; i++)
        // {   
        //     cout << cnt1[i] << " ";
        // }
        // cout << endl;

        
        // for (int i = 0; i < n; i++)
        // {
        //     cout << cnt2[i] << " ";
        // }
        // cout << endl;

        int mx = INT_MIN;

        for (int i = 0; i < n-1; i++)
        {
            mx = max(mx,cnt1[i]+cnt2[i+1]);
        }
        
        cout << mx << endl;
        
    }
     
    return 0;
}





//---------------------------------------------------------




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
// #define sz(v) v.size()
// #define mm(a, x) memset(a, x, sizeof(a))
// #define FIO                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// using namespace std;
// int main()
// {
//     FIO;
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         string s;
//         cin >> s;
//         int cnt1[n],cnt2[n];
//         int a[26]={0};
//         int b[26]={0};
//         //set<char> s1,s2;
//         int cnt=0;

//         for (int i = 0; i < n; i++)
//         {
//             if(a[s[i]-'a']==0)
//             {
//                 a[s[i]-'a']++;
//                 cnt++;
//             }
//             cnt1[i] = cnt;
//         }
//         cnt = 0;

//         for (int i = n-1; i >= 0; i--)
//         {
//             if(b[s[i]-'a']==0)
//             {
//                 cnt++;
//                 b[s[i]-'a']++;
//             }
//             cnt2[i] = cnt;
//         }

//         // for (int i = 0; i < n; i++)
//         // {   
//         //     cout << cnt1[i] << " ";
//         // }
//         // cout << endl;

        
//         // for (int i = 0; i < n; i++)
//         // {
//         //     cout << cnt2[i] << " ";
//         // }
//         // cout << endl;

//         int mx = INT_MIN;

//         for (int i = 0; i < n-1; i++)
//         {
//             mx = max(mx,cnt1[i]+cnt2[i+1]);
//         }
        
//         cout << mx << endl;
        
//     }
     
//     return 0;
// }