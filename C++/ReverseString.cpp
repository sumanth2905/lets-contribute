#include <iostream>
using namespace std;
int main()
{
    char str[50];
    cout<<"Enter a string";
    cin>>str;
    char reverse[50];
    int i=-1;
    int j=0;
          while(str[++i]!='\0');
           while(i>=0)
                    reverse[j++]=str[--i];
            reverse[j]='\0';
      cout<<"Reverse of  a string is"<<endl<<reverse;
      return 0;
}
