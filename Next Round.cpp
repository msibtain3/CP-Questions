// Problem Link: https://codeforces.com/contest/158/problem/A

#include<iostream>
#include<cmath>
#include<string.h>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{ 
    int n,k,ans=0; 
    cin >> n >> k;
    int arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int target  = arr[k-1];
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > 0)
        {
 
            if(arr[i] >= target) ans++;
        }
    }
    cout<<ans;
    return 0;
}
 