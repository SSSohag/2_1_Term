#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cout<<"Enter X1 & X2 : ";
    double x1,x2;
    int i=1;
    cin>>x1>>x2;
    cout<<"Number of Iteration : ";
    cin>>t;
    cout<<" Iteration  "<<"\t"<< "X0"<<"\t"<<"X1"<<"\t"<<"X2"<<"\t"<<"f0"<<"\t"<<"f1"<<"\t"<<"f2"<<"\t"<<"Errors"<<endl;
    while(t--){
        double x0 = (x1+x2)/2.0;
        double f1 = pow(x1, 10) -1;
        double f2 = pow(x2, 10) -1;
        double f0 = pow(x0, 10) -1;
        double error = ((x0-x1)/x0)*100;
        if(f1*f0<0){
            x2=x0;

        }
        else if(f1*f0>0){
            x1 = x0;

        }
        if(f1*f2>0) break;

        cout<<" Iteration "<<i<<":"<<"\t"<< x0<<"\t"<<x1<<"\t"<<x2<<"\t"<<f0<<"\t"<<f1<<"\t"<<f2<<"\t\t"<<error<<"%"<<endl;
        i++;
    }
}

