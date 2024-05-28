#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n; //row and column
    cout<<"Order of Matrix : ";
    cin>>m>>n;
    int A[m][n];
    int B[n][m];
    cout<<"Input Your Matrix : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            B[i][j]=A[j][i];
        }
    }
    cout<<"Transpose Matrix : "<<endl;
    for(int i=0;i<n;i++){
        cout<<"\t";
        for(int j=0;j<m;j++){
            cout<<B[i][j]<<"  ";
        }
        cout<<endl;
    }
}
