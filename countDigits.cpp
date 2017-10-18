/**

You are given a string S. Count the number of occurrences of all the digits in the string S.
Input:
First line contains string S.
Output:
For each digit starting from 0 to 9, print the count of their occurrences in the string
S. So, print 10 lines, each line containing 2 space separated integers. First integer
i and second integer count of occurrence of i. See sample output for clarification.
Constraints:
1≤|S|≤100
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    string s;
    int a0=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0;
    cin>>s;
    int len=s.length();
    for(int i=0;i<len;i++)
    {
    	if(s[i]=='0')
    	a0++;
    	else if(s[i]=='1')
    	a1++;
    	else if(s[i]=='2')
    	a2++;
    	else if(s[i]=='3')
    	a3++;
    	else if(s[i]=='4')
    	a4++;
    	else if(s[i]=='5')
    	a5++;
    	else if(s[i]=='6')
    	a6++;
    	else if(s[i]=='7')
    	a7++;
    	else if(s[i]=='8')
    	a8++;
    	else if(s[i]=='9')
    	a9++;
    }
    cout<<"0 "<<a0<<endl;
    cout<<"1 "<<a1<<endl;
    cout<<"2 "<<a2<<endl;
    cout<<"3 "<<a3<<endl;
    cout<<"4 "<<a4<<endl;
    cout<<"5 "<<a5<<endl;
    cout<<"6 "<<a6<<endl;
    cout<<"7 "<<a7<<endl;
    cout<<"8 "<<a8<<endl;
    cout<<"9 "<<a9<<endl;

    return 0;
}
//took me 3 tries, what a drag! -_-
