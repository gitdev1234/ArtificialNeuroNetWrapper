/**
 * ArtificialNeuroNetWrapper.cpp
 * Purpose: implements class ArtificialNeuroNetWrapper
 *
 * @author Wall.Of.Death
 * @version 1.0 20160704
 */

#include "include/ArtificialNeuronetWrapper.h"

/**
 * ArtificialNeuroNetWrapper::ArtificialNeuroNetWrapper
 * @brief constructor of ann wrapper class, initializes LogWriter
 */
ArtificialNeuroNetWrapper::ArtificialNeuroNetWrapper() {
    // create LogWriter-object
    log = LogWriter("ArtificialNeuroNetWrapper", PATH_OF_LOGFILE);

    log << SLevel(INFO) << "Initialized ArtificialNeuroNetWrapper" << endl;
}

/**
 * ArtificialNeuroNetWrapper::trainArtificialNeuroNets
 * @brief trains all artificial neuro nets inside this class
 */
void ArtificialNeuroNetWrapper::trainArtificialNeuroNets() {
    log << SLevel(INFO) << "Successfully trained Artificial Neuro Net for Temperature 2m" << endl;
}

/**
 * ArtificialNeuroNetWrapper::calculateOutput
 * @brief calculates the output of all artificial neuron nets inside this class and outputs them
 * @return returns DataBuffer which contains all outputs of all neuro nets inside this class
 */
DataBuffer ArtificialNeuroNetWrapper::calculateOutput() {
    log << SLevel(INFO) << "Successfully calculated ouptut of Artificial Neuro Net for Temperature 2m" << endl;
    DataBuffer result;
    result.data["ANN_Lufttemperatur2M"] = (rand() % 20);
    result.data["ANN_Luftdruck2M"] = (rand() % 400) + 800;
    return result;
}
