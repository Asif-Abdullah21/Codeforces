#include<stdio.h>
int main()
{
    int  n;
    scanf("%d",&n);
    int a[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if(a[i]==0)
        {
            for (int j = 0,k=i-1;j<k; j++,k--)
            {
                int t = a[j];
                a[j] = a[k];
                a[k] = t;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    
    
    return 0;
}

/*masud_abdullah:


#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int size;
   cin>>size;
   int arr[size];
   for(int i=0;i<size;i++)
   {
       cin>>arr[i];
   }
   for(int i=0;i<size;i++)
   {
       if(arr[i]==0)
       {
           
           reverse(arr,arr+i);
       }
   }
   for(int i=0;i<size;i++)
   {
       cout<<arr[i]<<" ";
   }
}




*/