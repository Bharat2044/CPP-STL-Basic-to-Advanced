#include<iostream>
using namespace std;

template<class T>    // template<class T> 
class Pair {
    public:
        T x, y;
        
        Pair(T i, T j) {
            x = i; 
            y = j;
        }
        
        T getFirst() {
            return x;
        }
        
        T getSecond() {
            return y;
        }
};

int main() {
    Pair<int> p1(10, 20);
    cout << p1.getFirst() << "  " << p1.getSecond() << endl;
    
    Pair<float> p2(5.6, 34.45);
    cout << p2.getFirst() << "  " << p2.getSecond() << endl;
    
    return 0;
}
