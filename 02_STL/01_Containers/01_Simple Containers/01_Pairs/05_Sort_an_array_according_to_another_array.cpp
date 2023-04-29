/*
Problem: Given two arrays a[] and b[] of equal size. The task is to sort the array b[] according to the elements of array a[]. That is, elements of the array b[] should be rearranged by following the corresponding elements of array a[] as appeared in sorted order.

Input: a[] = {2, 1, 5, 4, 8, 3, 6, 7};
       b[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'}
Output: B A F D C G H E
Explanation:
Consider first elements of both arrays: (2, A)
Since the correct location of element 2 in a[] is at position 2.
Therefore, the corresponding element of b[] is also placed at position 2.
Similarly, the rest of the elements are arranged in the following way:
(1, B) 
(2, A) 
(3, F) 
(4, D) 
(5, C) 
(6, G) 
(7, H) 
(8, E) 
*/


#include<bits/stdc++.h>
using namespace std;

void pairSort(int a[], char b[], int n) {  
    pair<int, char> p[n];
    
    for(int i = 0; i < n; i++)
        p[i] = {a[i], b[i]};
        
    sort(p, p+n);
    
    for(int i=0; i<n; i++)
        a[i] = p[i].first;
    
    for(int i=0; i<n; i++)
        cout << "(" << a[i] <<", " << p[i].second << ")" << endl;
}

int main() {   
    int a[] = {2, 1, 5, 4, 8, 3, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    char b[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    
    pairSort(a, b, n);
    
    return 0;
}
