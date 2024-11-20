#include "animal.h"
#include "dog.h"
#include <iostream>
#include <clocale>

using namespace std;

int main()
{

    setlocale(LC_ALL, "fi-FI");
    Animal objectAnimal1;
    objectAnimal1.callOut();
    Dog objectDog1;
    objectDog1.callOut();
    return 0;
}
