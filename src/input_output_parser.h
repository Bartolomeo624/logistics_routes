//
// Created by bartolomeo on 07.02.23.
//

#include <map>
#include <string>
#include <vector>
#include <fstream>
#include <iostream>

#ifndef SPEDITION_COMPANY_INPUT_PARSER_H
#define SPEDITION_COMPANY_INPUT_PARSER_H

class IOParser {
public:
    std::vector<std::vector<int>> data;

    IOParser();
    void setInputFileName(const std::string& filename_);
    void setOutputFileName(const std::string& filename_);
    int setCentral(const std::string& central_);
    std::string getCityName(int cityNodeId);
    int getCityCount() const;
    std::vector<std::vector<int>> parse();
    void writeOutput(int *previous, int *distance);
private:
    std::string inputFilename;
    std::string outputFilename;
    std::string central;
    std::map<std::string, int> cityIdx;
    std::map<int, std::string> cityMap{};
    int lastCityId;

    int getCityId(const std::string& city);
    std::string generateOutput(int *previous, int *distance);
    std::string generateOutputLine(int cityId, int *previous, int *distance);
};


#endif //SPEDITION_COMPANY_INPUT_PARSER_H
