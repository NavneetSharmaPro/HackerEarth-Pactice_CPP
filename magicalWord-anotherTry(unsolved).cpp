/**
https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/magical-word/
*/
#include<iostream>
#include<cmath>
using namespace std;

bool isDhananjay(int item)
{
  int tempVar=0;
  for(int i=1;i<=item;i++)
  {
    if(item%i==0)
    tempVar++;
  }
  if(tempVar==2)
  return true;
  else return false;
}

int main()
{
  int arr[100],modified[100];
  int z=0,testCases,element,p=0;
  for(int i=65;i<123;i++)
  {
    if(i>=91 && i<=96) continue;
    else if(isDhananjay(i))
    {
      arr[z++]=i;
    }
  }
  cin>>testCases;
  for(int i=0;i<testCases;i++)
  {
    cin>>element;
    for(int k=0;k<z;k++)
    {
      int s=abs(element-arr[0]);
      if(abs(element-arr[k])<s)
      modified[p++]=arr[k];
    }
    cout<<modified;
  }
  return 0;
}
