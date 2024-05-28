//Secant_Method
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
    db fa,fb,c,fc,e;
    cout<<" a  "<<" b  "<<" fa  "<<" fb  "<<" c  "<<endl;
    while(t--){
        db sum=0,sum1=0;
        for(i=0;i<n;i++)
        {
            sum+=A[i]*(pow(a,n-1-i));
            sum1+=A[i]*(pow(b,n-1-i));
        }
        fa=sum;
        sum=0;
        fb=sum1;
        sum1=0;
        c=abs(a*fb-b*fa)/abs(fb-fa);
        cout<<a<<"  "<<b<<"  "<<fa<<"  "<<fb<<"  "<<c<<endl;
        if(abs((c-b)/c)>Error)
        {
            a=b;
            b=c;
        }
        else
        {
            cout<<"The root almost same in the previous root"<<endl;
           flag=1;
           break;
        }
    }
    if(flag==0)
    {
        cout<<"Finish the Iteration"<<endl;
    }
    return 0;
}
