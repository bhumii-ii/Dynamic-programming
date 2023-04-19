#include <iostream>
using namespace std;

int min_energy(int index,int arr[],int dp[])
{

    if (index==0)
    {
        return 0;
    }
    if(dp[index]!=-1)
    {
        return dp[index];
    }
    int left = min_energy(index-1,arr,dp)+ abs(arr[index]-arr[index-1]);
    int right = min_energy(index-2,arr,dp)+ abs(arr[index]-arr[index-2]);

    return dp[index]= min (left,right);
    }
    int main()
    {
        int arr[5]={10,11,34,56,20};
        int dp[6]={-1,-1,-1,-1,-1,-1};
        int min= min_energy(4,arr,dp);
        cout<<min;
        return 0;
    }