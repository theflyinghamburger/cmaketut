#include <iostream>

#include "math1/add1.h" //Subfolder is added to help figure out library
#include "math1/div1.h"
#include "print1/printVal.h"

int main()
{
    float first_no, second_no, result, result_div;

    std::cout<<"Enter first number\n";
    std::cin>> first_no;
    std::cout<<"Enter second number\n";
    std::cin >> second_no;

    result = add1(first_no, second_no);
    result_div = div1(first_no, second_no);

    printVal(result, result_div);

    return 1;
}
