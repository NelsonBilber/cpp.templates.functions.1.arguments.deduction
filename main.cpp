#include <iostream>

using namespace std;

template <typename T>
T Max(T x, T y)
{
    cout << typeid(T).name() << endl;
    
    return x > y ? x: y;
}

template char Max (char c, char y); // also creates an instatiation of template

int main() {

    //argument deduction
    
    Max(3, 5);
    Max(9.0f, 25.0f);
    
    Max<double>(9, 25.0f); // EXPLICIT SPECIFY type of override compiler type argument deduction !!
    
    int(*pfn)(int,int) = Max; // intatiate Max template for integer types
    
       
	return 0;
}
