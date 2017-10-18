/**
https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/
*/
#include <iostream>
using namespace std;

int main()
{
    int n,fact=1;
    cin>>n;
    for(int i=n;i>0;i--)
    {
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}
//Didn't even let me sweat!
