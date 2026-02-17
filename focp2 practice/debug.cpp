#include<iostream>
using namespace std;
int main()
{
    int n=0;
    int sum=0;
    int l;
    cin>>n;     //==> the size of array
    int arr[n]={};
    for(int j=0; j<n; j++)  //==> inputing array
    {
        cin>>l;
        arr[j]=l;
    }

    for(int i=0;i<n;i++)
    {
        sum+=arr[i];       // ==> adding sum of array
    }
    cout<<sum;
}