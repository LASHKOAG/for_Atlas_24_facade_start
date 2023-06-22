#include <iostream>
#include "car.h"
#include "cleaning.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    Car* testCar = new Car();

//    testCar->set_isClean(true);
    testCar->print_checkList();

    testCar->my_clean();
    testCar->my_fix();
    testCar->my_sold();

    testCar->print_checkList();

    if (testCar != NULL)
    {
        delete testCar;
    }

    return 0;
}
