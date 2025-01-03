//file adding-integers.cpp
//Addition program that displays the sum of the two numbers.
#include <iostream> //allows program to perform input and output.

//function main begings with program execution
int main()
{
    //variable declarations
    int num1;//first integer to add
    int num2;//second integer to add
    int sum;//sum of num1 and num2

    std::cout << "Enter first integer:\n";//prompt
    std::cin >> num1;//read first integer from user into num1

    std:: cout << "Enter second integer:\n";//prompt
    std :: cin >> num2; //read second integer from user into num2

    sum=num1+num2 ; //add the numbers,store result in sum
    
    std::cout << "Sum is: " << sum << std :: endl ; //display sum,end line

    return 0;//indicate that program ended succesfully
}//end function main
