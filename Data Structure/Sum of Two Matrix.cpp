#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n; //row and column
    cout<<"Order of Matrix : ";
    cin>>m>>n;
    int A[m][n];
    int B[m][n];
    int C[m][n];
    cout<<"Input First Matrix : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    cout<<endl;
    cout<<"Input Second Matrix : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>B[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            C[i][j] = A[i][j]+B[i][j];
        }
    }
    cout<<"Summation of Matrix : "<<endl;
    for(int i=0;i<m;i++){
        cout<<"\t";
        for(int j=0;j<n;j++){
            cout<<C[i][j]<<"\t";
        }
        cout<<endl;
    }
}

