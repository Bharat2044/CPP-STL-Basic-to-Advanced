/*
Given two arrays arr1[] and arr2[] of size N. The task is to make pairs containing values corresponding from arr1 and arr2 i.e. (arr1[0], arr2[0]), (arr1[1],arr2[1]) and so on.

Input Format: The input line contains T, number of testcases. Each testcase contains three lines. The first line contains N size of both arrays. The second and third line contains elements of two arrays separated by space.

Output Format: For each testcase, in a new line, you have to return an array of pairs formed with given arrays.

User task: You need to complete the function corresp_Pair(arr1,arr2,N,res) containing 4 parameters respectively. You don't have to worry about the input. The printing is done by the driver code.
Note: res[] is the resultant pair array where you have to store the corresponding pairs formed.

Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= arr1[i], arr2[j] <= 100

Sample Input:
2
5
1 2 3 4 5
6 7 8 9 10
2
1 2
3 4

Sample Output:
(1,6) (2,7) (3,8) (4,9) (5,10)
(1,3) (2,4)
*/



#include<bits/stdc++.h>
using namespace std;

void corresp_Pair(int *arr1, int *arr2, int n, pair<int, int> res[]) {  
    
    for(int i=0; i<n; i++)
        res[i] = {arr1[i], arr2[i]};
}

int main() {   
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        int arr1[n];
        int arr2[n];
        
        // taking arr1 input
        for(int i=0; i<n; i++)
            cin >> arr1[i];
        
        // taking arr2 input
        for(int i=0; i<n; i++)
            cin >> arr2[i];
        
        pair<int, int> res[n];
        corresp_Pair(arr1, arr2, n, res);
        
        // printing output
        for(int i=0; i<n; i++)
            cout << "(" << res[i].first << "," << res[i].second << ") ";
        cout << endl;
    }
    
    return 0;
}




