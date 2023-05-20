#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

bool cmp(pii a,pii b)
{
    return a.first>b.first; // descending order sort, but index jeta age seta age thakbe same hole duitar first value
    //return a.first<b.first; ascending order sort , eta sort(a,a+n) diyei kora jay
}

int main()
{
    int n;

    cin>>n;

    pii ar[n];

    for(int i=0;i<n;i++)
    {
        cin>>ar[i].first;
        ar[i].second = i;

    }

    sort(ar,ar+n,cmp);

    for(int i=0;i<n;i++)cout << ar[i].first << " " <<ar[i].second<< endl;
}


/*
akdom base level a sorting ja kore tahole 2 ta element niye decide kore konta age thakbe r konta pore

cmp function a amra oi logic ta amdr iccha moto change kore dite pari

tmr jmnn ordering chao oi ordering true value return korba


r omn na hoile false

-abid vai


*/
