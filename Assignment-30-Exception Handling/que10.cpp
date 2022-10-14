#include<iostream>
using namespace std;
#include<string.h>
#include<ctype.h>

int main()
{
    char nick[10];
    cout<<"Enter your Nickname"<<endl;
    cin.getline(nick,10);
    

    try
   {
    if(strlen(nick)>8)
    {
        cout<<"Nick name is more than 8 Characters"<<endl;
        throw 'c';
    }
    bool digit_yes=false;
    bool special_sy=false;
    bool space=false;
    int length=strlen(nick);       

    for(int i=0;i<length;i++)
    {
        if(isdigit(nick[i]))
        {
            digit_yes=true;
        }
         if(ispunct(nick[i]))
        {
            special_sy=true;
        }
         if(isblank(nick[i]))
        {
            space=true;
        }
    }

    if(!digit_yes)
    {
        cout<<"There must me at least one digit"<<endl;
        throw 'c';
    }
    else if(!special_sy)
    {
        cout<<"There must me at least one special symbol"<<endl;
        throw 'c';
    }

    if(!space)
    {
        cout<<"There must me at least one space"<<endl;
        throw 'c';
    }
    else
    {
        cout<<"Valid nickname"<<endl;
        cout<<nick<<endl;
    }
   }
   catch(const char c)
   {
    cout<<"Invalid Nickname"<<endl;
   }
    return 0;
}