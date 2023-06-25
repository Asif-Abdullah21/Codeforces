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
//#define mm(a, x) memset(a, x, sizeof(a))
using namespace std;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    FIO;

    bool prime[100009];
    memset(prime,true,sizeof(prime));

    // s[0] = 1;
    // s[1] = 1;

    for (int i = 2; i <= sqrt(100009); i++)
    {
        if (prime[i] == true)
        {
            for (int j = i + i; j <= 100009; j += i)
            {
                prime[j] = false;
            }
        }
    }
    

    int n;
    cin >> n;

    if(n<3) 
    {
        cout << 1 << endl;
        for (int i = 0; i < n; i++)
        {
            cout << 1 << " ";
        }
        return 0;
        
    }

    cout << 2 << endl;
    for (int i = 1; i <= n; i++)
    {
        if(prime[i+1]==true) cout << 1 << " ";
        else cout << 2 << " ";
    }
    

    return 0;
}


//-------------------------------------------------------



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
//     FIO;

//     int s[100009] = {0};

//     // s[0] = 1;
//     // s[1] = 1;

//     for (int i = 2; i * i <= 100009; i++)
//     {
//         if (s[i] == 0)
//         {
//             for (int j = i + i; j <= 100009; j += i)
//             {
//                 s[j] = 1;
//             }
//         }
//     }
    

//     int n;
//     cin >> n;

//     if(n<3) 
//     {
//         cout << 1 << endl;
//         for (int i = 0; i < n; i++)
//         {
//             cout << 1 << " ";
//         }
//         return 0;
        
//     }

//     cout << 2 << endl;
//     for (int i = 1; i <= n; i++)
//     {
//         if(s[i+1]==0) cout << 1 << " ";
//         else cout << 2 << " ";
//     }
    

//     return 0;
// }




//-------------------------------------------------------------


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
//     FIO;

//     int s[100009] = {0};

//     // s[0] = 1;
//     // s[1] = 1;

//     for (int i = 2; i * i <= 100009; i++)
//     {
//         if (s[i] == 0)
//         {
//             for (int j = i + i; j <= 100009; j += i)
//             {
//                 s[j] = 1;
//             }
//         }
//     }
    

//     int n;
//     cin >> n;

//     if(n<3) 
//     {
//         cout << 1 << endl;
//         for (int i = 0; i < n; i++)
//         {
//             cout << 1 << " ";
//         }
//         return 0;
        
//     }

//     int a[n + 1];

//     for (int i = 0; i < n; i++)
//     {
//         a[i] = i + 2;
//     }
    
//     cout << 2 << endl;
//     for (int i = 0; i < n; i++)
//     {
//         if(s[a[i]]==0) cout << 1 << " ";
//         else cout << 2 << " ";
//     }
    

//     return 0;
// }