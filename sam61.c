#include"iostream"
using namespace std;
int main()
{ 
 int a,b,c;
 cout<<" Enter two values : ";
 cin>>a>>b;
 c=(a>b)?a:b;
 while(1)
 {
   if(c%a==0 && c%b==0)
   {
     cout<<" LCM : "<<c;
     break;
   }
   ++c;
 }
}
