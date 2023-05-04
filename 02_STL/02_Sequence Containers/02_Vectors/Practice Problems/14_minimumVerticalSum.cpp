/*
Minimum Vertical Sum:

Given a vector of vectors V. Find the minimum vertical sum. Vectors inside the vector V may not be of the same size.
The vertical sum is defined as described below:
If we have a vector of vectors V:
1  2 3 4
5 6
7 8 9
The vertical sums are: Sum of {1 5 7}, Sum of {2 6 8}, Sum of {3 9}, Sum of {4}.

Example 1:
Input:
N = 3
v1 -> 2 3 5
v2 -> 1 2
v3 -> 1 4 5 1
Output: 
1

Explanation:
Here N  = 3. So we have 3 vectors inside V. Now, the first vector is of size 3 and elements are {2 3 5}.
The second vector is of size 2 and elements are {1 2}. The third vector is of size 4 and elements are {1 4 5 1}.
2 3 5
1 2
1 4 5 1
So, the vertical sums are {2+1+1}, {3+2+4}, {5+5},{1}. 1 is the min vertical sum here.

Your Task:
This is a function problem. You need to complete the function minimum_ vertical_sum() that takes vector of vectors as a parameter and returns min vertical sum.
*/


#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int minimum_vertical_sum(vector<vector<int>> &V) {
    int minSum = INT_MAX;
    int maxRowSize = 0;
    vector<int> verticalSums;
    
    // Compute the maximum row size
    for (int i=0; i<V.size(); i++) {
        maxRowSize = max(maxRowSize, (int)V[i].size());
    }
    
    // Initialize the vertical sums to zero
    for (int j=0; j<maxRowSize; j++) 
        verticalSums.push_back(0);
    
    // Compute the vertical sums and keep track of the minimum
    for (int i=0; i<V.size(); i++) {
        int rowSize = V[i].size();
        
        for (int j = 0; j<rowSize; j++) 
            verticalSums[j] += V[i][j];  // Add the element to the corresponding vertical sum
            
        // Pad the row with zeros to match the maximum row size
        for (int j=rowSize; j<maxRowSize; j++) 
            verticalSums[j] += 0;
    }
    
    for (int sum : verticalSums) 
        minSum = min(minSum, sum);
    
    return minSum;
}

int main() {
    int n = 3;
    
    vector<int> v1 = {2, 3, 5};
    vector<int> v2 = {1, 2};
    vector<int> v3 = {1, 4, 5, 1};
    
    vector<vector<int>> v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    
    int ans = minimum_vertical_sum(v);
    
    cout << ans;

    return 0;
}
