#include<iostream>
using namespace std;
#include<string.h>
#include<string>

int main()
{
    string email="princeshukla@gmail.com";
    string gmail="gmail.com";
    

    // cout<<"Enter Your Gmail id"<<endl;
    // getline(cin,email);

    
   if(email.find(gmail)!=-1)
   {
    cout<<"yes"<<endl;
   }
   else
   cout<<"No"<<endl;
    
    return 0;
}