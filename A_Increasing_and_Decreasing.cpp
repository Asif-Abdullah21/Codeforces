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
        int x,y,n;
        cin >> x >> y >>n;
        int size=n;

        int diff = abs(x-y);

        int temp = (n*(n-1))/2;

        if(diff<temp) cout << -1 << endl;
        else{
            cout << x << " ";
            x = y-(((n-2)*(n-1))/2);
            cout << x << " ";
            n--;
            for (int i = 2; i <= size-2; i++)
            {
                x = x+(n-1);
                cout << x << " ";
                n--;
            }
            cout << y << endl;
            
        }
    }
     
    return 0;
}


/*

//masud_abdullah


#include <bits/stdc++.h>
#define   nl         "\n"
#define   NN         (cout << "NO\n")
#define   YY         (cout << "YES\n")
#define   nn         (cout << "No\n")
#define   yy         (cout << "Yes\n")
#define   ss         second
#define   ff         first
#define   all(v)     v.begin(),v.end()
#define   ll         long long int
#define   ull        unsigned long long
#define   gcd(a, b)  __gcd(a, b)
#define   lcm(a, b)  ((a/gcd(a,b)) * b)
#define   pb         push_back
#define   mp         make_pair
#define   pii        pair<int,int>
#define   pll        pair<long long,long long>
#define   vii        vector< int >
#define   vll        vector< ll >
#define   vpi        vector< pii >
#define   vpl        vector<pll>
#define   sz(v)      v.size()
#define   mm(a, x)   memset(a, x, sizeof(a))
#define   pi         acos(-1.0)
#define   ceil(a,b)  (a+b-1)/b
#define   jog(v)     accumulate(v.begin(), v.end(), 0)
#define   gun(v)     accumulate(v.begin(), v.end(), 1, multiplies<int>())
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
///Substring_Check:
///str1(main string)
///str2(substring)
///if((str1.find(str2) != string :: npos))yy;
///else nn;
/// for converting string to integer: stoi(a); [a is the string ]
///int a[n];
///iota(a, a + n, 1);  >>>>>>>>>>>> eta diye n length er ekta array te 1-n porjonto value gulo sequentially set kora jay.
/// kadane algorithm for maximum subarray sum
/// __builtin_popcount(x) (__builtin_popcountll(x) for long long data type) ---->>> This function is used to count the number of one’s(set bits) in an integer.

/// __builtin_parity(x) (__builtin_parityll(x) for long long data type)   ---->>> This function is used to check the parity of a number.
///This function returns true(1) if the number has odd parity else it returns false(0) for even parity.
///parity means the number of one's of it's binary representaion is even or odd.

///__builtin_clz(x)  (__builtin_clzll(x) for long long data type)  ---->>> This function is used to count the leading zeros of the integer.

///__builtin_ctz(x)   (__builtin_ctzll(x) for long long data type)  ---->>> This function is used to count the trailing zeros of the integer.

using namespace std;
int main()
{
    FIO;
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        // int a[n];
        // for(int i=0;i<n;i++)cin>>a[i];

        vector<int> ans;

        int cnt=0;

        for(int i=1;i<=n-1;i++)
        {
            ans.push_back(y-cnt);
            y-=cnt;
            cnt++;
        }
        ans.push_back(x);
        int xt=sz(ans);
        reverse(all(ans));

        if(ans[1]>=x && ans[1]-ans[0]>ans[2]-ans[1])
        {
            for(int i=0;i<sz(ans);i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<nl;
        }
        else cout<<-1<<nl;

    }
    return 0;
}



*/
