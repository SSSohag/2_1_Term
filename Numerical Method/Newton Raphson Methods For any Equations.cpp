//Newton_Raphson_Method
#include<bits/stdc++.h>
using namespace std;
using db=double;
int main()
{
    cout<<"Please enter the number of degree of equation:";
    int deg,i=0;
    cin>>deg;
    int n=deg+1;
    db a[n];
    cout<<"please enter the number of "<<n<<" coefficients of equation :";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the value of Error :";
    double Error;
    cin>>Error;
    cout<<"Enter an initial value of x0 :";
    double x0;
    cin>>x0;
    cout<<"Enter the number of Iteration :";
    int t,flag=0;
    cin>>t;
    db fx0,fx1,x1=0,e;
    cout<<" x0  "<<" x1  "<<" fx0  "<<" fx1  "<<" Error  ";
    while(t--){
          db sum=0;
        for(i=0;i<n;i++)
        {
            sum+=a[i]*(pow(x0,n-1-i));
        }
        fx0=sum;
        sum=0;
        for(i=0;i<n-1;i++)
        {
            sum+=a[i](n-1-i)(pow(x0,n-2-i));
        }
        fx1=sum;
        x1=x0-(fx0/fx1);
        e=abs(x1-x0)/x1;
        cout<<x0<<"  "<<x1<<"  "<<fx0<<"  "<<fx1<<"  "<<e*100<<"%"<<endl;
        if(e<=Error){
           cout<<"The root almost same in the previous root"<<endl;
           flag=1;
            break;
        }
        else
        {
            x0=x1;
        }

    }
    if(flag==0)
    {
        cout<<"Finish the Iteration"<<endl;
    }
    return 0;
}
