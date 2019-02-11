#include <iostream>
#include <string>
using namespace std;

void printSomething(string); // declare the fn so can be used in main()
void printSomething(int);
int fact(int);
void myFunc(int*);

int main()
{
    // single line comment
    /* blockline
    comment */
    cout << "Hello world!" << endl;
    int x,a,b,num; // valid declaration
    int *pnum = &num; // pointer declaration
    cout << "Please input an int\n";
    cin >> num;
    cout << "the memory address is " << endl << pnum << endl;
    cout << "the num you input based on that address is " << *pnum << endl;
    cout << "size of double: " << sizeof(double) << endl;
    printSomething("Hello!");
    printSomething(fact(5));

    // testing passing memory addresses to functions
    x = num;
    cout << "your number was: ";
    printSomething(x);
    myFunc(&x);
    cout << "your new number is: ";
    printSomething(x);
    return 0;
}
void myFunc(int *x) {
    *x = 100;
}

void printSomething(string straw="Hi there!") {
    cout << straw << endl;
}
void printSomething(int straw=4){
    cout << straw << endl;
}

int fact(int n) {
    if (n==1) {return n;}
    else {
        return n * fact(n-1);  // recursion!
    }
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
