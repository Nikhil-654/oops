#include<iostream>
using namespace std;
class hotel
{
    private:
    int rno;
    string name;
    int  tariff;
    int nod;
    float amount;
    float cal()
    {
        float amount=tariff*nod;
        if(amount>10000)
        {
            amount = amount*1.05;
        }
        return amount;
    }
    public:
        void checkin(int rno,string name,int tariff,int nod)
        {
            this->rno=rno;
            this->name=name;
            this->tariff=tariff;
            this->nod=nod;
        }
        void checkout()
        {
            amount=cal();
            cout<<rno<<endl<<name<<endl<<tariff<<endl<<nod<<endl<<amount;
        }
};
int main()
{
    hotel d1;
    d1.checkin(10,"nikhil",350,2);
    d1.checkout();
    return 0;
}