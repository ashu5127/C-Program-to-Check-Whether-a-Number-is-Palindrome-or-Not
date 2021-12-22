//C++ Program to Check Whether a Number is Palindrome or Not
#include<iostream>
using namespace std;
class Table
{
public:
    int num,n;
    int reminder,revnumber=0,palindrome;


public:
    void enter()
    {

    cout<<"Enter any number:"<<endl;
    cin>>num;
    n=num;

    }
    void display()
    {
        do
        {

            reminder=num%10;
            revnumber=(revnumber*10)+reminder;
            num=num/10;
        }while(num != 0);
        cout<<"reverse number :"<<revnumber<<endl;
        if(n==revnumber)

            cout<<"number is  palindrome";

        else
            cout<<"number is not  palindrome";





}
};
int main()
{

    Table t;
    t.enter();
    t.display();
    return 0;
}


