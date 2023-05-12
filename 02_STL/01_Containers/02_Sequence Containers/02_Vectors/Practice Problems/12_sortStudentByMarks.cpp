/*
Given two arrays roll_no[] and marks[] of the same size representing the roll numbers and marks scored by the students respectively. The task is to sort this data according to the increasing order of marks. That is, print the roll numbers along with the marks scored in the order of increasing marks.

Examples:
Input: roll_no[] = {17, 20, 15, 1, 5}, {80, 75, 93, 78, 84}
Output:
Roll No   Marks
20        75
1         78
17        80
5         84
15        93
*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Approach - 1 : 
/*bool sortbysec(const pair<int, int>& p1, const pair<int, int> p2) {
    return p1.second < p2.second;
}

void displaySorted(int roll_no[], int marks[], int n) {
    
    vector<pair<int, int>> v;

    // Traverse the arrays and store elements in vector
    for(int i=0; i<n; i++) 
        v.push_back(make_pair(roll_no[i], marks[i]));

    // sort(v.begin(), v.end(), sortbysec);
    
    for(auto &x : v) 
        cout << x.first << "\t" << x.second << endl;
    
}*/

// Approach - 2 :
void displaySorted(int roll_no[], int marks[], int n) {
    vector<pair<int, int>> v;

    // Traverse the arrays and store elements in vector
    for(int i=0; i<n; i++) 
        v.push_back({marks[i], roll_no[i]});
    
    sort(v.begin(), v.end());
    
    for(auto &x : v) 
        cout << x.second << "\t" << x.first << endl;
    
}

int main() {
    // Input
    int roll_no[] = {17, 20, 15, 1, 5};
    int marks[] = {80, 75, 93, 78, 84};
    
    int n = sizeof(roll_no)/sizeof(roll_no[0]);

    displaySorted(roll_no, marks, n);

    return 0;
}
