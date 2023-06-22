#ifndef CAR_H
#define CAR_H

#include "cleaning.h"
#include "fix.h"
#include "seller.h"
class Car
{
public:
    Car();


    void set_isClean(bool isClean);
    bool get_isClean();

    void set_isFixed(bool isFixed);
    bool get_isFixed();


    void my_clean();
    void my_fix();
    void my_sold();

    void print_checkList();

private:
    bool m_isClean{false};
    bool m_isFixed{false};
    bool m_isCheckedLaw{false};
    bool m_isSold{false};
};

#endif // CAR_H
