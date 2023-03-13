#include <iostream>
#include "List.h"
#include "Matrix.h"


using namespace std;

/*int getSum(int count, int first, ...) {
    int sum = 0;
    int* p = &first;
    while (count--) {
        sum += *p;
        p++;
        p++;
    }
    return sum;
}*/

double getSum(double x) {
    return x;
}

template<class... args>
double getSum(double x, args... param) {
    return x + getSum(param...);
}


void print(){}
template <class First, class...Other>
void print(const First& first, const Other&... other) {
    cout << first;
    print(other...);
}
template<class...Args>
void println(const Args&...args) {
    print(args...);
    cout << endl;
}

struct Point {
    int x;
    int y;

    friend ostream& operator<<(ostream& output, const Point& p) {
        output << "(" << p.x << ", " << p.y << ")";
        return output;
    }
};

int main()
{
    /*List<int> intList;
    intList.add(5);
    intList.add(8);
    intList.add(2);
    intList.add(3);
    cout << "IntList min: " << intList.getMin() << endl;
    cout << "IntList max: " << intList.getMax() << endl;

    List<string> stringList;
    stringList.add("five");
    stringList.add("eight");
    stringList.add("two");
    stringList.add("three");
    cout << "StringList min: " << stringList.getMin() << endl;
    cout << "StringList max: " << stringList.getMax() << endl;

    List<const char*> txtList;
    txtList.add("five");
    txtList.add("eight");
    txtList.add("two");
    txtList.add("three");
    cout << "TxtList min: " << txtList.getMin() << endl;
    cout << "TxtList max: " << txtList.getMax() << endl;*/

    /*const int height = 2;
    const int width = 3;

    Matrix<int, height, width> intMatrix;
    intMatrix(0, 0) = 5;
    intMatrix(0, 1) = 1;
    intMatrix(0, 2) = 9;
    intMatrix(1, 0) = 15;
    intMatrix(1, 1) = 11;
    intMatrix(1, 2) = 19;

    cout << "intMatrix min: " << intMatrix.getMin() << endl;
    cout << "intMatrix max: " << intMatrix.getMax() << endl;

    Matrix<string, height, width> stringMatrix;
    stringMatrix(0, 0) = "five";
    stringMatrix(0, 1) = "one";
    stringMatrix(0, 2) = "nine";
    stringMatrix(1, 0) = "fifteen";
    stringMatrix(1, 1) = "eleven";
    stringMatrix(1, 2) = "ninteen";

    cout << "stringMatrix min: " << stringMatrix.getMin() << endl;
    cout << "stringMatrix max: " << stringMatrix.getMax() << endl;

    Matrix<const char*, height, width> txtMatrix;
    txtMatrix(0, 0) = "five";
    txtMatrix(0, 1) = "one";
    txtMatrix(0, 2) = "nine";
    txtMatrix(1, 0) = "fifteen";
    txtMatrix(1, 1) = "eleven";
    txtMatrix(1, 2) = "ninteen";

    cout << "txtMatrix min: " << txtMatrix.getMin() << endl;
    cout << "txtMatrix max: " << txtMatrix.getMax() << endl;*/

    /*double sum = getSum(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    cout << sum;*/

    println("Hello world!");
    println("PI = ", 3.14, '\n', 2, " * ", 2, " = ", 2 * 2);

    Point point{ 12, 2 };
    println("Point: ", point);

}

