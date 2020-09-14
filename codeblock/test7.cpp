#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
            int mnx=100000;
             int mny=100000;
        int n,m,k,l;
        cin>>n>>m;
        int ans=n+m;
        char a[n+1][m+1];
        int p[n],q[m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;i++){
                int c=0;
            for(int j=0;j<m;j++){
               if(a[i][j]=='.'){
                c++;
               }
            }
            p[i]=c;

        }
        for(int j=0;j<m;j++){
                int c=0;
            for(int i=0;i<n;i++){
                if(a[i][j]=='.'){
                    c++;
                }
            }
            q[j]=c;
        }

         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int h=p[i]+q[j];
                if(a[i][j]=='.'){
                    h=h-1;
                }
                ans=min(ans,h);
            }
         }
        cout<<ans<<endl;
    }
}
