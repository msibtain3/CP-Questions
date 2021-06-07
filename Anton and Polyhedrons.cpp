
#include<iostream>
#include<cmath>
#include<string.h>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;
 

// Link for the problem: https://codeforces.com/contest/785/problem/A

int main()
{ 
    int n;
    cin >> n;
 
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    // Tetrahedron = 4;
    // Cube  = 6;
    // Octahedron = 8;
    // Dodecahedron = 12;
    // Icosahedron = 20;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == "Tetrahedron") ans+=4;
        else if(arr[i] == "Cube") ans+=6;
        else if(arr[i] == "Octahedron") ans+=8;
        else if(arr[i] == "Dodecahedron") ans+=12;
        else ans+=20;
    }
    cout << ans << endl;
    return 0;
}