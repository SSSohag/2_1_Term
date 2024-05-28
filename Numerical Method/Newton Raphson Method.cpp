#include<bits/stdc++.h>
using namespace std;
int main()
{
    // input 1 -3 2 ; 0; 5;
    cout<<"Please enter a 2nd degree equations 3 coefficient : ";
    int p,q,r;
    cin>>p>>q>>r; // 1 -3 2
    cout<<"Estimate of X : ";
    double x;
    cin>> x; // 0
    double m=2*p,n = q;
    double fx = r;
    double fxa = q;
    double x1=0;
    cout<<"Please Enter Iteration : ";
    int t; cin>>t; // 5
    while(x1<1){
        double fx1 = p*x1*x1 + q*x1 + r;
        double fx1a = m*x1 + n;
        double x = x1- (fx1/fx1a);
        x1 = x;

        cout<< "Root closer To The Point : "<< x <<endl;
    }
}

