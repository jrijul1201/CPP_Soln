#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int findMinDiff(long long arr[], int n)
         {
            sort(arr, arr+n);
            int diff = INT_MAX;
            for (int i=0; i<n-1; i++)
               if (arr[i+1] - arr[i] < diff)
                  diff = arr[i+1] - arr[i];
            return diff;
         }
int main() 
{   long long t;
cin>>t;
  
   for(int i=0;i<t;i++)
   {   
       long long n,a[100001],c[100001],d[100001]; 
       cin>>n;
       int neg=0,pos=0;
       for(int j=0;j<n;j++)
       {cin>>a[j];}
       sort(a,a+n);
       for(int k=0;k<n;k++)
       {
          if(a[k]<=0)
         {  d[neg]=a[k];
            ++neg;
         }
          else
         {c[pos]=a[k];
          ++pos;}
       }
      int minabs=findMinDiff(d,neg);
       if(pos==0)
       {cout<<n<<endl;}
       else
       {
          if(minabs>=c[0])
          {cout<<neg+1<<endl;}
          else{cout<<neg<<endl;}
       }
       
   }           
   return 0;
}