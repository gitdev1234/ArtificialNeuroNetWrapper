#include <iostream>
#include "ANNWrapper.h"
#include "DataBuffer.h"

using namespace std;

int main() {
    ANNWrapper ANNWrap;
    // train
    ANNWrap.trainArtificialNeuroNets();

    // --- TODO -- dummy code ---
    srand(time(NULL));
    // --- TODO -- dummy code ---

    // calc forecast
    DataBuffer OptimizedForecast = ANNWrap.calculateOutput();
    cout << "Optimized Output : " << endl << OptimizedForecast << endl;
    return 0;
}
