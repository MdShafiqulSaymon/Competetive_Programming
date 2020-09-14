#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int dectoBinint(long long int n)
{
    long long sum=0;
    long long int i = 0;
    long long int p=1;
    while (n > 0) {
        int g = n % 2;
        //cout<<"g="<<g<<endl;
        sum+=(p*g) ;
        p*=10;
        //cout<<"sum="<<sum<<endl;
        n = n / 2;
        i++;
    }
    return sum;
}






int main()
{
    int t;
    cin>>t;
    while(t--){
     long long int n,sum1=1,sum2=1,sum3=1;
   cin>>n;
   long long int a[n];
   for(long long int i=0;i<n;i++)cin>>a[i];
   sort(a,a+n);
   for(long long int i=0;i<n;i++){
    cout<<a[i]<<" ";

   }
   cout<<endl;
   for(long long int i=0;i<4;i++){
      sum1=sum1*a[i];
   }
   for(long long int i=0;i<2;i++){
      sum2*=a[i];
       //cout<<"sum2="<<sum2<<endl;
   }
   cout<<"sum2="<<sum2<<endl;
    sum1*=a[n-1];
    for(long long int i=n-1;i>=n-3;i--){
        sum2*=a[i];
    }
    for(long long int i=n-1;i>=n-5;i--){
    sum3*=a[i];
   }
    cout<<"sum1="<<sum1<<endl;
    cout<<"sum2="<<sum2<<endl;
    cout<<"sum3="<<sum3<<endl;
    cout<<max(sum3,max(sum1,sum2))<<endl;
    }
}
