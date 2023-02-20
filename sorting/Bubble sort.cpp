#include <bits/stdc++.h>
using namespace std;



void myfunction(vector <int> &arr){
    int n = arr.size();
    bool swapped;

    do{
        swapped = false;
    for (int i = 1; i < n ; i++)
    {
        if (arr[i]< arr[i-1])
        {
            swap(arr[i], arr[i-1]);
            swapped = true;
            
        }
    }
    n--;
    
}while(swapped);

   
}

int main()
{
    vector <int>arr = {10,9,8,7,6,5,4,3,2,1};

 cout << "Original array: "<< endl;
    for (int x : arr) {
        cout << x << " " << endl;
    }
    
    myfunction(arr);

    cout << "Sorted array: "<< endl;
    for (int x : arr) {
        cout << x << " " << endl;
    }

    


    return 0;
}
