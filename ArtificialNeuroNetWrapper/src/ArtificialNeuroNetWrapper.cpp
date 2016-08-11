/**
 * ArtificialNeuroNetWrapper.cpp
 * Purpose: implements class ArtificialNeuroNetWrapper
 *
 * @author Wall.Of.Death
 * @version 1.0 20160811
 */

#include "ArtificialNeuroNetWrapper.h"

/* --- constructor / destructor --- */

/**
 * ArtificialNeuroNetWrapper::ArtificialNeuroNetWrapper
 * @brief constructor of ANN-wrapper class, initializes LogWriter
 */
ArtificialNeuroNetWrapper::ArtificialNeuroNetWrapper() {
    // create LogWriter-object
    log = LogWriter("ArtificialNeuroNetWrapper", PATH_OF_LOGFILE);

    log << SLevel(INFO) << "Initialized ArtificialNeuroNetWrapper" << endl;

    AirTemperature2MForecast.init("AirTemperature2M");
          Humidity2MForecast.init("Humidity2M");
}

/* --- train neuro nets --- */

/**
 * ArtificialNeuroNetWrapper::trainArtificialNeuroNets
 * @brief trains all artificial neuro nets inside this class
 */
void ArtificialNeuroNetWrapper::trainArtificialNeuroNets() {
    log << SLevel(INFO) << "Successfully trained Artificial Neuro Net for Temperature 2m" << endl;

    // --- TODO -- dummy code ---
    vector< vector<double> > inputValues;
    vector<double> expectedOutputValues;
    AirTemperature2MForecast.train(inputValues,expectedOutputValues);
          Humidity2MForecast.train(inputValues,expectedOutputValues);
    // --- TODO -- dummy code ---
}

/* --- calculate forecast outputs --- */

/**
 * ArtificialNeuroNetWrapper::calculateOutput
 * @brief calculates the output of all artificial neuron nets inside this class and outputs them
 * @return returns DataBuffer which contains all outputs of all neuro nets inside this class
 */
DataBuffer ArtificialNeuroNetWrapper::calculateOutput() {
    log << SLevel(INFO) << "Successfully calculated ouptut of Artificial Neuro Net for Temperature 2m" << endl;
    DataBuffer result;

    // --- TODO -- dummy code ---
    vector<double> inputValues;
    result.data["AirTemperature2MForecast"] = AirTemperature2MForecast.forward(inputValues)[0];
    result.data[      "Humidity2MForecast"] =       Humidity2MForecast.forward(inputValues)[0];
    // --- TODO -- dummy code ---

    return result;
}
