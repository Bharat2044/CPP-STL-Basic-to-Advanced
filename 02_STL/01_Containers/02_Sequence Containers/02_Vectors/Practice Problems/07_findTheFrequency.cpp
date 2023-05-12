/*
 Find the Frequency:
 
Given a vector of N positive integers and an integer X. The task is to find the frequency of X in vector.

Example 1:
Input:
N = 5
vector -> 1 1 1 1 1
X = 1
Output: 
5
Explanation: Frequency of 1 is 5.

Your Task:
Your task is to complete the function findFrequency() which should count the frequency of X and return it.
*/


#include <iostream>
#include <vector>
using namespace std;

// Time Complexity = O(n), Space Complexity = O(1)
int findFrequency(vector<int> &v, int x) {
    int count = 0;
    
    for(int &ele : v) {
        if(ele == x)
            count++;
    }
    
    return count;
}

int main() {
    int n = 5;
    vector<int> v = {1, 1, 1, 1, 1};
    int x = 1;
    
    cout << findFrequency(v, x);
    
    return 0;
}
