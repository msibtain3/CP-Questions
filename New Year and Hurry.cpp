// Problem Link: https://codeforces.com/contest/750/problem/A

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
    
    int mints=0;
    for (int i = 1; i <= n; i++)
    {
        mints+= i*5;
        if (mints + k <= 240) ans++;
    }
    cout << ans;
    return 0;
}