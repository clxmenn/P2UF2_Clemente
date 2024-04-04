#include "LotteryLibrary.h"
#include <ctime>   
#include <vector>
using namespace std;

namespace LotteryLibrary
{
    Lottery::Lottery()
    {
        srand(time(nullptr));
    }

    vector<int> Lottery::generateNumbers(int count)
    {
        if (count > 9) {
            count = 9;
        }
        vector<int> numbers(count);

        for (int i = 0; i < count; ++i)
        {
            int randomNumber;
            bool duplicated;
            do {
                randomNumber = rand() % 9 + 1;

                duplicated = false;
                for (int j = 0; j < i; ++j) {
                    if (numbers[j] == randomNumber) {
                        duplicated = true;
                        break;
                    }
                }
            } while (duplicated); 

            numbers[i] = randomNumber;
        }
        return numbers;
    }
}
