#include <iostream>
using namespace std;

int min_energy(int index,int arr)
{

    if (index==0)
    {
        return 0;
    }
    int left = min_energy(index-1)+ abs(arr[index]-arr[index-1]);
    int right = min_energy(index-2)+ abs(arr[index]-arr[index-2]);

    return min (left,right);
    }