#include<bits/stdc++.h>
using namespace std;
using db=double;
int main()
{
    cout<<" Enter the Number of equation : ";
    int m; cin>>m;
    cout<<"Please enter the number of unknown variable of equation:" ;
    int n; cin>>n;
    n+=1;
    db a[m][n];
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    db p = a[0][0];
    for(int i=0;i<n;i++){
        a[0][i]/=p;
    }
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    int q=m;
    while(q<0){
        for(int i =0;i<m;i++){
            p =a[i][0];
            for(int j=0;j<n;j++){

            }
        }
    }
}
