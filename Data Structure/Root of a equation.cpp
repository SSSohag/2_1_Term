#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    int p = b*b-4*a*c;
    if(p<0) {
        cout<<"The Equation Have Complex Solution"<<endl;
        cout<<"X1 : (-"<<b<<" + Squre_root("<<p<<"))/"<<2*a<<endl;
        cout<<"X2 : (-"<<b<<" - Squre_root("<<p<<"))/"<<2*a;
    }
    else{
        float x1=(-b+(sqrt(p)))/2*a;
        float x2=(-b-(sqrt(p)))/2*a;
        cout<<"X1 : "<<x1<<endl<<"X2 : "<<x2;
    }

}
