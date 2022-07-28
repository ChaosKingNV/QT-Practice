#include <iostream>

using namespace std;

class Rectangle
{
    public:
        int width;
        int length;
        int area = length;

};


int main()
{
    cout << "Hello World!" << endl;

    Rectangle r1;
    r1.length = 10;
    r1.width = 10;

    cout << r1.area;

    return 0;
}
