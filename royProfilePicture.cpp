/**
https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/roy-and-profile-picture/
*/
#include <iostream>
using namespace std;

int main()
{
    int l,n,w,h;
    cin>>l;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>w>>h;
        if(w<l || h<l)
        cout<<"UPLOAD ANOTHER"<<endl;
        if(w>=l && h>=l && w==h) //probelm 1 I faced, used only w>l and h>l
        cout<<"ACCEPTED"<<endl;
        else if(w>=l && h>=l && w!=h)//problem 2, used only else.
        cout<<"CROP IT"<<endl;

    }
    return 0;
}
//took me more than enough time.
