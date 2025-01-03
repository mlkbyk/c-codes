//D:\c++ code\printing_single_character.cpp
//How to print single character in C++

#include<iostream>//allows program to output data to screen

//function main begings with program execution
int main(){

     std::cout<<'A'<<"\n";//print an uppercase A
     std::cout<<static_cast<int>('A')<<"\n";//This line print uppercase A's ASCII code.
    
    return 0;//indicate that program ended successfully
}//end function main
