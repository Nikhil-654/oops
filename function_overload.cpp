#include<iostream>
#include<cmath>
using namespace std;
class area
{
    private:
    int x;
    int y;
    int z;
    public:
    int calculate_area(int x)
    {
        return x*x;
    }
    int calculate_area(int x,int y)
    {
        return x*y;
    }
    int calculate_area(int x,int y,int z)
    {
        int s=(x+y+z)/2;
        int ans=sqrt(s*(s-x)*(s-y)*(s-z)) ;
        return ans;
    }
};
int main()
{
    area a1;
    cout<<a1.calculate_area(4)<<endl;
    cout<<a1.calculate_area(4,5)<<endl;
    cout<<a1.calculate_area(4,5,6)<<endl;
    return 0;
}