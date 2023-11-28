//write a c++ program that is written as follows - producing the same output but with the size of source code reduced because of reusability of member functions of grandparent for object of parent and reusability of member functions of parent for object of child



#include <iostream>

class GrandParent {
public:
    void sayHello() {
        std::cout << "Hello from GrandParent!" << std::endl;
    }
};

class Parent : public GrandParent {
public:
    void sayHelloFromParent() {
        sayHello();
        std::cout << "Hello from Parent!" << std::endl;
    }
};

class Child : public Parent {
public:
    void sayHelloFromChild() {
        sayHelloFromParent();
        std::cout << "Hello from Child!" << std::endl;
    }
};

int main() {
    Child child;
    child.sayHelloFromChild();

    return 0;
}
