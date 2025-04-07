#include <iostream>

using namespace std;

int main()

{

int stockPrices[] = { 25, 65, 23, 45, 66, 77, 88, 43, 335, 65, 656 };

int sum = 0;

for (int i = 0; i < (sizeof(stockPrices) / sizeof(*stockPrices)); i++)

{

sum = sum + stockPrices[i];

}

float avg= sum / (sizeof(stockPrices) / sizeof(*stockPrices));

cout<< "The average value for the stock prices are " << avg;

getchar();

}
