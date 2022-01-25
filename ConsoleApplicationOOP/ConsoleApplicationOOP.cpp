// ConsoleApplicationOOP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include "GoodBasic.h"
#include "Freezer.h"
#include "Software.h"
#include "WorkClass.h"
#include "Chipsi.h"

class newClass
{
private:
    int one;
    int two;
    int three;
public:
    void setOne(int number)
    {
        one = number;
    }

    void setTwo(int number)
    {
        two = number;
    }

    void setThree(int number)
    {
        three = number;
    }

    int getOne()
    {
        return one;
    }

    int getTwo()
    {
        return two;
    }

    int getThree()
    {
        return three;
    }

    std::string toString()
    {
        std::string str = "000";
        str[0] = one + '0';
        str[1] = two + '0';
        str[2] = three + '0';
        return str;
    }
};

int main()
{
    newClass a1;
    a1.setOne(6);
    a1.setTwo(6);
    a1.setThree(6);

    std::string b1;
    b1 = a1.toString();
    std::cout << b1;

    //setlocale(LC_ALL, "Russian");
    //WorkClass workClass;
    //workClass.startWork();//Теперь создание всех классов производится в классе WorkClass


   //std::cout << "Hello Привет World!\n";
   // Freezer freezer01(1, 234, "Freezer Samsung", "Good thing...", 2, 34);
   // Freezer* pointerFreezer01 = &freezer01;

   // freezer01.printAllInfo();
    //pointerFreezer01->printAllInfo();
   // freezer01.toString();
   // Software software01(1, 234, "OS Windows", "Some thing...", 2, 3);
   // software01.toString();
    //int array01[5] = {1,2,3,4,5};
    //int* pointerToArray = array01;
   // cout << pointerToArray[2];
   // freezer01.printString(freezer01.getName());
    //freezer01.goodsPublicFunction();
    //Универсальный указатель

    /*GoodBasic* universalPointer01 = new GoodBasic;
    GoodBasic* universalPointer02 = new Freezer(1, 234, "Freezer Samsung", "Good thing...", 2, 34);
    GoodBasic* universalPointer03 = new Software(1, 234, "Soft FOR Samsung", "Very Good thing...", 2, 34);

    static_cast<GoodBasic*>(universalPointer01)->toString();
    static_cast<GoodBasic*>(universalPointer02)->toString();
    static_cast<GoodBasic*>(universalPointer03)->toString();*/
}
