#include <iostream>
#include <utility>
using namespace std;

int main() {
    // pair <pair <dt1, dt2>, dt3> p1;    ==>   Syntax

    // pair<pair<int, int>, int> p1 = make_pair(make_pair(1, 2), 3);
    // pair<pair<int, int>, int> p1 = {{1, 2}, 3};
    pair<pair<int, int>, int> p1({1, 2}, 3);
  
    cout << "Printing elements of nested pair\n";
    cout << p1.first.first << "  " << p1.first.second << "  " << p1.second << endl;
    
    return 0;
}
