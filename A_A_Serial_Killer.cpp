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
    string s1,s2;
    cin >> s1 >> s2;
    cout << s1 << " " << s2 << endl;

    int n;
    cin >> n;
    string x,y;

    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y;
        if(x==s1)
        {
            cout << y << " " << s2 << endl;
            s1 = y;
        }
        else if(x==s2)
        {
            cout << s1 << " " << y << endl;
            s2=y;
        }
    }
    
    
    
     
    return 0;
}




//--------------------------------------------


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
//     string s1,s2;
//     cin >> s1 >> s2;
//     cout << s1 << " " << s2 << endl;

//     int n;
//     cin >> n;

//     vector<string> v1;
//     vector<string> v2;
//     v1.push_back(s1);
//     v2.push_back(s2);

//     for (int i = 1; i <= n; i++)
//     {
//         cin >> s1 >> s2;
//         if(s1==v1.back())
//         {
//             cout << v2.back() << " " << s2 << endl;
//             v1.pop_back();
//             v1.push_back(s2);
//         }
//         else if(s1==v2.back())
//         {
//             cout << v1.back() << " " << s2 << endl;
//             v2.pop_back();
//             v2.push_back(s2);
//         }
//     }
    
    
    
     
//     return 0;
// }


/*

muhammad_sayem:


#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long,long long>
#define      rev(a)          reverse(a, a+n);
#define      Srev(s)         reverse(s.begin(), s.end());
#define      sz(s)           s.size()
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;      // muhammad_sayem

    string s1;
    string s2;

    cin >> s1 >> s2;

    int n;
    cin >> n;

    cout << s1 << " " << s2 << endl;

    while(n--){
        string str1;
        string str2;

        cin >> str1 >> str2;

        if(str1 == s1) s1 = str2;
        else if(str1 == s2) s2 = str2;

        cout << s1 << " " << s2 << endl;
    }

    return 0;
}



*/