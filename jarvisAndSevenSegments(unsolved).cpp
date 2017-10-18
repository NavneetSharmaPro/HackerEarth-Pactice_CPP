/**
https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/jarvis-and-seven-segments-1/
*/
//Looks tough, but I think I got something.
/*a1=2,a7=3,a4=4,a2=5,a3=5,a5=5,a0=6,a6=6,a9=6,a8=7;*/
#include<iostream>
using namespace std;

int lowPower(char a[],int len)
{
    char def[]={'1','7','4','2','3','5','0','6','9','8'};
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(a[i]==def[j])
            {
              cout<<def[j];
              return def[j];
            }
        }
    }
}
int main()
{
    int n;
    cout<<"how many number? ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int size;
        cout<<"Number of digits:";
        cin>>size;
        char s[size];
        for(int j=0;j<size;j++)
        {
            cin>>s[j];
        }
        lowPower(s,size);
        cout<<endl;
    }
}
