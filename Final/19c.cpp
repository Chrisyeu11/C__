//write c+ program that illustrates the use virtual functions of pointer and reference in inheritance
#include <iostream>

// Base class
class Animal {
public:
    virtual void makeSound() const {
        std::cout << "The animal makes a sound\n";
    }
};

// Derived class
class Dog : public Animal {
public:
    void makeSound() const override {
        std::cout << "The dog barks\n";
    }
};

// Derived class
class Cat : public Animal {
public:
    void makeSound() const override {
        std::cout << "The cat meows\n";
    }
};

void animalSoundByPointer(Animal* animal) {
    animal->makeSound();
}

void animalSoundByReference(Animal& animal) {
    animal.makeSound();
}

int main() {
    Dog dog;
    Cat cat;

    // Polymorphism through pointer
    Animal* animalPtr = &dog;
    animalSoundByPointer(animalPtr);

    animalPtr = &cat;
    animalSoundByPointer(animalPtr);

    // Polymorphism through reference
    Animal& animalRef = dog;
    animalSoundByReference(animalRef);

    Animal& animalRef2 = cat;
    animalSoundByReference(animalRef2);

    return 0;
}
