#include<iostream>
using namespace std;

template <class T>   // template <typename T>
T add(T x, T y) {
   return (x + y);
}

int main() {

    int result1 = add(2, 3);        // int result1 = add<int>(2, 3);
    cout << result1 << endl;

    double result2 = add(2.2, 3.3); //double result2 = add<double>(2.2, 3.3);
    cout << result2 << endl;

    return 0;
}  
