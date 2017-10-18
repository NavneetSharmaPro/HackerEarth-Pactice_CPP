/**
https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seating-arrangement-1/
*/
#include <iostream>
using namespace std;

int main()
{
    long test;
    int seat;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        cin>>seat;
        switch(seat%12)
        {
            case 1: cout<<seat+11<<" WS"<<endl;break;
            case 2: cout<<seat+9<<" MS"<<endl;break;
            case 3: cout<<seat+7<<" AS"<<endl;break;
            case 4: cout<<seat+5<<" AS"<<endl;break;
            case 5: cout<<seat+3<<" MS"<<endl;break;
            case 6: cout<<seat+1<<" WS"<<endl;break;
            case 7: cout<<seat-1<<" WS"<<endl;break;
            case 8: cout<<seat-3<<" MS"<<endl;break;
            case 9: cout<<seat-5<<" AS"<<endl;break;
            case 10: cout<<seat-7<<" AS"<<endl;break;
            case 11: cout<<seat-9<<" MS"<<endl;break;
            case 0: cout<<seat-11<<" WS"<<endl;break;
        }
    }
    return 0;
}
