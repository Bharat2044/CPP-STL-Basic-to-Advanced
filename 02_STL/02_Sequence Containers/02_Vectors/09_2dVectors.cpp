#include <iostream>
#include <vector>
using namespace std;

// Printing Vector
void print(vector<vector<int>> &arr) {
    /*for(int i=0; i<arr.size(); i++) {
        for(int j=0; j<arr[i].size(); j++)
            cout << arr[i][j] << "  ";
        cout << endl;
    }*/
    for(auto& a: arr) {
        for(int& ele: a)
            cout << ele << "  ";
        cout << endl;
    }
    cout << endl;
}

int main() {
    // Declaration and Initialization
    vector<vector<int>> v1{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> v2 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> v3(3, vector<int>(3));
    vector<vector<int>> v4(3, vector<int>(3, -1));
    vector<vector<int>> v5(3, vector<int>{1, 2, 3});
    vector<vector<int>> v6;
    
    vector<int>a{1, 2, 3};
    vector<int>b = {4, 5, 6};
    v6.push_back(a);
    v6.push_back(b);
    v6.push_back({7, 8, 9});
    
    cout << "Printing vector v1:\n";
    print(v1);
    
    cout << "Printing vector v2:\n";
    print(v2);
    
    cout << "Printing vector v3:\n";
    print(v3);
    
    cout << "Printing vector v4:\n";
    print(v4);
    
    cout << "Printing vector v5:\n";
    print(v5);
    
    cout << "Printing vector v6:\n";
    print(v6);
    
    v6.pop_back();
    cout << "Printing vector v6 after pop_back:\n";
    print(v6);

    // Taking Input From User
    int r, c;
    cout << "Enter row size: ";
    cin >> r;
    cout << "Enter column size: ";
    cin >> c;
    
    cout << "Enter vector elements:\n";
    vector<vector<int>> v7;
    for(int i=0; i<r; i++) {
        vector<int> t;
        
        for(int j=0; j<c; j++) {
            int x;
            cin >> x;
            t.push_back(x);
        }
        
        v7.push_back(t);
    }
    
    cout << "Printing vector v7:\n";
    print(v7);
    
    return 0;
}
