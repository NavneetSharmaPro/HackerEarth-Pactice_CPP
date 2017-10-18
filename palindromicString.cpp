/**Palindrome String

https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/

*/

#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
  int x=1;
  char s[100];
  cin>>s;
  int l=0;
  //I was an idiot using sizeof() rather than strlen()
  for(int i=0;s[i]!='\0';i++)
  {
    l++;
  }
  //cout<<"Length="<<l<<endl;
  for(int i=0;i<l;i++)
  {
    if(s[i]!=s[l-i-1])
    {
      x=0;
      break;
    }
  }
  if(x==0)
  cout<<"NO"<<endl;
  else
  cout<<"YES"<<endl;
  system("pause");
}

//FUCKED up my head;

/** Copied from w3schools a better explaination to above code
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char s[100];
    int i,len;
    int a = 0;

    cin >> s;
    cout<<s<<endl;
    len= strlen(s);
    cout<<len<<endl;

    for(i=0;i < len ;i++)
    {
      cout<<"S of "<<i<<"="<<s[i]<<endl<<"S of (len-"<<i<<")="<<s[len-i]<<endl<<"S of (len -"<<i<<"-1)"<<s[len-i-1]<<endl;
        if(s[i] != s[len-1-i]){
            a = 1;
            break;
	   }
	}

    if (a) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }
    return 0;
}*/
