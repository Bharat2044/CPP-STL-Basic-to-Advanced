/*
Elements Less Than K:
  
A vector a of size n and an element k are given to you.You need to return the list(vector) of elements less than k. The order of elements should be the same as that in the original array.
Note: Incase, there is no element less than k then return an empty vector.

Example 1:
Input:
n = 5
vector -> 5 3 6 1 3
k = 4

Output: 
3 1 3

Explanation:
Here k is 4. Elements less than 4 in the list are {3 1 3}.

Your Task:
You need to complete the function list_less_than_k() that takes vector, n, and k as parameters and returns the list of element less than k.
*/


#include <iostream>
#include <vector>
using namespace std;

// Time Complexity = O(n), Space Complexity = O(1)
vector<int> list_less_than_k(vector<int> &v, int n, int k) {
    vector<int> ans;
    
    for(int &ele : v) {
        if(ele <= k)
            ans.push_back(ele);
    }
    
    return ans;
}

int main() {
    int n = 5;
    vector<int> v = {5, 3, 6, 1, 3};
    int k = 3;
    
    vector<int>vec = list_less_than_k(v, n, k);
    
    for(int &ele : vec) 
        cout << ele << "  ";
    
    return 0;
}
