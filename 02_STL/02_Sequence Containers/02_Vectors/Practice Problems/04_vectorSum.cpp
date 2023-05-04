/*
Vector Sum:

Given a vector, find the sum of the elements of this vector.

Example 1:

Input:
10 20 30
Output: 
60
Explanation:
Sum is 60(10+20+30).
Your Task:
Since this is a function problem, you don't need to take any input. Just complete the function SumMe() that takes the vector and returns the sum.
*/


#include <iostream>
#include <vector>
using namespace std;

// Time Complexity = O(n), Space Complexity = O(1)
int SumMe(vector<int> &v) {
    int sum = 0;
    
    for(auto &ele : v)
        sum += ele;
    
    return sum;
}

int main() {
    vector<int> v = {10, 20, 30};
    
    cout << SumMe(v);
    
    return 0;
}
