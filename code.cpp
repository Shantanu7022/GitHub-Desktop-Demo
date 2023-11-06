// Find the Second Largest and Smallest element of an array

#include<bits/stdc++.h>
using namespace std;
int secondSmallest(int arr[],int n)
{
    int small = arr[0];
    int second_small = INT_MAX;
    for(int i = 0; i < n; i++) 
    {
       if(arr[i] < small)
       {
          second_small = small;
          small = arr[i];
       }
       else if(arr[i] < second_small && arr[i] != small)
       {
          second_small = arr[i];
       }
    }
   return second_small;     
}
int secondLargest(int arr[],int n)
{
    int large=arr[0],second_large=-1;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
 
        else if (arr[i] > second_large && arr[i] != large) 
        {
            second_large = arr[i];
        }
    }
    return second_large;                
}

int main() {
    int arr[]={1,1,2,4,7,7,5}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
        int sS=secondSmallest(arr,n);
        int sL=secondLargest(arr,n);
    cout<<"Second smallest is "<<sS<<endl;
    cout<<"Second largest is "<<sL<<endl;
    return 0;
}

