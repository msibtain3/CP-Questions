// Problem Link: https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

#include<iostream>
#include<cmath>
#include<string.h>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n;
    cin >> n;
    int arr[n];

    // init array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    // reversing
    int i = 0; 
    int k = n-1;
    while (i < k)
    {
        int temp = arr[i];
        arr[i] = arr[k];
        arr[k] = temp;
        i++;
        k--;
    }
    // print reversed arr
    for (int i = 0; i < n; i++)
    {
        cout <<  arr[i] << " ";
    }
    return 0;
} 