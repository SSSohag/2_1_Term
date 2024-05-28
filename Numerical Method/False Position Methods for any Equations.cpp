//False_Position_Method
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
    cout<<"Enter the two initial value of a & b :";
    db a,b;
    cin>>a>>b;
    cout<<"Enter the number of Iteration :";
    int t,flag=0;
    cin>>t;
    db fa,fb,c0=0,c,fc,e;
    cout<<" a  "<<" b  "<<" fa  "<<" fb  "<<" c  "<<" fc  "<<" Error  "<<endl;
    while(t--)
    {
        db sum=0,sum1=0,sum2=0;
        for(i=0;i<n;i++)
        {
            sum+=A[i]*(pow(a,n-1-i));
            sum1+=A[i]*(pow(b,n-1-i));
        }
        fa=sum;
        sum=0;
        fb=sum1;
        sum1=0;
        c=(a*fb-b*fa)/(fb-fa);
        for(i=0;i<n;i++)
        {
            sum2+=A[i]*(pow(c,n-1-i));
        }
        fc=sum2;
        sum2=0;
       e=abs(c-c0)/c;
       cout<<a<<"  "<<b<<"  "<<fa<<"  "<<fb<<"  "<<c<<"  "<<fc<<"  "<<e*100<<"%"<<endl;
       if(e<=Error)
       {
           cout<<"The root almost same in the previous root"<<endl;
           flag=1;
           break;
       }
       else
       {
           if(fc*fa<0)
           {
               b=c;
           }
           else
           {
               a=c;
           }
           c0=c;
       }
    }
    if(flag==0)
    {
        cout<<"Finish the Iteration"<<endl;
    }
    return 0;
}
