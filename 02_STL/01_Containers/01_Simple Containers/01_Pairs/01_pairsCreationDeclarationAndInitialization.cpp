#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, int> p1;          // declaration
    pair<int, string> p2;      // declaration
    
    cout << "Pair p1 values are: ";
    cout << p1.first << "  " << p1.second << endl;
    
    cout << "Pair p2 values are: ";
    cout << p2.first << "  " << p2.second << endl;
    
    p1 = {10, 20};                   // initialization
    p2 = {88, "Bharat Kumar"};       // initialization
    
    cout << "Pair p1 values are: ";
    cout << p1.first << "  " << p1.second << endl;
    
    cout << "Pair p2 values are: ";
    cout << p2.first << "  " << p2.second << endl;
    
    p1.first = 11;              // initialization
    p1.second = 22;             // initialization
    p2.first = 112;            // initialization
    p2.second = "Deepak";       // initialization
    
    cout << "Pair p1 values are: ";
    cout << p1.first << "  " << p1.second << endl;
    
    cout << "Pair p2 values are: ";
    cout << p2.first << "  " << p2.second << endl;
    
    p1 = make_pair(121, 134);              // initialization
    p2 = make_pair(999, "Raj Singh");      // initialization
    
    cout << "Pair p1 values are: ";
    cout << p1.first << "  " << p1.second << endl;
    
    cout << "Pair p2 values are: ";
    cout << p2.first << "  " << p2.second << endl;
    
    
    pair<double, char> p3(10.5, 'G');   // declaration + initialization
    cout << "\nPair p3 values are: ";
    cout << p3.first << "  " << p3.second << endl;
    
    
    pair<string, char> p4 = make_pair("Bharat", 'G');   // declaration + initialization
    cout << "\nPair p4 values are: ";
    cout << p4.first << "  " << p4.second << endl;
    
    
    // Initializing multiple values
    pair<int, char> p5(5, 'X'), p6(100, 'Z');   // declaration + initialization
    cout << "\nPair p5 values are: ";
    cout << p5.first << "  " << p5.second << endl;
    cout << "\nPair p6 values are: ";
    cout << p6.first << "  " << p6.second << endl;
  
    return 0;
}
