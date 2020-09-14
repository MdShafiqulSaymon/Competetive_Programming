#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int m;
    cin>>m;
   long long int mid=0;
   if(n==1)cout<<1<<endl;
    else if(n%2==0){
        mid=n/2;
        if(m==mid){
            cout<<mid+1<<endl;
        }
        else if(m>mid){
            cout<<m-1<<endl;
        }
        else{
            cout<<m+1<<endl;
        }
    }
    else{
            mid=(n/2)+1;
        if(m<mid){
            cout<<m+1<<endl;
        }
        else if(m>mid){
                cout<<m-1<<endl;
        }
        else if(m==mid){
            cout<<mid-1<<endl;
        }
    }
}
