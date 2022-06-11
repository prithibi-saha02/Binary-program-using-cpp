#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class binary
{
private:
    string s;
     void check(void);
public:
       void getdata(void);
       void turn(void);
       void display(void);
};

void binary ::getdata(void)
{
    cout<<"Enter any binary number: "<<endl;
    cin>>s;
}

void binary::check(void)
{
    for (int  i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0'&& s.at(i)!='1')
    {
        cout<<"This is not a binary no."<<endl;
        exit(0);
    }
    }
    
    
}
void binary::turn(void)
{
    check();
    for (int  i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='1')
        {
            s.at(i)='0';
        }
        else
        {
            s.at(i)='1';
        }
        
    }
    
}

void binary::display(void)
{
    cout<<"Displaying your binary no: "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
int main()
{
    binary b;
    b.getdata();
    b.display();
    b.turn();
    b.display();
    
    return 0;
}