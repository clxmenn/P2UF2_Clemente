#pragma once
using namespace std;
#include <vector>
namespace LotteryLibrary
{
	class Lottery
	{
	public:
		Lottery();

		static vector<int> generateNumbers(int count);

	};
}