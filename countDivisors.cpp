/**
https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/
*/
#include <iostream>
using namespace std;

int main()
{
    int l,r,k,count=0;
    cin>>l>>r>>k;
    if(l<=r)
    {
        for(int i=l;i<=r;i++)
        {
            if(i%k==0)
            count++;
        }
    }
    cout<<count;
    return 0;
}
//One shot program !!
