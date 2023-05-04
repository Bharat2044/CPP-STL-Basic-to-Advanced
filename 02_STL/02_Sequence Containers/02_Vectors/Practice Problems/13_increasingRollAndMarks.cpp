/*
Increasing Roll And Marks:

We will be given the roll number along with marks. One student may have a different number of subjects. We will also be given subjects code in numeric forms. We need to return the list in ascending order such that if roll numbers are the same then we should return the list in ascending order of the marks and if marks are also same then return the list in ascending order of their subject code.

Input Format:
First-line will contain the number of test cases T. Each testcase will contain N, the total number of data available. The next 3 lines will contain N numbers, first denoting roll number, second denoting marks and third denoting subject codes.

Output Format:
For each testcase, in a new line, print the data in sorted order as mentioned.

Users Task:
This is a function problem. You need to complete the function increasing_List that takes a vector of pair of pairs as parameter and returns the output in the same format.

Constraints:
1 <= T <= 100
1 <= N <= 50
1 <= R[i], M[i], S[i] <= 1000

Example:
Input:
1
4
1 2 1 2
3 4 4 4
1 3 2 4
Output:
1 1 2 2
3 4 4 4
1 2 3 4

Explanation:
Testcase1: The data of a student are represented as {Roll Number, Marks, Subject code}. The first data is {1 3 1}. The second data is {2 4 3}. The third data is {1 4 2}. The fourth data is {2 4 4}. Now sorting the data according to the given conditions we get {1 3 1} at first, then  {1 4 2}, then {2 4 3}, and then {2 4 4}
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<pair<int, int>, int>> increasing_List(int roll[], int marks[], int subject[], int n) {
    vector<pair<pair<int, int>, int>> v;
    
    for(int i=0; i<n; i++) 
        v.push_back({{roll[i], marks[i]}, subject[i]});
        
    sort(v.begin(), v.end());
    return v;
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        int roll[n], marks[n], subject[n];
        
        // Taking input of roll
        for(int i=0; i<n; i++)
            cin >> roll[i];
        
        // Taking input of marks
        for(int i=0; i<n; i++)
            cin >> marks[i];
        
        // Taking input of subject
        for(int i=0; i<n; i++)
            cin >> subject[i];
            
        vector<pair<pair<int, int>, int>> v = increasing_List(roll, marks, subject, n);
        
        cout << endl;
        // for(int i=0; i<n; i++)
        //     cout << v[i].first.first << "  " << v[i].first.second << "  " << v[i].second << endl;
        
        for(int i=0; i<n; i++)
            cout << v[i].first.first << "  ";
        cout << endl;
        
        for(int i=0; i<n; i++)
            cout << v[i].first.second << "  ";
        cout << endl;
        
        for(int i=0; i<n; i++)
            cout << v[i].second << "  ";
        cout << endl;
    }

    return 0;
}
