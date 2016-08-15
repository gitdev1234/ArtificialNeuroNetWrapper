#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <float.h>
// ---
#include "ANNWrapper.h"
#include "DBInterface.h"
#include "Config.h"


// --- Tests for ANNWrapper

TEST_CASE("ANNWrapper works") {
    // create and init singleton-DBInterface-object
    DBInterface& dbi = DBInterface::getInstance();
    dbi.init();
    dbi.writeStatusOK(true);

    // --- TODO -- dummy code ---
    // randomize
    srand(time(NULL));
    // --- TODO -- dummy code ---

    SECTION("calculateOutput works") {
        ANNWrapper annWrapper(&dbi);

        DataBuffer forecast = annWrapper.calculateOutput();
        REQUIRE(forecast.data.size() > 0);
        REQUIRE(forecast.data["ANNTemperature"] > -2000);
        REQUIRE(forecast.data["ANNTemperature"] <  2000);
        REQUIRE(forecast.data["ANNAirPressure"] > -2000);
        REQUIRE(forecast.data["ANNAirPressure"] <  2000);
        REQUIRE(dbi.readStatusOK());
    }

    SECTION("trainArtificialNeuroNets works") {
        ANNWrapper annWrapper(&dbi);
        annWrapper.trainArtificialNeuroNets();
        REQUIRE(dbi.readStatusOK());
    }

}

// --- Tests for ArtificialNeuroNet

TEST_CASE("ArtificialNeuroNet forward works") {
    // create and init singleton-DBInterface-object
    DBInterface& dbi = DBInterface::getInstance();
    dbi.init();
    dbi.writeStatusOK(true);

    // --- TODO -- dummy code ---
    // randomize
    srand(time(NULL));
    // --- TODO -- dummy code ---

    ArtificialNeuroNet ann;
    ann.init("test ann",&dbi);

    SECTION("empty inputValues_ works") {
        REQUIRE(ann.forward({}) == 0);
        REQUIRE_FALSE(dbi.readStatusOK());
    }

    SECTION("inputValues containing max/min/0 values works") {
        vector<double> inputValues = {INFLUXDB_MAX,INFLUXDB_MIN,0};
        REQUIRE(ann.forward(inputValues) >= -2000);
        REQUIRE(ann.forward(inputValues) <=  2000);
        REQUIRE(dbi.readStatusOK());
    }

/*
    SECTION("inputValues containing max+1/min-1/0 values works") {
        REQUIRE(INFLUXDB_MAX==INFLUXDB_MAX+1);
        vector<double> inputValues = {INFLUXDB_MAX+1,INFLUXDB_MIN-1,0};
        REQUIRE(ann.forward(inputValues) == 0);
        REQUIRE_FALSE(dbi.readStatusOK());
    }*/

}

TEST_CASE("ArtificialNeuroNet train works") {
    // create and init singleton-DBInterface-object
    DBInterface& dbi = DBInterface::getInstance();
    dbi.init();
    dbi.writeStatusOK(true);

    // --- TODO -- dummy code ---
    // randomize
    srand(time(NULL));
    // --- TODO -- dummy code ---

    ArtificialNeuroNet ann;
    ann.init("test ann",&dbi);

    SECTION("empty inputValues_ works") {
        ann.train({},{});
        REQUIRE_FALSE(dbi.readStatusOK());
    }

    SECTION("input und expected output containing max/min/0 values works") {
        vector<vector<double>> inputValues;
        inputValues.push_back({INFLUXDB_MAX+1,INFLUXDB_MIN-1,0});
        vector<double> expectedOutPutValues = {INFLUXDB_MAX,INFLUXDB_MIN,0};
        ann.train(inputValues,expectedOutPutValues);
        REQUIRE(dbi.readStatusOK());
    }

/*
    SECTION("input und expected output values containing max+1/min-1/0 values works") {
        vector<vector<double>> inputValues;
        inputValues.push_back({INFLUXDB_MAX+1,INFLUXDB_MIN-1,0});
        inputValues.push_back({INFLUXDB_MAX+1,INFLUXDB_MIN-1,0});
        vector<double> expectedOutPutValues = {INFLUXDB_MAX+1,INFLUXDB_MIN-1,0};
        ann.train(inputValues,expectedOutPutValues);
        REQUIRE_FALSE(dbi.readStatusOK());
    }
*/
}
