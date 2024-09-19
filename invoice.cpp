#include<iostream>
using namespace std;
class invoice
{
    private:
    string partName;
    string partDescription;
    int quantity;
    double price;
    public:
    invoice(string partName,string partDescription,int quantity,double price)
    {
        this->partName=partName;
        this->partDescription=partDescription;
        if(quantity<0)
        {
            this->quantity=0;
        }
        else
        {
            this->quantity=quantity;
        }
        if(price<0.0)
        {
            this->price=0.0;
        }
        else
        {
            this->price=price;
        }
    }
    void setpartName(string partName)
    {
        this->partName=partName;
    }
    void setpartDescriptione(string partDescription)
    {
        this->partDescription=partDescription;
    }
    void setquantity(int quantity)
    {
        this->quantity=quantity;
    }
    void setprice(double price)
    {
        this->price=price;
    }
    void getpartName()
    {
        cout<<this->partName<<endl;
    }
    void getpartDescriptione()
    {
        cout<<this->partDescription<<endl;
    }
    void getquantity()
    {
        cout<<this->quantity<<endl;
    }
    void getprice()
    {
        cout<<this->price<<endl;
    }
    double getInvoiceAmount()
    {
        return quantity*price;
    }
};
int main()
{
    invoice d1("","",-1,0.0);
    d1.setpartName("mobile");
    d1.setpartDescriptione("high quality camera");
    d1.setquantity(0);
    d1.setprice(10000);
    d1.getpartName();
    d1.getpartDescriptione();
    d1.getquantity();
    d1.getprice();
    cout<<"total amount"<<d1.getInvoiceAmount();
    return 0;
}