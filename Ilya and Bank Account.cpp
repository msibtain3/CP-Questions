// Problem Link: https://codeforces.com/contest/313/problem/A

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
    
    if(n < 0)
    {
        string num = to_string(n);
        char last = num.back();
        num.pop_back(); // removed last num to get second_last num;
        char sec_last = num.back();
        num.pop_back();
 
        if(stoi(num+last)  < stoi(num+sec_last)) cout << stoi(num+sec_last);
        else cout << stoi(num+last);
        return 0;
    }
    cout << n;
    return 0;
}