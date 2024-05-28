#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, pos;
    cout<<"Array Size : ";
    cin>>n;
    cout<<"Delete Index Position : ";
    cin>>pos;
    /*for(int i =0;i<n;i++){
        cin>>a[i];
    }*/
    int a[n];
    int i = pos;
    while(i<=n-1){
        a[i] = a[i+1];
        i++;
    }
    n-=1;
    //a[pos] = val;
    cout<<"Array Size : "<<n<<endl;
    //cout<<"Position's Value : "<<a[pos];
}

