#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Number of Data Point: " ;
    int n;
    cin>>n;
    double x[n],y[n];
    cout<<"Input Data:" <<endl;
    for(int i=0;i<n;i++){
        cout<<"X["<<i+1<<"] = ";
        cin>>x[i];
        cout<<"Y["<<i+1<<"] = ";
        cin>>y[i];
    }
    double sumX =0, sumY=0,sumX2=0,sumXY=0,sumYi=0,u=0;
    for(int i =0;i<n;i++){
        sumX = sumX + x[i];
        sumX2 = sumX2 + x[i]*x[i];
        sumY = sumY + y[i];
        sumXY = sumXY + x[i]*y[i];
        u = (sumY-sumY/n)*(sumY-sumY/n);
    }
    double a1 = (n*sumXY-sumX*sumY)/(n*sumX2-sumX*sumX);
    double a0 = (sumY - a1*sumX)/n;
    cout<<"Output:"<<endl;
    cout<<"Slope: "<<a1<<endl;
    cout<<"Intercept: "<<a0<<endl;
    cout<<"The Equation :"<<a0<<" + "<<a1<<"x"<<endl;
    cout<<"Standart Error of the "<<u<<endl;//<<(sumY-sumY/n)*(sumY-sumY/n);
    cout<<"Co-Relation Co-efficient: "<<endl;

}




















