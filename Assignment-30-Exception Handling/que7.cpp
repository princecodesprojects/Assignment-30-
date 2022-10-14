
#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    char username[15];

    cout<<"Enter username"<<endl;
    cin.getline(username,15);
    int c=0;
    try  
    {
        int length=strlen(username);

        for(int i=0;username[i];i++)
        {
            if(username[i]=='0' || username[i]=='8' || username[i]=='7' || username[i]=='6' || username[i]=='5' || username[i]=='4' || username[i]=='3' || username[i]=='1' || username[i]=='2' || username[i] =='9' || username[i]=='@' || username[i]=='$' || username[i]=='&')
            {
                c++;
            }
        }

        if(length > 6 && c>0)
          throw"Valid username";
          else
          throw"not Valid username";
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
    }
    
    return 0;
}