#include<iostream>
using namespace std;
int nways(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return nways(n-1)+nways(n-2);
    }
}

int main()
{
    int n;
    cout<<"Enter the number of stairs: ";
    cin>>n;
    cout<<nways(n)<<endl;
    return 0;
}

