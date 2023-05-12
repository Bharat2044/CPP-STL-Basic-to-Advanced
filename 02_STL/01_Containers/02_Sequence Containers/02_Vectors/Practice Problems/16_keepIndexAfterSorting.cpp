/*
Sample Problem : Keep track of previous indexes after sorting Vector of Pairs 

Problem: Given a vector, keep track of the present indexes corresponding to each element and after sorting print element with its previous respective indexes.

Examples:
Input:  arr[] = {2, 5, 3, 7, 1} 
Output:  
{1, 4} 
{2, 0} 
{3, 2} 
{5, 1} 
{7, 3}

Explanation:  
Before sorting [index(element)]: [0(2), 1(5), 2(3), 3(7), 4(1)] 
After sorting [previous_index(element)]: [4(1), 0(2), 2(3), 1(5), 3(7)]

Input:  arr[] = {4, 5, 10, 8, 3, 11}
Output:  
{3, 4} 
{4, 0} 
{5, 1} 
{8, 3} 
{10, 2} 
{11, 5}
*/


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void sortArr(int arr[], int n) {
    
    vector<pair<int, int>> v;
    
    for (int i=0;i<n; ++i) 
        v.push_back({arr[i], i});

    sort(v.begin(), v.end());
    
    for (int i=0; i<v.size(); i++) 
        cout << "(" << v[i].first << " ," << v[i].second << ")\n";
}

int main() {
    int arr[] = {2, 5, 3, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    sortArr(arr, n);

    return 0;
}
