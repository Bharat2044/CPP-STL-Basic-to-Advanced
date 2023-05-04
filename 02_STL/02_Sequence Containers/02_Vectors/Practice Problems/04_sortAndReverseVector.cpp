/*
Sort and Reverse Vector:

You are given a vector V of size n. You need to sort it and reverse it.

Example 1:

Input:
n = 5
V = 1 2 3 4 5
Output: 
1 2 3 4 5
5 4 3 2 1
Your Task:
Since this is a function problem, you don't need to take any input. Just complete the provided functions sortVector() and reverseVector(). Return the vector after performing suitable operations.

Constraints:
1 <= n <= 107
0 <= Vi <= 107
*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> &v) {
    for(auto &ele : v)
        cout << ele << "  ";
    cout << "\n\n";
}

// Time Complexity = O(nlogn), Space Complexity = O(1)
void sortVector(vector<int> &v) {
    sort(v.begin(), v.end());
    
    print(v);
}

// Time Complexity = O(n), Space Complexity = O(1)
void reverseVector(vector<int> &v) {
    reverse(v.begin(), v.end());
    
    print(v);
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    
    sortVector(v);
    reverseVector(v);
    
    return 0;
}
