#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
const char alphanum[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int string_length = sizeof(alphanum)-1;
int main()
{
    int num=0,choice,choice2,r;
    char pass[num];

    cout<<"\t\t\tWELCOME TO RANDOM PASSWORD GENERETOR.\n\n";
    cout<<"\t\t\tPRESS (1) TO CONTINUE.\n\n";
    cout<<"\t\t\tPRESS (0) TO EXIT.\n\n";
    cout<<"\t\t\tENTER YOUR CHOICE: ";
    cin>>choice; 

    if(choice==1)
    {
        cout<<"\t\t\tENTER HOW MANY DIGITS YOU WANT IN YOUR PASSWORD: ";
        cin>>num;
        for(int i=0;i<num;i++)
        {
            srand(time(0));
           pass[i]=alphanum[rand() % string_length];
        }
    }
    if(choice==0)
    {
        cout<<"\t\t\tTHANK YOU FOR USING PASSWORD GENERATOR.\n\n";
    }

    cout<<"\n\t\t\tYOUR PASSWROD IS: ";
    for(int i=0;i<num;i++)
    {
        cout<<pass[i];
    }
 
    cout<<"\n\n";
}