/*
Maximum Among Left :

Given a vector V of n elements. We need to return the list of indices such that Vi is strictly greater than all the elements from 0 to i-1. 
Note: The resultant list may be empty.

Example 1:
Input:
n = 5
V -> 4 3 5 2 6

Output: 
2 4

Explanation:
The given elements are  {4 3 5 2 6}. 5 is greater than all elements to left (4 and 3). 6 is greater than all elements to the left. So answer list contains  indices of 5 and 6 {2 4}.

Your task:
This is a function problem. You only need to complete the function maximum_from_left() that takes a vector as a parameter and returns a vector. The printing is done by the driver code.
*/


#include <iostream>
#include <vector>
using namespace std;

// Time Complexity = O(n), Space Complexity = O(1)
vector<int> maximum_from_left(vector<int> &v, int n) {
    vector<int> ans;
    int max = v[0];
    
    for(int i=1; i<n; i++) {
        if(v[i] > max) {
            ans.push_back(i);
            max = v[i];
        }
    }
    
    return ans;
}

int main() {
    int n = 5;
    vector<int> v = {4, 3, 5, 2, 6};
    
    vector<int>vec = maximum_from_left(v, n);
    
    for(int &ele : vec) 
        cout << ele << "  ";
    
    return 0;
}
