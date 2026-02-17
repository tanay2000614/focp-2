#include<iostream>
using namespace std;
int main(){

    int n=4;
    for(int i=n;i>=1;i--)
    {
        for(int s=1;s<=n-i;s++)
        cout<<" ";
        for(int j=1;j<=2*i-1;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        for(int s=1;s<=n-i;s++)             //-==>declare s again for the new scope, replace s with i (logical error)
        cout<<" ";
        for(int j=1;j<=2*i-1;j++)           //==> increment of j added to avoid infinite looping
        cout<<"*";
        cout<<endl;
    }
    return 0;
}