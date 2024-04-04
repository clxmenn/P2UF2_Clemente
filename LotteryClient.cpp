#include <iostream>
#include "LotteryLibrary.h"

int main()
{
    LotteryLibrary::Lottery lottery;

    std::vector<int> numbers = lottery.generateNumbers(9);

    std::cout << "Numeros de loteria generados: ";
    for (int num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
