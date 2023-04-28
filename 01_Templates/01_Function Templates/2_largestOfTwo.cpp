#include<iostream>
using namespace std;

template <class T>   // template <typename T>
T myMax(T x, T y) {
    return (x > y) ? x : y;
}

int main() {
    cout << myMax (3, 7) << endl;       // cout << myMax <int> (3, 7) << endl;
    cout << myMax ('c', 'k') << endl;   // cout << myMax <char> ('c', 'k') << endl;
    
    return 0;
}
