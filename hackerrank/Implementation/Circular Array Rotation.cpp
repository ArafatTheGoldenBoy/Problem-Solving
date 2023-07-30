// Circular Array Rotation
// https://www.hackerrank.com/challenges/circular-array-rotation/problem
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,q,j;
    cin >> n >> k >> q;
    k = k%n;
    int a[n],b[n],queris[q];
    for(int i = 0; i< n ; i++){
        cin >> j;
        a[i] = j;
    }
    for(int i = 0; i< q ; i++){
        cin >> j;
        queris[i] = j;
    }
    for(int i = 0,j = 0; i < n; i++){
        if(i<n-k){
            b[i+k] = a[i];// 1 -> 3,
        }
        else{
            b[j] = a[i];
            j++;
        }
    }
    for(int i = 0; i< q ; i++){
        cout << b[queris[i]] << endl;
    }
    return 0;
}
