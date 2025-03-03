#include "MyClass.h"

#include <iostream>

MyClass::MyClass()
{
    std::cout << "MyClass()" << std::endl;
}

MyClass::MyClass(int number)
{
    std::cout << "MyClass(int number)" << std::endl;

    this->number_ = number;
}

MyClass::~MyClass()
{
    std::cout << "~MyClass()" << std::endl;
}

void MyClass::Increment(int a)
{
    number_ += a;
}

void MyClass::Print()
{
    std::cout << number_ << std::endl;
}