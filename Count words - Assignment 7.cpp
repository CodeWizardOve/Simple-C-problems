//Count Words
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char str[200];
    int i=0, chk=0, countWord=0;
    cout<<"Enter the String: ";
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            if(chk!=0)
                countWord++;
            chk=0;
        }
        else
        {
            chk++;
        }
        i++;
    }
    if(chk!=0)
        countWord++;
    cout<<"\nTotal Number of Words = "<<countWord;
    cout<<endl;
    return 0;
}
