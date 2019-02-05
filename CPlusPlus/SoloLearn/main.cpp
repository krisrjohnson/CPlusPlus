#include <iostream>

using namespace std;

void printSomething(); // declare the fn so can be used in main()

int main()
{
    // single line comment
    /* blockline
    comment */
    cout << "Hello world!" << endl;
    int a,b,num; // valid declaration
    int *pnum = &num; // pointer declaration
    cout << "Please input an int\n";
    cin >> num;
    cout << "the memory address is " << endl << pnum << endl;
    cout << "the num you input based on that address is " << *pnum << endl;
    cout << "size of double: " << sizeof(double) << endl;
    printSomething();
    return 0;
}

void printSomething() {
    cout << "Hi there!" << endl;
}

/* cout, cin, int, float, double, long, signed, unsigned
    do {} while();
    while() {stmts; i++;};
    switch(expression){
    case1: stmts; break;
    case2: stmts;
    case3; stmts; break // if satisfies case2, will test against case3 as well
    default: stmts;}
    for (int i = 0; i<10; i++) {stmts}
    &&, ||, !=, ==, !
    int *ip; // integer pointer declaration

*/
