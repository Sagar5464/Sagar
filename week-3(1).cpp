#include<iostream>
using namespace std;

class number {
    public:
        int value;

        number(int v = 0) {
            value = v;
        }

        // Overloading unary operator ++
        void operator++() {
            ++value;
        }

        // ? Overloading binary operator +
        number operator+(number obj) {
            number temp;
            temp.value = this->value + obj.value;
            return temp;
        }

        void display() {
            cout << "Value : " << value << endl;
        }
};

int main() {
    number n1(5), n2(10), n3;
    cout << "Before Unary Operation: " << endl;
    n1.display();

    ++n1; // Unary operation
    cout << "After Unary Operation (++n1): " << endl;
    n1.display();

    n3 = n1 + n2; // Binary operation
    cout << "After Binary Operation (n1 + n2): " << endl;
    n3.display();

    return 0;
}
