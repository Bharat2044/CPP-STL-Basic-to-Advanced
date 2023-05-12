/*
Vector insertion:

Given an array arr[] of size N containing integers. The task is to insert elements of given array to vector and return that vector.

Example 1:

Input:
N = 4
arr[] = 1 2 3 4
Output: 
1 2 3 4
Explanation:
In the series 1 1 2 3 5...... the fourth
fibonacci number is 3.
Example 2:

Input:
N = 3
arr[] = 3 2 1
Output: 
3 2 1 
Explanation:
Your Task:

You need to complete the function fillVector(arr) contains given array as parameter. You don't have to worry about the input.
*/


#include <iostream>
#include <vector>
using namespace std;

vector<int> fillVector(int arr[], int n) {
    vector<int> ans;
    
    // insert array elements into vector
    for(int i=0; i<n; i++)
        ans.push_back(arr[i]);
        
    // return the vector
    return ans;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    
    // finding the length of the array
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Array elements are : ";
    for(int &ele: arr)
        cout << ele << "  ";
    cout << "\n\n";
        
    vector<int> v = fillVector(arr, n);
    
    cout << "Vector elements are : ";
    for(int &ele: v)
        cout << ele << "  ";
    
    return 0;
}
