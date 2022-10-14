#include<iostream>
using namespace std;

int main()
{
    system("cls");
    int num,c=0;
    cout<<"Enter Mobile number"<<endl;
    cin>>num;
    try
    {
       while (num!=0)
       {
        num=num/10;
        c++;
       }
     
     if(c<10) 
         throw"Number is not valid";
      else if(c==10)
      throw"Number is valid";
    }
    catch(const char*msg)
    {
        cout<<msg<<endl;
    }
    
    return 0;
}