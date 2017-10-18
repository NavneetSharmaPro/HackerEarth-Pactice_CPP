/**Read from STDIN, Write to STDOUT
Read different types of data from standard input, process them as shown in output format and print the answer to standard output.

Input format:
First line contains integer N.
Second line contains string S.

Output format:
First line should contain N×2.
Second line should contain the same string S.

Constraints:
0≤N≤10
1≤|S|≤15 where |S|= length of string */

#include <iostream>
using namespace std;

int main()
{
	int n;
	char s[15];
	cin>>n;
	cin>>s;
	cout<<n*2;
	cout<<endl;
	cout<<s;
	return 0;
}
//Easy as fuck.
