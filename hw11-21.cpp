#include <iostream>
using namespace std;

int main() {
    int stockPrices[] = { 25, 65, 23, 45, 66, 77, 88, 43, 335, 65, 656 };
    int size = sizeof(stockPrices) / sizeof(stockPrices[0]);

    int sum = 0;

    for (int i = 0; i < size; ++i) {
        sum += stockPrices[i];
    }

    float average = static_cast<float>(sum) / size;

    cout << "The average value for the stock prices is " << average << endl;

    return 0;
}
