/**
https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/
*/
#include <iostream>
#include <math.h>
#define max (1000000000+7)
#define mx 1000
using namespace std;

int main()
{
    long n,a[mx];
    cin>>n;
    for(int i=0;i<n; i++)//I initially used mx here(What a fool!);
    {
        cin>>a[i];
    }
    long ans=1;
    for(int i=0;i<n;i++)
    {
        ans=(ans*a[i])%max;
    }
    cout<<ans;
    return 0;
}
//2,3 shot program
