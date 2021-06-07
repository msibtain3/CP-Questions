// Problem Link: https://codeforces.com/contest/34/problem/B

#include<iostream>
#include<cmath>
#include<string.h>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{ 
    int n,m,ans=0;
    cin >> n >> m;
 
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr , arr+n);
    for (int i = 0; i < m; i++)
    {
        if(arr[i] < 0)
        {   
            arr[i] = -(arr[i]);
            ans+=arr[i];
        }
    }
    cout << ans;
 
    return 0;
}