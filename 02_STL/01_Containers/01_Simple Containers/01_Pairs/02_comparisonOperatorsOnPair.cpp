#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, int> p1 = make_pair(1, 12);   // pair<int, int> p1(1, 12);          
    pair<int, int> p2 = make_pair(9, 12);   //  pair<int, int> p2(9, 12);    
    
    cout << (p1 == p2) << endl;
    cout << (p1 != p2) << endl;
    cout << (p1 > p2) << endl;
    cout << (p1 >= p2) << endl;
    cout << (p1 < p2) << endl;
    cout << (p1 <= p2) << endl;
  
    return 0;
}
