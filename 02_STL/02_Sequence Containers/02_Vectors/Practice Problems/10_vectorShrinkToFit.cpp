/*
Vector Shrink To Fit:

Given a vector and an integer newsize, find the size using resize and shrink to fit functions.

Input Format:
The first line of input contains T denoting the number of test cases. The T test cases follow. Each test case contains 2 lines of input. The first line contains size, the initial size of the vector, the second line contains newsize, the new size of the vector.

Output Format:
For each test case, print the size of the vector using resize and shrink to fit functions.

Task:
Since this is a function problem, you don't need to take any input. Just complete the function ShrinkMe that takes the vector and newsize and prints both the size.

Constraints:
1 <= T <= 100
1 <= size <= 100
1 <= newsize<= 100

Example:
Input:
1
20
10

Output:
20
10
*/


#include <iostream>
#include <vector>
using namespace std;

// Time Complexity = O(1), Space Complexity = O(1)
void shrinkMe(int x, int y) {
    
    cout << x << "\n" << y;
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int size, newSize;
        cin >> size >> newSize;
        
        shrinkMe(size, newSize);
    }
    
    return 0;
}
