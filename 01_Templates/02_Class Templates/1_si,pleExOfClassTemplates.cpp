#include<iostream>
using namespace std;

template<typename T>    // template<class T> 
class Test {
    private:
       // A variable (answer) of type T so that it can store results of various types.
       T answer;
    
    public:
       // Constructor of Test class.
       Test(T n) : answer(n) {
          cout << "Inside constructor" << endl;
       }
    
       T getNumber() {
          return answer;
       }
};

int main() {
    // Creating an object with an integer type.
    Test<int> numberInt(60);

    // Creating an object with double type.
    Test<double> numberDouble(17.27);
 
    // Calling the class method getNumber with different data types:
    cout << "Integer Number is: " << numberInt.getNumber() << endl;
    cout << "Double Number = " << numberDouble.getNumber() << endl;
 
    return 0;
}
