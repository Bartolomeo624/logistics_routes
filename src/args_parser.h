//
// Created by bartolomeo on 06.02.23.
//

#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

#ifndef SPEDITION_COMPANY_ARGS_PARSER_H
#define SPEDITION_COMPANY_ARGS_PARSER_H

class ArgsParser{
public:
    ArgsParser(int &argc, char **argv);
    bool argExists(const string& $arg);
    string getArg(const string &arg);
private:
    vector<string> tokens;
};

#endif //SPEDITION_COMPANY_ARGS_PARSER_H
