#include<bits/stdc++.h>
using namespace std;
int main()
{
    // input 1 -1 -2 ; 1 3 ; 5 ;
    cout<<"Please enter a 2nd degree equations 3 coefficient : ";
    double p,q,r;
    cin>>p>>q>>r; // 1 -2 3;
    double a,b;
    cout<<"Enter root of two value : ";
    cin>>a>>b; // 0 3;
    int t;
    cout<<"How many Iteration we want : ";
    cin>>t; // 5
    while(t--){
        double fa = p*a*a + q*a + r;
        double fb= p*b*b + q*b + r;
        double c= (a*fb-b*fa)/(fb-fa);

        double fc= p*c*c + q*c + r;

        if(fc*fa<0){
            b=c;

        }
        else {
            a = c;
        }
        cout<< "Root (c) : "<<setprecision(8) <<c<<"   "<< "Fc : "<<setprecision(8)<<fc<<endl;
    }
}
