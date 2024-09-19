#include<iostream>
using namespace std;
class student
{
    private:
    int score[5];
    public:
    void input()
    {
        for(int j=0;j<5;j++)
        {
            cin>>score[j];
        }
    }
    int totalscore()
    {
        int totalscore=0;
        for(int i=0;i<5;i++)
        {
            totalscore+=score[i];
        }
        return totalscore;
    }
};
int main()
{
    int c=0;
    //student s1;
    int n;
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
        s[i].input();
    }
    int annascore=s[0].totalscore();
    for(int i=1;i<n;i++)
    {
        if(s[i].totalscore()>annascore)
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}