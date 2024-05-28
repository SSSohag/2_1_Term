#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Number of Input: ";
    int n;
    cin>>n;
    double a[n];
    double fa[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>fa[i];
    }
    cout<<"Enter the value of determine "<<endl;
    int x1=0,x2=0;
    double p;
    cin>>p;
    for(int i=0;i<n;i++){
        if(p>a[i]&&p<a[i+1]){
            x1=i;
            x2=i+1;
            break;
        }
    }
    double result = fa[x1]+((p-(x1+1))*(fa[x2]-fa[x1]))/(x2-x1);
    cout<<result<<endl;
}
