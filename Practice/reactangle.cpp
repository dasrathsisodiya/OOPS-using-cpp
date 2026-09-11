#include <iostream>
using namespace std;

class Rect
{
private:
    float length;
    float breadth;

public:
    
    Rect()
    {
        length = 0;
        breadth = 0;
    }

    
    Rect(float l, float b)
    {
        length = l;
        breadth = b;
    }

    
    void setLength(float l)
    {
        length = l;
    }

    
    void setBreadth(float b)
    {
        breadth = b;
    }

    
    float area()
    {
        return length * breadth;
    }

    
    float perimeter()
    {
        return 2 * (length + breadth);
    }

    
    void show()
    {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

int main()
{
    
    Rect r1;

    
    r1.setLength(10);
    r1.setBreadth(5);

    
    Rect r2(8, 4);

    
    cout << "Rectangle 1:" << endl;
    r1.show();

    cout << endl;

    
    cout << "Rectangle 2:" << endl;
    r2.show();

    return 0;
}
