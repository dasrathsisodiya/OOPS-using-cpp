#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Compare {
    T a, b;

public:
    Compare(T i, T j) : a(i), b(j) {}

    ~Compare() {
        cout << "Destructor called." << endl;
    }

    T bigger() const {
        return (a > b ? a : b);
    }
};

int main() {
    Compare<int> c1(10, 8);
    Compare<string> cs("Hello", "World");

    cout << c1.bigger() << endl;
    cout << cs.bigger() << endl;

    return 0;
}
