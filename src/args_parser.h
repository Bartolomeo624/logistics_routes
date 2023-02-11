//
// Created by bartolomeo on 06.02.23.
//

#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

#ifndef SPEDITION_COMPANY_ARGS_PARSER_H
#define SPEDITION_COMPANY_ARGS_PARSER_H

class ArgsParser{
public:
    ArgsParser(int &argc, char **argv);
    bool argExists(const std::string& $arg);
    std::string getArg(const std::string &arg);
private:
    std::vector<std::string> tokens;
};

#endif //SPEDITION_COMPANY_ARGS_PARSER_H
