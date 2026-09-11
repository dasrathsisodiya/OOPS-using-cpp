#include <iostream>
#include <cmath>
using namespace std;

class Point
{
private:
    float x;
    float y;

public:
    
    Point()
    {
        x = 0;
        y = 0;
    }

    Point(float value)
    {
        x = value;
        y = value;
    }

    Point(float a, float b)
    {
        x = a;
        y = b;
    }

    void show()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
    float distanceFromOrigin()
    {
        return sqrt(x * x + y * y);
    }

    float distanceBetween(Point p)
    {
        return sqrt((x - p.x) * (x - p.x) +
                    (y - p.y) * (y - p.y));
    }
};

int main()
{
    
    Point p1;
    Point p2(3);
    Point p3(6, 8);
    p1.show();

    cout << "Point 2: ";
    p2.show();

    cout << "Point 3: ";
    p3.show();
    cout << endl;
    cout << "Distance of Point 1 from origin: "
         << p1.distanceFromOrigin() << endl;

    cout << "Distance of Point 2 from origin: "
         << p2.distanceFromOrigin() << endl;

    cout << "Distance of Point 3 from origin: "
         << p3.distanceFromOrigin() << endl;

    cout << endl;
    cout << "Distance between Point 2 and Point 3: "
         << p2.distanceBetween(p3) << endl;

    return 0;
}
