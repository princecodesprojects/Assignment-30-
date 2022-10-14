
#include<iostream>
using namespace std;
#include<string.h>
#include<ctype.h>
// int main()
// {
//     char username[15];

//     cout<<"Enter Password"<<endl;
//     cin.getline(username,15);
//     int c=0,A=0;
//     try  
//     {
//         int length=strlen(username);

//         for(int i=0;username[i];i++)
//         {
//             if(username[i]=='0' || username[i]=='8' || username[i]=='7' || username[i]=='6' || username[i]=='5' || username[i]=='4' || username[i]=='3' || username[i]=='1' || username[i]=='2' || username[i] =='9' || username[i]=='@' || username[i]=='$' || username[i]=='&')
//             {
//                 c++;
//             }
//         }
//         for(int i=0;username[i];i++)
//         {
//             if(username[i]=='A'||username[i]=='Z')
//             {
//                 A++;
//             }
//         }

//         if(length > 6 && c>0 && A>0)
//           throw"Valid Password";
//           else
//           throw"not Valid Password";
//     }
//     catch(const char *msg)
//     {
//         cout<<msg<<endl;
//     }

//     return 0;
// }

int main()
{
      char username[20];
      char pass[20];

      cout<<"Enter username"<<endl;
      gets(username);
      cout<<"Enter Password"<<endl;
      gets(pass);

      try
      {
          if(strlen(pass)<6)
          {
            cout<<"\n Password must be at least 6 character long...";
            throw 'c';
          }

          bool digit_yes=false;
          bool valid;
          int len=strlen(pass);

          for(int count=0;count<len;count++)
          {
               if(isdigit(pass[count]))
                 digit_yes=true;
          }

          if(!digit_yes)
          {
            valid=false;
            cout<<"\n Password must have at least one digit"<<endl;
            throw 'c';
          }
          else
          {
            valid=true;
            cout<<"\n Password is correct";
          }

      }
      catch(const char c)
      {
         cout<<"\n Invalid Password Format !!!";
      }
      catch(...)
      {
        cout<<"\n Dafault Exception";
      }
      
    return 0;  
}