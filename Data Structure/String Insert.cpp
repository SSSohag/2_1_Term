#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"Enter main String: ";
    cin>>s1;
    int n;
    cin>>n>>s2;
    string s3;
    int j=0;
    for(int i=0;i<n;i++){
        s3[j]=s1[i];
        j++;
    }
    for(int i=0;i<s3.size();i++){
        cout<<s3[i];
    }
    for(int i=0;i<s2.size();i++){
        s3[j]=s2[i];
        j++;
    }

    for(int i=0;i<s3.size();i++){
        cout<<s3[i];
    }

/*
    int m=s1.size()+s2.size();
    int p =j;
    for(int i=n;i<s1.size()+1-n;i++){
        s3[j] = s1[i];
        j++;
    }
    for(int i=0;i<s3.size();i++){
        cout<<s3[i];
    }
*/
}


