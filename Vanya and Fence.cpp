// Problem Link: https://codeforces.com/problemset/problem/677/A

#include<iostream>
#include<cmath>
#include<string.h>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,h,ans=0;
    cin >> n >> h;

    int heights[n];
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if(heights[i] > h) ans+=2;
        else
        {
            ans++;
        }
        
    }
    cout << ans;
    return 0;
}