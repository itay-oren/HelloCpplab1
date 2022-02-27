/* Created by Maor Frost 206370231 and Itay Oren 318648482
 * cpp lab - Meir Litman
 * exercise 2 task 2
 * main function from exercise
 */
#include "Vector.h"
#include <iostream>

using namespace std;
enum options {
    STOP, ASSIGN, IS_EQUAL, SCALAR_MULTIPLY, ADD, CLEAR, DELETE_LAST, AT, INSERT
};

int main() {
    cout << "Test 1 - Constructors" << endl << endl;
    Vector v1(4), v2(10), v3;
    cout << "v1 capacity: " << v1.getCapacity()
         << " v1 size: " << v1.getSize() << endl;
    cout << "v2 capacity: " << v2.getCapacity()
         << " v2 size: " << v2.getSize() << endl;
    cout << "v3 capacity: " << v3.getCapacity()
         << " v3 size: " << v3.getSize() << endl;

    cout << endl << "Test 2 - Assign" << endl << endl;
    for (int i = 1; i <= 4; i++) {
        v1.insert(i);
        v2.insert(i);
        v3.insert(i + 4);
    }

    cout << "v1 capacity: " << v1.getCapacity()
         << " v1 size: " << v1.getSize() << endl;
    cout << "v2 capacity: " << v2.getCapacity()
         << " v2 size: " << v2.getSize() << endl;
    cout << "v3 capacity: " << v3.getCapacity()
         << " v3 size: " << v3.getSize() << endl;

    int choice, val, index;
    cout << endl << "Test 3 - Operations" << endl << endl;
    cout << "enter your choice 0-8:\n";
    cin >> choice;
    while (choice) {
        switch (choice) {
            case ASSIGN:
                v3.assign(v1);
                break;
            case IS_EQUAL:
                if (v1.isEqual(v2))
                    cout << "v1==v2\n";
                else
                    cout << "v1!=v2\n";

                if (v1.isEqual(v3))
                    cout << "v1==v3\n";
                else
                    cout << "v1!=v3\n";
                break;
            case SCALAR_MULTIPLY:
                cout << "v1*v2=" << v1.scalmul(v2) << endl;
                break;
            case ADD:
                v3.assign(v1.strnewcat(v2));
                break;
            case CLEAR:
                v1.clear();
                break;
            case DELETE_LAST:
                v2.delLast();
                break;
            case AT:
                cout << "enter index:" << endl;
                cin >> index;
                cout << "enter value:" << endl;
                cin >> val;
                v3.at(index) = val;
                break;
            case INSERT:
                cout << "enter value:" << endl;
                cin >> val;
                v3.insert(val);
                break;
            default:
                cout << "ERROR";
        }
        v1.print();
        v2.print();
        v3.print();
        cout << endl << "enter your choice 0-8:\n";
        cin >> choice;
    }
    return 0;
}
/*
Test 1 - Constructors

v1 capacity: 4 v1 size: 0
v2 capacity: 16 v2 size: 0
v3 capacity: 2 v3 size: 0

Test 2 - Assign

v1 capacity: 4 v1 size: 4
v2 capacity: 16 v2 size: 4
v3 capacity: 4 v3 size: 4

Test 3 - Operations

enter your choice 0-8:
1
capacity: 4 size: 4 values: 1 2 3 4
capacity: 16 size: 4 values: 1 2 3 4
capacity: 4 size: 4 values: 1 2 3 4

enter your choice 0-8:
2
v1==v2
v1==v3
capacity: 4 size: 4 values: 1 2 3 4
capacity: 16 size: 4 values: 1 2 3 4
capacity: 4 size: 4 values: 1 2 3 4

enter your choice 0-8:
3
v1*v2=30
capacity: 4 size: 4 values: 1 2 3 4
capacity: 16 size: 4 values: 1 2 3 4
capacity: 4 size: 4 values: 1 2 3 4

enter your choice 0-8:
4
capacity: 4 size: 4 values: 1 2 3 4
capacity: 16 size: 4 values: 1 2 3 4
capacity: 32 size: 8 values: 1 2 3 4 1 2 3 4

enter your choice 0-8:
5
capacity: 4 size: 0 values:
capacity: 16 size: 4 values: 1 2 3 4
capacity: 32 size: 8 values: 1 2 3 4 1 2 3 4

enter your choice 0-8:
6
capacity: 4 size: 0 values:
capacity: 16 size: 3 values: 1 2 3
capacity: 32 size: 8 values: 1 2 3 4 1 2 3 4

enter your choice 0-8:
7
enter index:
2
enter value:
12
capacity: 4 size: 0 values:
capacity: 16 size: 3 values: 1 2 3
capacity: 32 size: 8 values: 1 2 12 4 1 2 3 4

enter your choice 0-8:
8
enter value:
13
capacity: 4 size: 0 values:
capacity: 16 size: 3 values: 1 2 3
capacity: 32 size: 9 values: 1 2 12 4 1 2 3 4 13

enter your choice 0-8:
0

Process finished with exit code 0
 */
