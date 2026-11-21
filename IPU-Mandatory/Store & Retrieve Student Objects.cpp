#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
    string name;
    int age;
    string sex;
    float height, weight;

public:
    void readData() {
        cout << "Enter name: ";
        getline(cin >> ws, name);

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter sex: ";
        cin >> sex;

        cout << "Enter height (in cm): ";
        cin >> height;

        cout << "Enter weight (in kg): ";
        cin >> weight;
    }

    void show() {
        cout << "\n----- Student Details -----\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Sex: " << sex << endl;
        cout << "Height: " << height << " cm" << endl;
        cout << "Weight: " << weight << " kg" << endl;
    }
};

int main() {
    Student s1, s2;

    ofstream fout("student.dat", ios::binary);

    cout << "Enter Student Details:\n";
    s1.readData();

    fout.write((char*)&s1, sizeof(s1));
    fout.close();

    ifstream fin("student.dat", ios::binary);

    fin.read((char*)&s2, sizeof(s2));
    fin.close();

    cout << "\nRetrieved Student Details:";
    s2.show();

    return 0;
}
