/*
Given two elements X and Y. The task is to return the pair formed with given elements

Input Format: The input contains T, number of testcases. Each testcase contains one line of input containing X and Y separated by space.

Output Format: For each testcase, in a new line, you need to print the elements of pair formed.

User Task: You need to complete the function makePair(X, Y) that takes two numbers as parameters and returns a pair of these number. The first number is the first member of pair and second number is the second member. The printing is done by the driver code.

Constraints:
1 <= T <= 100
1 <= X, Y <= 1000

Sample Input:
2
4 5
1 0

Sample Output:
(4,5)
(1,0)

Explanation:
Testcase1: We have the numbers 4 and 5, so we make them a pair.
*/


#include<bits/stdc++.h>
using namespace std;

pair<int, int> makePair(int a, int b) {  
    pair<int, int> ans = {a, b};
    
    return ans;
}

int main() {   
    int t;
    cin >> t;
    
    while(t--) {
        int x, y;
        cin >> x >> y;
        
        pair<int, int> p = makePair(x, y);
        cout<< "(" << p.first << "," << p.second << ")" << endl;
    }
    
    return 0;
}
