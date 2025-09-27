#include<iostream>
using namespace std;

//approach 1
/*bool poweroftwo(int n)
{
    if(n<=0)
    {
        return false;

    }
    while(n!=1)
    {
        if(n%2!=0)
          return false;
        n=n/2;  
    }
    return true;
}*/

//approach 2
bool poweroftwo(int n)
{
    if(n<=0)
      return false;
    return (n&(n-1))==0;  
}

int main()
{
   int n;
   cin>>n;
   cout<<poweroftwo(n)<<endl;
}