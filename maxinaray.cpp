#include<iostream>
using namespace std;

int array_max( int arr[], int n)
{ int max =arr[0];
    for(int i=0; i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
  return max;
}

int  main()
{
    int arr[]={1,2,36,366,63};
    int n=5;
   cout<<array_max(arr, n);
   return 0;

}