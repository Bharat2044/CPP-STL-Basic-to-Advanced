#include <iostream> 
#include <vector> 
using namespace std; 

void print4(const vector<int> &v) {      // Not creates new memory and read only
    for(int i=0; i<v.size(); i++)
        cout << v[i] << "   ";
    cout << "\n\n";
}

void print3(const vector<int> v) {      // Creates new memory and read only
    for(int i=0; i<v.size(); i++)
        cout << v[i] << "   ";
    cout << "\n\n";
}

void print2(vector<int> &v) {       // Not creates new memory
    for(int i=0; i<v.size(); i++)
        cout << v[i] << "   ";
    cout << "\n\n";
}

void print1(vector<int> v) {        // Creates new memory
    for(int i=0; i<v.size(); i++)
        cout << v[i] << "   ";
    cout << "\n\n";
}
  
int main() { 
    vector<int> v{10, 5, 20, 15} ; 
    
    print1(v);
    print2(v);
    print3(v);
    print3(v);
    
    return 0; 
}
