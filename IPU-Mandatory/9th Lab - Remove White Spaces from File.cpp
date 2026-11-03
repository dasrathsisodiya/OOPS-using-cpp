#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main()
{
    ifstream in;
    ofstream out;

    in.open("input.txt");
    out.open("output.txt");

    if (!in || !out)
    {
        cout << "Could not open input/output file(s)";
        return -1;
    }

    char ch;

    while (in.get(ch))
    {
        if (!isspace(static_cast<unsigned char>(ch)))
        {
            out.put(ch);
        }
    }

    in.close();
    out.close();

    cout << "File processed successfully." << endl;

    return 0;
}
