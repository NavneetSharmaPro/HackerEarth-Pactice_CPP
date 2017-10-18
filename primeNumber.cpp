/**
https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/prime-number-8/
*/

#include <iostream>
using namespace std;

bool checkPrime(int item)
{
    int tempvar=0;
    for(int x=1;x<=item;x++)
    {
        if(item%x==0)
        {
            tempvar++;
        }
    }
    if(tempvar==2)
    return true;
    else return false;
}

int main()
{
    int number;
    cin>>number;
    for(int i=1;i<number;i++)
    {
        if(checkPrime(i))
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
