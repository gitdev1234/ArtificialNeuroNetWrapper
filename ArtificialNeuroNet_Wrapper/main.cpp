#include <iostream>
#include "ANNWrapper.h"
#include "DataBuffer.h"

using namespace std;

int main() {
    ANNWrapper ANNWrap;
    // train
    ANNWrap.trainArtificialNeuroNets();

    // calc forecast
    DataBuffer OptimizedForecast = ANNWrap.calculateOutput();
    cout << "Optimized Output : " << endl << OptimizedForecast << endl;
    return 0;
}
