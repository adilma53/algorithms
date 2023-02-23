#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int left , int right){

int pivot = right;
int i = left - 1;

for (int j = left ; j < right; j++)
{
    if (arr[j] < arr[pivot])
    {
        i++;
        swap(arr[i] , arr[j]);
        
    }
}
swap(arr[i+1], arr[pivot]);
return i + 1;
}

void quicksort(int arr[], int left, int right){
    if (left < right){
        int p = partition(arr, left, right);

        quicksort(arr, left, p-1);
        quicksort(arr, p+1, right);
    }
}


int main()
{
  
int arr[] = {10,9,8,7,6,5,4,3,2,1};
int n = sizeof(arr)/sizeof(arr[0]);
quicksort(arr, 0, n-1);

for (int i : arr)
{
    cout << i << endl;
}

    return 0;
}
