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
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        ll a,b,c;
        cin >> a >> b >> c;
        ll a1=1,b1=1,c1=1;

        for(int i=0;i<a-1;i++) a1 = a1*10;
        for(int i=0;i<b-1;i++) b1 = b1*10;
        for(int i=0;i<c-1;i++) c1 = c1*10;

        if(a1%b1==0) a1+=c1;
        else if(b1%a1==0) b1+=c1;

        cout << a1 << " " << b1 << endl;

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
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         ll a,b,c;
//         cin >> a >> b >> c;
//         ll a1,b1,c1=pow(10,c-1);
//         a1 = c1;
//         b1 = c1;

//         while(to_string(a1).size()<a) a1 *= 2;
//         while(to_string(b1).size()<b) b1 *= 3;
        

//         cout << a1 << " " << b1 << endl;

//     }
     
//     return 0;
// }


///----------------------------------------------------------------------

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
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         ll a,b,c;
//         cin >> a >> b >> c; 

//         double a1,b1,c1;
//         a1 = pow(10,a-1);
//         b1 = pow(10,b-1);
//         c1 = pow(10,c-1);

//         a =  a1;
//         b =  b1;
//         c =  c1;
//         // a = (ll) a1;
//         // b = (ll) b1;
//         // c = (ll) c1;

//         if(a%b==0) a+=c;
//         else if(b%a==0) b+=c;

//         cout << a << " " << b << endl;

//     }
     
//     return 0;
// }


//----------------------------------------------------------------


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
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         ll a,b,c;
//         cin >> a >> b >> c; 

//         double a1,b1,c1;
//         a = pow(10,a-1);
//         b = pow(10,b-1);
//         c = pow(10,c-1);

//         if(a%b==0) a+=c;
//         else if(b%a==0) b+=c;

//         cout << a << " " << b << endl;

//     }
     
//     return 0;
// }



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
// #define mm(a, x) memset(a, x, sizeof(a))
// using namespace std;
// #define FIO                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
 
// int main()
// {
//     FIO;
//     int t;
//     cin >> t;
 
//     while (t--) // code idea from abid_ul_islam vai
//     {
//         ll a,b,c,temp=1;
//         cin >> a >> b >> c; 
 
//         double a1,b1,c1;
//         a = temp*pow(10,a-1);
//         b = temp*pow(10,b-1);
//         c = temp*pow(10,c-1);
 
//         if(a%b==0) a+=c;
//         else if(b%a==0) b+=c;
 
//         cout << a << " " << b << endl;
 
//     }
     
//     return 0;
// }
 
 