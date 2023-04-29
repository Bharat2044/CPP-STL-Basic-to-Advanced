#include <iostream>
#include <utility>
#include <tuple>
using namespace std;

void print(pair<int, string> &p) {
    cout << "First element is: " << p.first << " Second element is: " << p.second << endl;
}

int main() {
    pair<int, string> p1;       
    pair<int, string> p2;  
    
    // make_pair function   =>  Pair_name = make_pair (value1,value2);
    p1 = make_pair(1, "one");
    p2 = make_pair(2, "second");
    
    cout << "Pair elements is ==>\n";
    print(p1);
    print(p2);
    cout << endl;
    
    
    // Swap function    =>  pair1.swap(pair2) ;
    cout << "Pair elements before swapping:\n";
    print(p1);
    print(p2);
    
    p1.swap(p2);
  
    cout << "Pair elements after swapping ==>\n";
    print(p1);
    print(p2);
    cout << endl;
    
    
    // tie function     =>  tie(int &, int &) = pair1; 
    pair<int, int> p3 = {3, 4};
    int a, b;
    tie(a, b) = p3;
  
    cout << "Printing elements of pair p3 ==> \n";
    cout << "first element is: " << p3.first << " second element is: " << p3.second << endl;
    cout << "a = " << a << "  and  b = " << b << endl;
    
    pair<int, int> p4 = {8, 9};
    int c, d;
    tie(c, ignore) = p4;
    cout << "c = " << c << "  and  d = " << d << endl;
    
    // Illustrating pair of pairs
    pair<int, pair<int, char>> p5 =  {3, {4, 'a'}};
    int x, y;
    char z;
    tie(x, ignore) = p5;
    tie(y, z) = p5.second;
    cout << "x = " << x << ", y = " << y << ", z = " << z << "\n\n";
    
    // copy pair
    pair<int, int> p6 = {5, 6};
    pair<int, int> p7 = p6;
    cout << "Printing elements of pair p6 ==> \n";
    cout << "first element is: " << p6.first << " second element is: " << p6.second << endl;
    cout << "Printing elements of pair p7 ==> \n";
    cout << "first element is: " << p7.first << " second element is: " << p7.second << endl;
  
    return 0;
}
