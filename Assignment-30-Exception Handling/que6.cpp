#include<iostream>
using namespace std;

int main()
{
    system("cls");
    int num,c=0;
    
    cout<<"Enter Area Picode"<<endl;
    cin>>num;
    int x=num;
    try
    {
       while (num!=0)
       {
        num=num/10;
        c++;
       }
     
     if(c<6) 
         throw"Pincode is not valid";
      else if(c==6)
      throw"Pincode is valid";
    }
    catch(const char*msg)
    {
        cout<<msg<<endl;
    }
    cout<<x;
    return 0;
}