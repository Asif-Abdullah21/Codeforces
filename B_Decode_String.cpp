#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define sz(v) v.size()
#define mem(a, x) memset(a, x, sizeof(a))
#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;

    string s;
    char ch;

    for (ch='a'; ch <='z'; ch++)
    {
        s+= ch; // abcdefghijklmnopqrstuvwxyz
    }

    while (t--)
    {
        int n;
        cin >> n;

        string str, final_str;
        cin >> str;

        for (int i = n-1; i >= 0; i--)
        {
            if(str[i]=='0')
            {
                final_str += s[(((str[i-2]-'0')*10)+(str[i-1]-'0'))-1]; // final_str += s[(((str[i-2]-'0')*10)+(str[i-1]-'0')*1)-1];
                i -= 2;
            }
            else final_str += s[(str[i]-'0')-1];
        }

        reverse(final_str.begin(),final_str.end());

        cout << final_str<< endl;
        
    }
    

    

    return 0;
}




// #include <bits/stdc++.h>
// #define ll long long
// #define pii pair<int, int>
// #define sz(v) v.size()
// #define mem(a, x) memset(a, x, sizeof(a))
// #define fio                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0)
// using namespace std;
// int main()
// {
//     fio;
//     int t;
//     cin >> t;

//     string s;
//     char ch;

//     for (ch='a'; ch <='z'; ch++)
//     {
//         s+= ch; // abcdefghijklmnopqrstuvwxyz
//     }

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         string str, final_str;
//         cin >> str;

//         for (int i = n-1; i >= 0; i--)
//         {
//             if(str[i] != '0')
//             {
//                 final_str += s[(str[i]-'0')-1];
//             }
//             else if(str[i]=='0')
//             {
//                 final_str += s[(((str[i-2]-'0')*10)+(str[i-1]-'0'))-1]; // final_str += s[(((str[i-2]-'0')*10)+(str[i-1]-'0')*1)-1];
//                 i -= 2;
//             }
//         }

//         reverse(final_str.begin(),final_str.end());

//         cout << final_str<< endl;
        
//     }
    

    

//     return 0;
// }


//--------------------------------------------------------------------


//Pinned by Coding Community | Newton School
//Karan Mashru - youtube channel


// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     ll t, n, i, j, val;
//     string a;
//     cin>>t;

//     for(;t--;)
//     {
//         cin>>n;
//         cin>>a;
//         string b="";

//         for(i=n-1; i>=0;)
//         {
//             if(a[i]=='0'){
//                 val=(a[i-2]-48)*10+a[i-1]-48;
//                 i-=3;
//             }else{
//                 val=a[i]-48;
//                 i--;
//             }
//             b+=char(val+97-1);
//         }
//         reverse(b.begin(), b.end());
//         cout<<b<<"\n";

//     }

// }
