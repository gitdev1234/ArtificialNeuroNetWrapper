#include <iostream>
#include "ArtificialNeuronetWrapper.h"
#include "DataBuffer.h"

using namespace std;

int main() {
    ArtificialNeuroNetWrapper ANNWrapper;
    ANNWrapper.trainArtificialNeuroNets();
    DataBuffer OptimizedForecast = ANNWrapper.calculateOutput();
    cout << "Optimized Output : " << endl << OptimizedForecast << endl;
    return 0;
}
