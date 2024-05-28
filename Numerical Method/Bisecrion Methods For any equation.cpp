//Bisection_Method
#include<bits/stdc++.h>
using namespace std;
using db=double;
int main()
{
    cout<<"Please enter the number of degree of equation:";
    int deg,i=0;
    cin>>deg;
    int n=deg+1;
    db A[n];
    cout<<"please enter the number of "<<n<<" coefficients of equation :";
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Enter the value of Error :";
    db Error;
    cin>>Error;
    cout<<"Enter the two initial value of x1 & x2 :";
    db x1,x2;
    cin>>x1>>x2;
    cout<<"Enter the number of Iteration :";
    int t,flag=0;
    cin>>t;
    db fx1,fx2,x0,fx0,e;
    cout<<" x1  "<<" x2  "<<" fx1  "<<" fx2  "<<" x0  "<<" Error  "<<endl;
    while(t--)
    {
        db sum=0,sum1=0,sum2=0;
        for(i=0;i<n;i++)
        {
            sum+=A[i]*(pow(x1,n-1-i));
            sum1+=A[i]*(pow(x2,n-1-i));
        }
        fx1=sum;
        sum=0;
        fx2=sum1;
        sum1=0;
        if(fx1*fx2>0)
        {
            cout<<" Do not bracket any root "<<endl;
            break;
        }
        else
        {
           x0=(x1+x2)/2;
        for(i=0;i<n;i++)
        {
            sum2+=A[i]*(pow(x0,n-1-i));
        }
        fx0=sum2;
        sum2=0;
        e=abs(x2-x1)/abs(x2);
        cout<<x1<<"  "<<x2<<"  "<<fx1<<"  "<<fx2<<"  "<<x0<<"  "<<e*100<<"%"<<endl;
        if(e<Error)
        {
            cout<<"The root almost same in the previous root"<<endl;
           flag=1;
           break;
        }
        else
        {
            if(fx1*fx0<0)
            {
                x2=x0;
            }
            else
            {
                x1=x0;
            }
        }
        }

    }
    if(flag==0)
    {
        cout<<"Finish the Iteration"<<endl;
    }
    return 0;
}
