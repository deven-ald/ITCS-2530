#include <iostream>



int main() {

	int* board[4];

	for (int i = 0; i < 4; i++)
	{
		board[i] = new int[6];
	}

	int* pntr;

	for (int i = 0; i < 4; i++)
	{
		pntr = board[i];
		for (int j = 0; j < 6; j++)
		{
			pntr--;
			*pntr = 7*rand();
			std::cout << pntr[j] << std::endl;
		}
	}

	return 0;
}