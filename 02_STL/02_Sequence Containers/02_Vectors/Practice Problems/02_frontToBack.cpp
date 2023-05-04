/*
Front to Back:

Iterators are used to iterate over vectors, maps, sets etc. Here we will learn to iterate over a vector from begin to end.
You are given a vector V of size n. You need to print its elements.

Example 1:

Input:
N = 5
vector -> 1 2 3 4 5
Output: 
1 2 3 4 5
Your Task:
Since this is a function problem, you don't need to take any input. Just complete the function iter() that takes two iterators as parameters, i.e., starting and ending iterators. In a new line, print the required output.

Constraints:
1 <= n <= 107
0 <= Vi <= 107
*/


#include <iostream>
#include <vector>
using namespace std;

// Time Complexity = O(n), Space Complexity = O(1)
void iter(vector<int> &v) {
    vector<int> ans;
    
    // vector<int> :: iterator it;
    // for(it=v.begin(); it!=v.end(); it++)
    //     cout << (*it) << "  ";
    
    
    // for(vector<int> :: iterator it=v.begin(); it!=v.end(); it++)
    //      cout << (*it) << "  ";
    
    for(auto it=v.begin(); it!=v.end(); it++)
      cout << (*it) << "  ";
    
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    
    iter(v);
    
    return 0;
}
