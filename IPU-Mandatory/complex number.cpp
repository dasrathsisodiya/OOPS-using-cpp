#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    
    Complex()
    {
        real = 0;
        imag = 0;
    }

    
    Complex(float r)
    {
        real = r;
        imag = 0;
    }

    
    Complex(float r, float i)
    {
        real = r;
        imag = i;
    }

    
    Complex add(Complex c)
    {
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;

        return result;
    }

    
    void show()
    {
        cout << "(" << real << " + " << imag << "i)" << endl;
    }
};

int main()
{
    
    Complex c1;

    
    Complex c2(5);

    
    Complex c3(3, 4);

    cout << "Complex Number 1: ";
    c1.show();

    cout << "Complex Number 2: ";
    c2.show();

    cout << "Complex Number 3: ";
    c3.show();

    Complex c4 = c2.add(c3);

    cout << "Addition of Complex Number 2 and 3: ";
    c4.show();

    return 0;
}
