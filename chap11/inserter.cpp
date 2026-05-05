/*
C++ allows a much better way of performing I/O operations on classes: by overloading the << and the >> I/O operators.
<< is referred to as the insertion operator becuase it inserts data into the stream.
>> operator is called the extraction operator because it extracts data from a stream.
- The functions that overload the insertion and extraction operators are called inserters and extractors.
- In <iostream> the insertion and extraction operators are overloaded for all the C++ built-in types.

*/



/*To create an inserter function for an object of type ThreeD, 
we overload the << for it.
*/
//Displaying X,Y,Z coordinates -ThreeD inserter
/*
Here the inserter has been declared as a reference of an object of type ostream
-This declaration is necessary so that several inserters of this type can 
be combined in a compound I/O expression.
The function has two parameters.
-The first is the reference to the stream that occurs on  the left of the << operator.
- The second is parameter is the object that occurs on the right side
*/
#include <iostream>

class ThreeD
{
public:
    int x,y,z;
    ThreeD(int a,int b,int c) { x=a; y=b; z=c; }
};

std::ostream &operator<<(std::ostream &stream, const ThreeD &obj)
{
    stream << obj.x << " ";
    stream << obj.y << " ";
    stream << obj.z << "\n";
    return stream;
}

int main()
{
    ThreeD a(1,2,3), b(3,4,5), c(5,6,7);
    std::cout << a << b << c;
    return 0;
}