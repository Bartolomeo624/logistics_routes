//
// Created by bartolomeo on 07.02.23.
//

#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <iostream>

using namespace std;
#ifndef SPEDITION_COMPANY_INPUT_PARSER_H
#define SPEDITION_COMPANY_INPUT_PARSER_H

class IOParser {
public:
    vector<vector<int>> data;

    IOParser();
    void setInputFileName(const string& filename_);
    void setOutputFileName(const string& filename_);
    int setCentral(const string& central_);
    string getCityName(int cityNodeId);
    int getCityCount() const;
    vector<vector<int>> parse();
    void writeOutput(int *previous, int *distance);
private:
    string inputFilename;
    string outputFilename;
    string central;
    map<string, int> cityIdx;
    map<int, string> cityMap;
    int lastCityId;

    int getCityId(const string& city);
    string generateOutput(int *previous, int *distance);
    string generateOutputLine(int cityId, int *previous, int *distance);
};


#endif //SPEDITION_COMPANY_INPUT_PARSER_H
