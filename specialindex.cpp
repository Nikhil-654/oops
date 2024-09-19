#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int k,sum,maximum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }  
    for(int i=0;i<n;i++)
    {
        sum=0,k=0;
        for(int j=i;j<n;j++)
        {
            k=k+1;
            if(k<n)
            {
                sum=sum+arr[j];
            }
        }
        maximum=max(sum,maximum);
    }
    cout<<maximum;
    return 0;
}