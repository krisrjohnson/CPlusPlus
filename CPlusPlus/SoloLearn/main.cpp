#include <iostream>

using namespace std;

int main()
{
    // single line comment
    /* blockline
    comment */
    cout << "Hello world!" << endl;
    int a,b,num; // valid declaration
    cout << "Please input an int\n";
    cin >> num;
    a = num; b = 20;
    int sum = a+b;
    cout << "Your int plus 20 is:" << endl;
    cout << sum << endl;
    return 0;
}
