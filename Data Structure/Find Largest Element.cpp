#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int c;
    int high = a[0];
    for(int i=0;i<n;i++){
        if(a[i]>high) {
            high = a[i];
            c =i;
        }
    }
    cout<<"Highest = "<<high<< endl<<"Position : "<<c+1;
}
