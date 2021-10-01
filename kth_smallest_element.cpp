// Link to the problem : https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1

#include<iostream>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr+n);
    cout << "Kth Smallest: " << arr[k-1] << "\n";

    return 0;
}