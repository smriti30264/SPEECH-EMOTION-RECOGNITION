#include<iostream>
#include<cstring>

using namespace std;

int main()
{
  char str1[10]="HELLO";
  char str2[10]="WORLD";
  char str3[10];
  int len;

  strcpy(str3,str1);
  cout<<str3<<endl;
  strcpy(str1,str2);
  cout<<str1<<endl;
  strcat(str1,str2);
  cout<<str1<<endl;
  len=strlen(str2);
  cout<<len<<endl;

  
}