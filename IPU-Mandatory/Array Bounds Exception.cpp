#include <iostream>
#include <stdexcept>
using namespace std;

class SafeArray {
    int arr[10];

public:
    void set(int index, int value) {
        if (index < 0 || index >= 10) {
            throw out_of_range("Invalid array index!");
        }

        arr[index] = value;
    }

    int get(int index) {
        if (index < 0 || index >= 10) {
            throw out_of_range("Invalid array index!");
        }

        return arr[index];
    }
};

int main() {
    SafeArray a;

    try {
        a.set(2, 50);
        a.set(5, 100);

        cout << "Value at index 2: " << a.get(2) << endl;
        cout << "Value at index 5: " << a.get(5) << endl;

        cout << "Value at index 12: " << a.get(12) << endl;
    }
    catch (out_of_range &e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
