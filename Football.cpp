// Problem Link: https://codeforces.com/contest/96/problem/A

#include<iostream>
#include<cmath>
#include<string.h>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{ 
    string players;
    cin >> players;
 
    if ( (players.find("0000000") != -1) || (players.find("1111111")) != -1 ) cout << "YES";
    else cout << "NO";
 
    return 0;
}