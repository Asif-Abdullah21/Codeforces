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
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    fastIO;
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<string> v;
    string temp;

    for (int i = 0; i < n-1; i++)
    {   
        temp = s[i];
        temp += s[i+1];
        v.push_back(temp);
    }


    sort(v.begin(),v.end());
    // for(string str:v)
    // {
    //     cout << str << " ";
    // }

    int mx=1,cnt=1;
    string ans = v[0];


    for (int i = 1; i < v.size(); i++)
    {
        if(v[i]==v[i-1])
        {
            cnt++;
            if(cnt>=mx)
            {
                ans = v[i];
                mx = cnt;
            }
        }
        else {
            cnt=1;
        }
    }
    
    cout << endl <<  ans;
    
     
    return 0;
}



/*
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
    fastIO;

    int n, i, j;
    cin >> n;

    string str; //muhammad_sayem's code with a nested loop 
    cin >> str;

    if(n == 2) {
        cout << str << endl;
        return 0;
    }

    vector<string> v;

    for(i=0; i<n-1; i++){
        string s;

        s.pb(str[i]);
        s.pb(str[i+1]);

        v.pb(s);
        
        s.clear();
    }

    int maxx = -1, cnt;
    string store;

    for(i=0; i<v.size()-1; i++){
        cnt = 1;

        for(j=i+1; j<v.size(); j++){
            if(v[i] == v[j]){
                cnt++;
            }
        }
        
        if(cnt>=maxx){
            maxx = max(cnt, maxx);
            store = v[i];
        }
        
    }

    cout << store << endl;

    return 0;
}


*/