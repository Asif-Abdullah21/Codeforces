#include <bits/stdc++.h>
#define nl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
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
/// sort(a,a+n); array sorting[0 base index]
/// reverse(a,a+n); array reverse[0 base index]
/// sort(s.begin(),s.end()); string sorting
/// reverse(s.begin(),s.end()); string reverse
/// int max_element = *max_element(a,a+n);[0 base index]
/// int min_element = *min_element(a,a+n);[0 base index]
/// int max_indx = max_element(a,a+n)-a;[0 base index]
/// int min_indx = min_element(a,a+n)-a;[0 base index]

/// Substring_Check:
/// str1(main string)
/// str2(substring)
/// if((str1.find(str2) != string :: npos))yy;
/// else nn;

/// int a[n];
/// iota(a, a + n, 1);  >>>>>>>>>>>> eta diye n length er ekta array te 1-n porjonto value gulo sequentially set kora jay.
using namespace std;
int main()
{
    FIO;
    int t;
    cin >> t; //modified the solution of live contest
    while (t--)
    {
        ll n, cnt = 0, cnt1 = 0, cnt2 = 0;
        cin >> n;
        ll x,mn1=2000000,mn2=2000000,mn3=2000000;
        string str;

        while(n--)
        {
            cin >> x >> str;
            if (str == "11")
            {
                cnt = 2;
                mn3 = min(mn3,x);
            }
            else if (str == "10")
            {
                cnt1 = 1;
                mn1 = min(mn1,x);
            }

            else if (str == "01")
            {
                cnt2 = 1;
                mn2 = min(mn2,x);
            }

        }

        if (cnt1 == 1 && cnt2 == 1) cnt = 2;


        if (cnt < 2)
            cout << -1 << endl;
        else
        {
            if(mn3 <= mn1+mn2) cout << mn3 << endl;
            else cout << mn1+mn2<< endl;
        }
    }
    return 0;
}



/*
//solved on live contest:
#include <bits/stdc++.h>
#define nl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
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
/// sort(a,a+n); array sorting[0 base index]
/// reverse(a,a+n); array reverse[0 base index]
/// sort(s.begin(),s.end()); string sorting
/// reverse(s.begin(),s.end()); string reverse
/// int max_element = *max_element(a,a+n);[0 base index]
/// int min_element = *min_element(a,a+n);[0 base index]
/// int max_indx = max_element(a,a+n)-a;[0 base index]
/// int min_indx = min_element(a,a+n)-a;[0 base index]

/// Substring_Check:
/// str1(main string)
/// str2(substring)
/// if((str1.find(str2) != string :: npos))yy;
/// else nn;

/// int a[n];
/// iota(a, a + n, 1);  >>>>>>>>>>>> eta diye n length er ekta array te 1-n porjonto value gulo sequentially set kora jay.
using namespace std;
int main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0, f1 = 0, f2 = 0, cnt1 = 0, cnt2 = 0;
        cin >> n;
        int a[n + 2];
        string str[n + 2], s1 = "10", s2 = "01", s3 = "11";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cin >> str[i];
            if (str[i] == s3)
                cnt = 2;

            if (str[i] == s1)
                cnt1 = 1;
            if (str[i] == s2)
                cnt2 = 1;
        }
        if (cnt1 == 1 && cnt2 == 1)
            cnt = 2;

        if (cnt < 2)
            cout << -1 << endl;
        else
        {
            ll mn1 = 20000000,mn2 = 20000000 ;
            ll total_mn, mn3=20000000;

            for (int i = 0; i < n; i++)
            {
                if (str[i] == s1)
                {
                    if (a[i] < mn1)
                    {
                        mn1 = a[i];
                    }
                }
                if (str[i] == s2)
                {
                    if (a[i] < mn2)
                    {
                        mn2 = a[i];
                    }
                }
                if (str[i] == s3)
                {
                    if (a[i] < mn3)
                    {
                        mn3 = a[i];
                    }
                }
            }

            total_mn = mn1 + mn2;

            if (mn3 < total_mn) cout << mn3 << endl; 
            else
                cout << total_mn << endl;
        }
    }
    return 0;
}



*/
