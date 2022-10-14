#include<iostream>
using namespace std;
#include<string.h>
bool isValidEmail(char *email);
// int main()
// {
//     system("cls");
//     char str[20];
//     int i;
//     cout<<"Enter your Email id"<<endl;
//     cin.getline(str,20);

// try
// {
//     for( i=0;str[i];i++)
//    {
   
//     if(str[i]=='@')
//     {
//        throw 1;
//     }
//    }
//   if(i>strlen(str)-1)
//   throw"@ not found";
// }
// catch(const char *msg)
// {
//    cout<<msg<<endl;
// }
// catch(int a)
// {
//     cout<<"Valid email"<<endl;
// }
//     cout<<str<<endl;
//     return 0;
// }

int main()
{
    char email[30];
    cout<<"Enter Email Address"<<endl;
    cin.getline(email,30);

    try
    {
         if(isValidEmail(email))
           cout<<"Valid Email Address"<<endl;

           else
           throw 'c';
    }
    catch(const char c)
    {
        cout<<"Not valid Email address  !!!"<<endl;
    }
}

bool isValidEmail(char *email)
{
   int Atoffset=-1;
   int dotOffset=-1;
   int lenght=0;

   for(int i=0; email[i];i++)
   {
      if(email[i]=='@')
        Atoffset=i;
        else if(email[i]=='.')
        dotOffset=i;

        lenght++;
   }

   if(Atoffset==-1 || dotOffset==-1)
   return 0;
   if(Atoffset > dotOffset)
   return 0;
   return !(dotOffset>=(lenght-1));
}