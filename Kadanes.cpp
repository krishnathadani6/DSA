#include<iostream>
using namespace std;

void maximumsubaaraysum(int arr[],int n)
{
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        currsum=currsum+arr[i];
        maxsum=max(maxsum,currsum);
        if(currsum<0)
        {
            currsum=0;
        }

    }
    cout<<maxsum;
}
int main()
{
    int arr[]={2,-3,6,-5,4,2};
     maximumsubaaraysum(arr,6);
    return 0;


}