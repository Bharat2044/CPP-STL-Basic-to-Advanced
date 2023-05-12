/*
Back To Front:

Given a vector of N positive integers. Your task is to print the vector elements in reverse order.

Example 1:

Input:
N = 5
vector -> 1 2 3 4 5
Output: 
5 4 3 2 1
Constraints:
1 <= N <= 106
1 <= V[i] <= 1012

User Task:
Your task is to complete the function reverseIterator() which accepts it1 and it2, starting and ending iterators as two parameters and prints the vector elements in reverse order.
*/


#include <iostream>
#include <vector>
using namespace std;

// Time Complexity = O(n), Space Complexity = O(1)
void reverseIterator(vector<int> &v) {
    vector<int> ans;
    
    // for(vector<int> :: iterator it=v.end()-1; it!=v.begin()-1; it--)
    //     cout << (*it) << "  ";
    
    // vector<int> :: reverse_iterator it;
    // for(it=v.rbegin(); it!=v.rend(); it++)
    //     cout << (*it) << "  ";
    
    
    // for(vector<int> :: reverse_iterator it=v.rbegin(); it!=v.rend(); it++)
    //     cout << (*it) << "  ";
    
    for(auto it=v.rbegin(); it!=v.rend(); it++)
        cout << (*it) << "  ";
    
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    
    reverseIterator(v);
    
    return 0;
}
