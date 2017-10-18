/**
https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/modify-the-string/

You have been given a String S consisting of uppercase and lowercase English alphabets. You need to change the case of each alphabet in this String. That is, all the uppercase letters should be converted to lowercase and all the lowercase letters should be converted to uppercase. You need to then print the resultant String to output.

Input Format
The first and only line of input contains the String S

Output Format
Print the resultant String on a single line.

Constraints
 1≤|S|≤100 where |S| denotes the length of string S

/**
 ASCII Codes
 65=A, 90=Z;
 97=a, 122=z;
*/
/**
SOLVED !!
Stack Smashing Detected=Dynamic memory allocation needed
Need to comment out "Enter the string thing" as any bullshit is not allowed except the required output;
Silly problem
My first accepted program in Hackerearth
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char a[100];//String size was said to be 0to100;
    //cout << "Enter the String: " << endl; //This text was not required;
    cin>>a;
    for(int i=0;i<sizeof(a);i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i]+32;
        }
        else if(a[i]>=97 &&a[i]<=122)
        {
            a[i]=a[i]-32;
        }
    }
    for(int j=0;j<sizeof(a);j++)
    {
        cout<<a[j];
    }
    return 0;
}
//very 1st program, took me some tries.
