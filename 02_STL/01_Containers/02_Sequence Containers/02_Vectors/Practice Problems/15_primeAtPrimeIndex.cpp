/*
Prime At Prime Index:

Given a vector V of n elements. Return the vector containing prime numbers that are at prime index(1-indexing).

Input Format:
First-line contains a single integer T denoting the number of testcases. Each test case contains a single integer N and the next line will contain N elements.

Output Format:
For each testcase, in a newline, print a list(vector) containing the elements that satisfy the given condition.

User-task:
This is a function problem. You only need to complete the function prime_at_prime that takes a vector as parameter and returns a vector. The printing is done by the driver code.

Constraints:
1 <= T <= 10
1 <= n <= 105
1 <= Vi <= 105

Example:
Inuput:
1
5
3 5 2 4 8
Output:
5 2

Explanation:
Testcase1: Only 5 and 2 are the numbers that are prime and are present at prime position (2 and 3 respectively).
*/


#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n) {
    if(n <= 1)
        return false;
        
    for(int i=2; i*i<=n; i++) {
        if(n%i == 0)
            return false;
    }
    
    return true;
}

vector<int> prime_at_prime(vector<int> &v) {
    vector<int> ans;
    
    for(int i=0; i<v.size(); i++) {
        if(isPrime(v[i]) && isPrime(i+1))
            ans.push_back(v[i]);
    }
    
    return ans;
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> v;
        for(int i=0; i<n; i++) {
            int x;
            cin >> x;
            
            v.push_back(x);
        }
        
        vector<int> ans = prime_at_prime(v);
        
        for(int &ele : ans)
            cout << ele << "  ";
    }

    return 0;
}
