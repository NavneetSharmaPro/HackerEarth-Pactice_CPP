#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  int check1=0;
  int check2=0;
  char a[]="CGIOSYaegkmq";
  cout<<a<<endl;
  cout<<sizeof(a)<<endl;
  cout<<strlen(a)<<endl;
  cout<<"enter a string ="<<endl;
  char x[100];
  cin>>x;
  cout<<x<<endl;
  cout<<sizeof(x)<<endl;
  cout<<strlen(x)<<endl;
  for(int i=0;i<strlen(x);i++)
  {
    for(int j=0;j<strlen(a);j++)
    {
      if(x[i]==a[j]) continue;
      else if(x[i]<a[j] || x[i]>a[j])
      {
        if(x[i]<a[j])
        check1=a[j]-x[i];
        else if(x[i]>a[j])
        check2=x[i]-a[j];
      }
      if(check1<check2)
      x[i]=a[j];
      else if(check2<check1)
      x[i]=a[j];
      else if(check1==check2)
      x[i]=x[i]-check2;
    }
  }
  cout<<"new array="<<x;
  return 0;
}
