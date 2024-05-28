#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int m,n; cin>>m>>n;

        for(int i=0;i<m;i++){
            char s ='a';
            for(int j=0;j<n;j++){
                cout<<s;
                s+=1;
            }
        }
        cout<<endl;
    }
}
