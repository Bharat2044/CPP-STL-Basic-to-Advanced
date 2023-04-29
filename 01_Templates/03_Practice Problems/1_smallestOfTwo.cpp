// Question Links : https://practice.geeksforgeeks.org/problems/c-template/0


//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

template <class T>
class minElement {
    // Complete the class.Make a private variable,constructors and method called
    // check() which takes one parameter and prints the output in new line. 
    private:
        T x;                    // private variable
        
    public:
        minElement(T a) {     // constructors
            x = a;
        }
        
        void check(T y) {
            cout << min(x, y) << endl;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c;
        cin>>c;
        if(c==1)
        {
            string a,b;
            cin>>a>>b;
            minElement<string>obj1(a);
            obj1.check(b);
        }
        else if(c==2)
        {
            int a,b;
            cin>>a>>b;
            minElement<int>obj2(a);
            obj2.check(b);
        }
        else
        {
            char a,b;
            cin>>a>>b;
            minElement<char>obj3(a);
            obj3.check(b);
        }
    }
}


// } Driver Code Ends
