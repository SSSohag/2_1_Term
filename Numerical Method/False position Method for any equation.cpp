#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Please enter a 2nd degree equations 4 coefficient : ";
    double p,q,r,s;
    cin>>p>>q>>r>>s;
    double a,b;
    cout<<"Enter root of two value : ";
    cin>>a>>b;
    cout<<"Given Error : " ;
    //double e;
    //cin>>e;
    int i =1;
    cout<<"How Many Iteration : " ;
    double error = 100;
    //while(e>error){
    int t ; cin>>t;
    while(t--){
        double fa = p*a*a*a + q*a*a + r*a + s;
        double fb= p*b*b*b + q*b*b + r*b + s;
        double c= (a*fb-b*fa)/(fb-fa);
        error = ((c-a)/c)*100;
        double fc= p*c*c*c + q*c*c + r*c + s;
        cout<< "Iteration : "<<i<< " a : " << a <<"  b : " << b <<"  Root (c) : "<<setprecision(8) <<c;
        cout<<"   "<< "Fc : "<<setprecision(8)<<fc<< " Error : " << error <<"%"1<<endl;


        if(fc*fa<0){
            b=c;
        }
        else {
            a = c;
        }
        i++;
    }

}

