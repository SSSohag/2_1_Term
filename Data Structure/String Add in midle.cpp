#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    int n,j=0;
    cin>>s1>>n>>s2;
    for(int i =0;i<n;i++){
        s3[j]=s1[i];
        j++;
    }
    for(int i=0;i<s2.size();i++){
        s3[j]=s2[i];
        j++;
    }
    for(int i=n;i<s1.size();i++){
        s3[j]=s1[i];
        j++;
    }
    for(int i =0;i<j;i++){
        cout<<s3[i];
    }
}
