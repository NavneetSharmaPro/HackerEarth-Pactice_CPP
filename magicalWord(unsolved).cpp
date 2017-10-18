/**
https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/magical-word/
*/
/* Try 1:

#include <iostream>
using namespace std;

int isprime(int p)
{
    int a=0;
    for(int i=1;i<=p;i++)
    {
    	if(p%i==0)
    	a++;
    }
    cout<<a;
	if(a==2)
	return 1;
	else return 0;
}
int increment(int x)
{
    int flag=0;
    if(x>=65 && x<=90)
    {
        for(int i=x;i<90;i++)
        {
            flag++;
            if(isprime(i)==1)
            return flag;
        }
    }
    else if (x>=97 && x<=122)
    {
        for(int i=x;i<122;i++)
        {
            flag++;
            if(isprime(i)==1)
            return flag;
        }
    }
    return 100;
}
int decrement(int y)
{
    int flag=0;
    if(y>=65 && y<=90)
    {
        for(int i=y;i>65;i--)
        {
            flag++;
            if(isprime(i)==1)
            return flag;
        }
    }
    else if (y>=97 && y<=122)
    {
        for(int i=y;i>90;i--)
        {
            flag++;
            if(isprime(i)==1)
            return flag;
        }
    }
    return 100;
}

int main()
{
    int t,n;
    char s[500];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        cin>>s;
        for(int j=0;j<n;j++)
        {
            if(isprime(s[j])!=0)
            {
                int x=s[j];
                if(increment(x)>decrement(x))
                {
                    s[j]=s[j]+increment(x);
                }
                if(increment(x)<decrement(x))
                {
                    s[j]=s[j]-decrement(x);
                }
                else if(increment(x)==decrement(x))
                {
                    s[j]=s[j]-decrement(x);
                }
            }
        }
    }
    cout<<s;
    return 0;
}*/


# include <iostream>

using namespace std;

int isprime(int p)
{
    int a=0;
    for(int i=1;i<=p;i++)
    {
    	if(p%i==0)
    	a++;
    }
	if(a==2)
	return 1;
	else return 0;
}

void edit(char x[12],char y[100],int length)
{
  int check1=100;
  int check2=100;
  cout<<" x(magic word in edit())="<<x<<endl;
  cout<<" y(inputted string in edit())=";
  for(int i=0;i<length;i++)
  {
    cout<<y[i];
  }
  cout<<endl;

  for(int i=0;i<length;i++)
  {
    for(int j=0;j<12;j++)
    {
      if(y[i]==x[j])
      {
        i++;
      }
      else if(y[i]<x[j] || y[i]>x[j])
      {
        if(y[i]<x[j])
        {
          check1=x[j]-y[i];
        }
        else if(y[i]>x[j])
        {
          check2=y[i]-x[j];
        }
        if(check1<check2)
        {
          y[i]=y[i]+check1;
        }
        else if(check2<check1)
        {
          y[i]=y[i]-check2;
        }
        else if(check1==check2)
        {
          y[i]=y[i]-check2;
        }
      }
    }
  }
  cout<<"new array=";
  for(int i=0;i<length;i++)
  {
    cout<<y[i];
  }
  cout<<endl;
}

void magicWord(char z[100], int size)
{
  char a[12];
  //int flag=0;
  int p=0;
  for(int i=65;i<=122;i++)
  {
    if(i>=91 && i<=96)
    continue;
    else
    {
      if(isprime(i))
      {
        a[p]=i;
        cout<<"Value of i going in a["<<p<<"]="<<i<<"="<<(char)i<<endl;
        p++;
      }
    }
  }
  /*for(int i=0;i<12;i++)
  cout<<a[i]<<endl;*/
  cout<<"Calling edit with "<<a<<" String and "<<z<<" string and "<<size<<" Size "<<endl;
  edit(a,z,size);
}// Perfect logic at last
 int main()
 {

     int t,n;
     char s[100];
     cout<<"How many numbers?"<<endl;
     cin>>t;
     cout<<"How many charcaters?"<<endl;
     cin>>n;
     for(int i=0;i<t;i++)
     {
      cin>>s;
      cout<<"Calling magicword with "<<s<<" string and "<<n<<" size "<<endl;
      magicWord(s,n);
     }
     return 0;

 }
