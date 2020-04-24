#include<iostream>
#include<string>
using namespace std;
int main() 
{
cout<<"Please input a sentence";
char sentence[100];
cin>>sentence;
int check=0, i=0;
while(sentence[i])
    {
        if(check==0)
        {
            sentence[i]=toupper(sentence[i]);
            check=1;
        }
        else if(isspace(sentence[i]))
        {
            check=0;
            i++;
        }
        cout<<sentence<<endl;
    }

}