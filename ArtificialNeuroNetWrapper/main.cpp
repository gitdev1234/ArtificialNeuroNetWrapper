#include <iostream>
#include "ArtificialNeuroNetWrapper.h"
#include "DataBuffer.h"

using namespace std;

int main() {
    ArtificialNeuroNetWrapper ANNWrapper;
    // train
    ANNWrapper.trainArtificialNeuroNets();

    // calc forecast
    DataBuffer OptimizedForecast = ANNWrapper.calculateOutput();
    cout << "Optimized Output : " << endl << OptimizedForecast << endl;
    return 0;
}
