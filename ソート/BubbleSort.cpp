#include "BubbleSort.h"

void BubbleSort::Exec(int* array, int size)
{
	int exchange;
	int i;
	int tmp;
	do {
		exchange = 0;

		for (i = 0; i < size - 1; i++)
		{
			{
				if (array[i] > array[i + 1]) {
					tmp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = tmp;

					exchange++;
				}
			}
		}

	}while (exchange > 0);

}
