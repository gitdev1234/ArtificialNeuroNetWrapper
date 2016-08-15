#include <iostream>
#include "ANNWrapper.h"
#include "DataBuffer.h"

using namespace std;

int main2() {
    // create and init singleton-DBInterface-object
    DBInterface& dbi = DBInterface::getInstance();
    dbi.init();
    dbi.writeStatusOK(true);

    ANNWrapper ANNWrap(&dbi);
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
