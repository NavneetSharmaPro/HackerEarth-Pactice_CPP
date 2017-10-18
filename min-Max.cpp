/**
https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/min-max-3/
*/
#include <iostream>
using namespace std;

int main()
{
    int size,flag=0;
    cin>>size;
    int arr[size];
    int max,min;
    for(int i=0;i<size;i++)
    {
        max=arr[0],min=arr[0];
        cin>>arr[i];
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
    }
    cout<<max;
    cout<<min;
    for(int j=min;j<max;j++)
    {
        for(int k=0;k<size;k++)
        {
            if(arr[j]=)
        }
    }
    if(flag>=1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
