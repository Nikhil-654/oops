#include<iostream>
using namespace std;
class ToolBooth
{
    private:
    int totalCars;
    double amount;
    public:
    ToolBooth(int unsigned totalCars,int amount)
    {
        this->totalCars=totalCars;
        this->amount=amount;
    }
    void payingCar()
    {
        totalCars++;
        amount=amount+0.5;
    }
    void nonPayCar()
    {
        totalCars++;
    }
    void show()
    {
        cout<<totalCars<<" "<<amount<<endl;
    }
};
int main()
{
    ToolBooth t1(0,0.0);
    char ch;
    cin>>ch;
    while(1)
    {
    switch (ch)
    {
    case 'p':
    t1.payingCar();
    break;
    case 'n':
    t1.nonPayCar();
    break;
    // case 27:
    // t1.show();
    // break;
    }
    cin>>ch;
    }
    return 0;
}