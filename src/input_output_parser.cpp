//
// Created by bartolomeo on 07.02.23.
//

#include "input_output_parser.h"

IOParser::IOParser() {
    this->lastCityId = -1;
    this->inputFilename = "";
    this->outputFilename = "";
}

void IOParser::setInputFileName(const std::string &filename_) {
    if (inputFilename.empty()) {
        this->inputFilename = filename_;
    }
}

void IOParser::setOutputFileName(const std::string &filename_) {
    if (outputFilename.empty()) {
        this->outputFilename = filename_;
    }
}

int IOParser::setCentral(const std::string& central_) {
    if (cityIdx.find(central_) != cityIdx.end()) {
        this->central = central_;
        return cityIdx[central_];
    } else {
        return -1;
    }
}

std::string IOParser::getCityName(int cityId) {
    return cityMap[cityId];
}

int IOParser::getCityCount() const {
    return lastCityId + 1;
}

std::vector<std::vector<int>> IOParser::parse() {
    std::string cityA, cityB, distance;

    std::ifstream infile(this->inputFilename);
    while (infile >> cityA >> cityB >> distance) {
        if (!cityA.empty() && !cityB.empty() && !distance.empty()) {
            data.push_back(std::vector<int> {
                    getCityId(cityA),
                    getCityId(cityB),
                    stoi(distance)
            });
        }
    }
    infile.close();
    return data;
}


void IOParser::writeOutput(int *previous, int *distance) {
    std::string output = generateOutput(previous, distance);
    if (outputFilename.empty()) {
        // print in console if no output file specified
        std::cout << output;
    } else {
        std::ofstream outfile(this->outputFilename);
        outfile << output;
        outfile.close();
    }
}

int IOParser::getCityId(const std::string& city) {
    if (cityIdx.find(city) != cityIdx.end()) {
        return cityIdx[city];
    } else {
        cityIdx[city] = ++lastCityId;
        cityMap[lastCityId] = city;
        return lastCityId;
    }
}

std::string IOParser::generateOutput(int *previous, int *distance) {
    std::string output = "";
    int central_id = cityIdx[central];
    for (int i = 0; i < getCityCount(); ++i) {
        if (i == central_id) continue;
        output += generateOutputLine(i, previous, distance);
    }
    return output;
}

std::string IOParser::generateOutputLine(int cityId, int *previous, int *distance) {
    std::string output = ": ";
    output = output + std::to_string(distance[cityId]) + "\n";
    int i = cityId;
    while (i != cityIdx[central]) {
        output = " -> " + getCityName(i) + output;
        i = previous[i];
    }
    return central + output;
}
