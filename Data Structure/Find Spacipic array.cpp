#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n];
    cout<<"All Elements of array : ";
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int m,c=0,pos;
    cout<<"Finding Number : ";
    cin>>m;
    for(int i=0;i<n;i++){
        if(a[i]==m){
            c=1;
            pos =i;
            break;
        }
    }
    if(c==1) cout<<"YES, Find the number. The Number's position is : "<<pos+1;
    else cout<<"No, The number is not include in array. ";
}
