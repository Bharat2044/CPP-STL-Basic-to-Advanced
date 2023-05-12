#include <iostream> 
#include <vector> 
using namespace std; 

// Return by Value (Returning Vector by Normal Vector Name)
vector<int> fun1() {
    vector<int> v = {1, 2, 3, 4, 5};
    return v;
}

// Return by Value (Returning a Vector Literal)
vector<int> fun2() {
    return {1, 2, 3, 4, 5};
}

// Return by Reference (Returning a Vector Reference)
vector<int> &fun3(vector<int> &results) {
    for(auto &i : results) 
        i *= i;
    return results;
}

int main() { 
    vector<int> v1 = fun1();
    for(auto &ele : v1)
        cout << ele << "  ";
    cout << "\n\n";
    
    vector<int> v2 = fun2();
    for(auto &ele : v2)
        cout << ele << "  ";
    cout << "\n\n";
    
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v3 = fun3(v);
    for(auto &ele : v3)
        cout << ele << "  ";
    cout << "\n\n";
    
    return 0; 
}
