
#include <iostream>
#include <cstdlib> 

int main()
{
    //Task1

    /*
    int num = 0;

    std::cout << "Print Number";
    std::cin >> num;

    for (int i = 1; i <= num; ++i)
    {
        if (num % i == 0)
        {
            std::cout << "Deletca " << num << "na " << i << "";
        }
    }
    */

    //Task2

    /*
    int num = 0;
    int countTries = 0;

    std::cout << "Print Number 0-1000 ";
    std::cin >> num;

    for(;;)
    {  
        int randomNum = rand() % 1000 + 1;
        if (num == randomNum)
        {
            std::cout << "Computer Win it is number " << randomNum;
            std::cout << "Tries " << countTries;
            break;
        }
        else
        {
            std::cout << "Computer thing it is " << randomNum;
            ++countTries;
        }

    }
    */

    //Task3

    /*
    int spand = 0;
    int stipend = 0;
    int months = 10;
    double prosent = 0.03;  
    double needMonue = 0.0;

    std::cout << "Print a stipendi ";
    std::cin >> stipend;

    std::cout << "Print how manyyou spand ";
    std::cin >> spand;

    for (int month = 1; month <= months; ++month) 
    {
        if (spand > stipend) 
        {
            needMonue += (spand - stipend);
        }
        spand += spand * prosent;  
    }

    std::cout << "I need this monye " << needMonue ;
    */

}


