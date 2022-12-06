/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Rectangle {
    private:
        float length;
        float width;
    public:
        float getLength () {
        return length;
    }
        float getWidth () {
        return width;
    }
    
    void setLength (int newLength) {
        length=newLength;
    }
    
    void setWidth (int newWidth) {
        width=newWidth;
    }
    
    float perimeter() {
        return 2 * (length + width);
    }
};   
    
int main()
{
    Rectangle rectangle;
    
    rectangle.setLength (20);
    rectangle.setWidth (50);
    
    cout << "Rectangle length is: " << rectangle.getLength() << endl;
    cout << "Rectangle width is: " << rectangle.getWidth() << endl;
    cout << "Rectangle perimeter is: " << rectangle.perimeter() << endl;
    return 0;
}