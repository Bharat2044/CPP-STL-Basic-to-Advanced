/*
Sort Vector of Pairs:

Given a vector of pairs of size n where first element of pair is the age and the second element is the height, you need to sort the vector of pairs in descending order by the second item of the pair. And if the second items are equal, then sort it by first element.

Input Format:
First line of input contains number of testcase, T. For each testcase, first line of input contains N, size of vector. Next line contains 2*N elements seperated by space.

Output Format:
For each testcase, in a new line, print the vector.

User Task:
Your task is to complete the function sortBySec() which accepts a vector of pair as parameter and returns the sorted vector.  The printing is done automatically by the driver code.

Constraints:
1 <= T <= 100
1 <= N <= 100

Example:
Input:
2
2
1 4 2 4

2
1 6 2 10

Output:
(2,4) (1,4)
(2,10) (1,6)

Explanation:
Testcase 1: The first pair in the vector is 1 4, and the second is 2 4. Now since the second elements of the pairs are equal to 4, we need to sort by the first element. Now, since 2 is greater than 1 so 2,4 comes before 1,4.
Testcase 2: The first pair in the vector is 1 6, and the second is 2 10. Now comparing the second elements of the pair. We see that 10>6 so 2,10 will come before 1,6.
*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool myCmp(pair<int, int> p1, pair<int, int> p2) {
    return p1.second >= p2.second;
}

// Time Complexity = O(nlogn), Space Complexity = O(1)
vector<pair<int, int>> sortBySec(vector<pair<int, int>> &v) {
    
    // Approach - 1:
    // sort(v.begin(), v.end(), greater<pair<int, int>>());
    
    // Approach - 2:
    sort(v.begin(), v.end(), myCmp);
    
    return v;
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        
        for(int i=0; i<n; i++) {
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }
        
        vector<pair<int, int>> ans = sortBySec(v);
        for(int i=0; i<n; i++) 
            cout << "(" << v[i].first << "," << v[i].second << ") ";
        cout << endl;
    }
    
    return 0;
}
