
#include <iostream>

int main()
{
    // single-line comment

    /*
     * multi-line comment
     * */

    /* Section 0: console input/output */
    std::cout << "What day is it today? ";
    std::string dayOfWeek;
    std::cin >> dayOfWeek;
    std::cout << "Hello, World! It's " << dayOfWeek << "!" << std::endl;

    /* Section 1: primitive data types and operators*/
    int i = 7 / 2;  // i=3 (integer division)
    long l;  // data type for big integers
    double d = 0.0; // floating point data type
    char c = 'a';
    bool b1 = true, b2 = false, b3 = true;
    bool b4 = (b1 || b2) && b3; // boolean operators (||: or, &&: and)
    // https://en.cppreference.com/w/cpp/language/operator_precedence

    /* Section n: array and control flow */
    int array[3] = {1, 2, 3};

    /* Section n: array and control flow */

    /* Section n: function */

    /* Section n: object oriented programming */

    /* Section n: string manipulation */
    std::string sThree = std::to_string(3);
    int iThree = std::stoi(sThree);
    std::string name = "Leonhard";
    name.append(" Euler"); // "Leonhard Euler"
    std::string intro = "I'm" + name;  // "I'm Leonhard Euler"

    /* Section n: file input/output */
    return 0;
}