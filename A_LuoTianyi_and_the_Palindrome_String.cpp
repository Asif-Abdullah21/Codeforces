#include<bits/stdc++.h>
#define   ll         long long
#define   pii        pair<int,int>
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   fio        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int main()
{
fio;
int t;
cin >> t;

while(t--)
{
    string str;
    cin >> str;
    int f=1;
    int cnt=1;
    int len =  str.size();

    for (int i = 1; i < len; i++)
    {
        if(str[i]==str[i-1]) cnt++;
    }
    
    
    if(cnt==len) cout << -1 << endl;
    else if(len<3) cout << -1 << endl;
    else{
        cout << len-1 << endl;
    }
    
}
return 0;
}

/*muhammad_sayem

#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pii             pair <int,int>
#define      pb              push_back
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    int test;
    cin >> test; //muhammad_sayem

    while(test--){
        string str;
        cin >> str;
        int i, flag = 0;

        for(i=0; i<str.size()-1; i++){
            if(str[i] != str[i+1]){
                flag = 1;
                break;
            }
        }

        if(flag == 0) cout << -1 << endl;

        else cout << str.size()-1 << endl;
    }


    return 0;
}



*/