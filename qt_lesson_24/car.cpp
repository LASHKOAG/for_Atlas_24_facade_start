#include "car.h"

Car::Car()
{

}


void Car::set_isClean(bool isClean)
{
    m_isClean = isClean;
}

bool Car::get_isClean()
{
    return m_isClean;
}


void Car::set_isFixed(bool isFixed)
{
    m_isFixed = isFixed;
}

bool Car::get_isFixed()
{
    return m_isFixed;
}

void Car::my_clean()
{
    Cleaning* clean = new Cleaning();

    bool tmp_flag = clean->cleanDone();

    if(clean != NULL){
        delete clean;
    }

    set_isClean(tmp_flag);
}

void Car::my_fix()
{
    Fix* fix = new Fix();

    bool tmp_flag = fix->fixProcess();

    if(fix != NULL){
        delete fix;
    }
    set_isFixed(tmp_flag);
}

void Car::my_sold()
{
    Seller* seller = new Seller();

    bool tmp_flag = seller->sold_process();

    if(seller != NULL){
        delete seller;
    }

    m_isSold = tmp_flag;
}

void Car::print_checkList()
{
    std::cout << "clean: " << m_isClean << std::endl;
    std::cout << "fix: " << m_isFixed << std::endl;
    std::cout << "sold: " << m_isSold << std::endl;
}


