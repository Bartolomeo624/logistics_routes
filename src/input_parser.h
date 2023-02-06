//
// Created by bartolomeo on 07.02.23.
//

#include <string>
#include <vector>
#include <fstream>
using namespace std;
#ifndef SPEDITION_COMPANY_INPUT_PARSER_H
#define SPEDITION_COMPANY_INPUT_PARSER_H

class InputParser {
public:
    vector<string> cities;
    string central;

    InputParser();
    vector<vector<int>> parse(string filename);
    string getCityName(int cityNodeId);
};


#endif //SPEDITION_COMPANY_INPUT_PARSER_H
