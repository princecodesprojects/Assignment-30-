#include<iostream>
using namespace std;

int main()
{
    system("cls");
    float n1,n2,ans;
    char Operator;

    cout<<"\n Perform Arithnmetic Operation on two numbers";
    cout<<"\n ----------------------------------------------";

    try
    {
       cout<<"Enter a number"<<endl;
       cin>>n1;
       if(n1==0)
         throw 0;
         cout<<"Enter a operator"<<endl;
         cin>>Operator;
         if(Operator!='+'&& Operator!='-' && Operator!='*'&& Operator!='/')
         throw Operator;
         cout<<"Enter second number"<<endl;
         cin>>n2;
         cout<<"\n-------------------------------------------------";
         switch(Operator)
         {
             case '+':
               ans=n1+n2;
               break;
               case '-':
               ans=n1-n2;
               break;
               case '*':
               ans=n1*n2;
               break;
               case '/':
               if(n2==0)
                  throw 0;
               ans=n1/n2;
               break;
         }
         cout<<"\n Answer: "<<n1<<" "<<Operator<<" "<<n2<<" = "<<ans;
    }
    catch(const char c)
    {
        cout<<"\n Exception caught... \n Bad Operator : "<<c<<"Is not a valid Operator";
    }

    catch(const int n)
    {
        cout<<"\n Error : Bad Operation...";
    }

    return 0;
}