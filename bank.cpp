#include<iostream>
using namespace std;
class bank
{
    private:
    string name;
    int number;
    string type;
    float bal;
    public:
    void initial(string name,int number,string type,float bal)
    {
        this->name=name;
        this->number=number;
        this->type=type;
        this->bal=bal;
    }
    void deposit(int x)
    {
        bal=0;
        bal=bal+x;
    }
    int  withdraw(int y)
    {
        if(bal>=y)
        {
            bal=bal-y;
            return bal;
        }
    }
    void show(int x,int y)
    {
        deposit(x);
        withdraw(y);
        cout<<name<<" "<<number<<" "<<type<<" "<<bal;
    }

};
int main()
{
    bank b1;
    int n;
    cin>>n;
    bank c[n];
    for(int i=0;i<n;i++)
    {
        string name;
        cin>>name;
        int number;
        cin>>number;
        string type;
        cin>>type;
        int bal;
        cin>>bal;
        int x;
        cin>>x;
        int y;
        cin>>y;
        c[i].initial(name,number,type,bal);
        c[i].show(x,y);
    }
    return 0;
}