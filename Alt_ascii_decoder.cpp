#include<iostream>
using namespace std;
int main()
{
  string a;
  cin>>a;
  for(int i=0;i<a.size();i++)
  {
    if(int(a[i])%2!=0)
    cout<<char(int(a[i])-1);
    else
    cout<<char(int(a[i])+1);
  }
  cout<<endl<<"Congrats! It is working. Enjoy :P";
  
}
