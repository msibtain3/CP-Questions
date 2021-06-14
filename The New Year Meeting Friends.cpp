// Problem Link: https://codeforces.com/contest/723/problem/A

#include<iostream>
#include<cmath>
#include<string.h>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int nums[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> nums[i];
    }
    
    sort(nums, nums+3);
    
    cout << nums[2]-nums[0];
    return 0;
}