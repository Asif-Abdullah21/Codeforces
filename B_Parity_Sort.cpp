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
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int f=1;

        for (int i = 0; i < n-1; i++)
        {
            if(a[i]>a[i+1])
            {
                f=0;
                break;
            }
        }

        if(f) cout << "YES\n";
        else{
            int b[n+1];

            for (int i = 0; i < n; i++)
            {
                b[i] = a[i];
            }

            sort(a,a+n);
 
            list<int> l1;
            list<int> l2;

            for (int i = 0; i < n; i++)
            {
                if(a[i]%2==0) l1.push_back(a[i]);
                else if(a[i]%2!=0) l2.push_back(a[i]);
            }
            
            vector<int> ans;

            for (int i = 0; i < n; i++)
            {
                if(b[i]%2==0)
                {
                    ans.push_back(l1.front());
                    l1.pop_front();
                }
                else if(b[i]%2!=0)
                {
                    ans.push_back(l2.front());
                    l2.pop_front();
                }
            }
            bool flag = true;

            for (int i = 0; i < n-1; i++)
            {

                if(ans[i]>ans[i+1])
                {
                    flag=false;
                }
            }

            // for (int i = 0; i < n; i++)
            // {
            //     cout << ans[i] << ' ';
            // }
            // cout << endl;
            
            
        
            if(flag) cout << "YES\n";
            else cout << "NO\n";
            
        }
         
    }
     
    return 0;
}






/*masud_abdullah:

#include <bits/stdc++.h>
#define   nl         "\n"
#define   nn         (cout << "NO\n")
#define   yy         (cout << "YES\n")
#define   ss         " "
#define   ll         long long
#define   ull        unsigned long long
#define   gcd(a, b)  __gcd(a, b)
#define   lcm(a, b)  ((a/gcd(a,b)) * b)
#define   pii        pair<int,int>
#define   pll        pair<long long,long long>
#define   sz(v)      (int)v.size()
#define   mm(a, x)   memset(a, x, sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
/// sort(a,a+n,greater<int>()); Descending sort
///sort(a,a+n); array sorting[0 base index]
///reverse(a,a+n); array reverse[0 base index]
///sort(s.begin(),s.end()); string sorting
///reverse(s.begin(),s.end()); string reverse
///int max_element = *max_element(a,a+n);[0 base index]
///int min_element = *min_element(a,a+n);[0 base index]
///int max_indx = max_element(a,a+n)-a;[0 base index]
///int min_indx = min_element(a,a+n)-a;[0 base index]
/// isalpha(charracter) ei function int value return (0,1,2) kore.jodi >0 value return kore taile charracter ta alphabet ar naile alphabet na.
///isalpha() 1 return korle charracter ta capital ar 2 return korle charracter ta small.
/// for converting string to integer: stoi(a); [a is the string ]
///Substring_Check:
///str1(main string)
///str2(substring)
///if((str1.find(str2) != string :: npos))yy;
///else nn;

///int a[n];
///iota(a, a + n, 1);  >>>>>>>>>>>> eta diye n length er ekta array te 1-n porjonto value gulo sequentially set kora jay.
using namespace std;
int main()
{
    FIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }

        sort(b,b+n);
        bool f=true;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0 && b[i]%2!=0)
            {
                f=false;
                break;
            }
            else if(a[i]%2!=0 && b[i]%2==0)
            {
                f=false;
                break;
            }
        }

        if(f)yy;
        else nn;
    }
    return 0;
}

*/