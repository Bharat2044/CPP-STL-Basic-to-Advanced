#include <iostream>
using namespace std;

template <class T>  // template<typename T>
void swapValue(T& x, T& y) {
    T temp = x;
    x = y;
    y = temp;
}

int main() {
    int i = 2, j = 3;   
    swapValue(i, j);  
    cout << i << "   " << j << endl << endl;
    
    float a = 2.5f, b = 3.9f;    
    swapValue(a, b); 
    cout << a << "   " << b << endl << endl;
    
    char c = 'a', d = 'b';    
    swapValue(c, d);  
    cout << c << "   " << d << endl << endl;
    
    string s = "Bharat", t = "Deepak";   
    swapValue(s, t); 
    cout << s << "   " << t << endl << endl;
    
	return 0;
}
