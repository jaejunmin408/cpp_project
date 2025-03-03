#include <iostream>

#include "MyClass.h"

int main(int, char**){
    MyClass my_class1;
    MyClass my_class2(300);

    my_class1.Print();
    my_class2.Print();

    my_class1.Increment(1);
    my_class1.Print();

    return 0;
}
