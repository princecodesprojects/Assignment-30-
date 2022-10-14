#include<iostream>
using namespace std;

int main()
{
    system("cls");
    int a,b,c;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;

    try
    {
        
       if(b==0)
       throw"Divide by Zero error";

       if(b==1)
       throw 1;
       if(a==0)
       throw exception();
      c=a/b; 
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
    }
    catch(const int x)
    {
        cout<<"Divide by 1"<<endl;
    }
    catch(...)
    {
        cout<<"Unexpected error"<<endl;
    }

    cout<<"result "<<c<<endl;
    return 0;
}