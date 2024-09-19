#include<iostream>
using namespace std;
class sample
{
    private:
    int a;
    int b;
    public:
    sample(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    ~sample()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
    int add()
    {
        return a+b;
    }
};
int main()
{
    sample s1;
    s1.sample(10,10);
    cout<<s1.add()<<endl;
    return 0;
}