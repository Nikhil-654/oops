#include<iostream>
using namespace std;
class users
{
    private:
    string name;
    int units;
    float sum=0;
    public:
        void set(string name,int units)
        {
            this->name=name;
            this->units=units;
        }
        void calculatebill()
        {
           sum=0;
    if(units<=100)
    {
        sum=sum+(units*60)/100;
        sum = sum + 50;       
    }
    else if(units>100&&units<300)
    {
        sum=sum+((100*60)/100)+((units-100)*80)+50;
    }
    else
    {
        sum=sum+60+(2*80)+((units-300)*90)/100+50;
        sum=((sum*15)/100)+sum;
    }
        }
        void show()
        {
            calculatebill();
            cout<<name<<"\t"<<units<<" "<<sum;
        }
};
int main()
{
    users d1;
    int n;
    cin>>n;
    users a[n];
    for(int i=0;i<n;i++)
    {
        string name;
        cin>>name;
        int units;
        cin>>units;
        a[i].set(name,units);
        a[i].show();
    }
    //d1.set("ayush",400);
    //d1.show();
    return 0;
}