//
// Created by bartolomeo on 06.02.23.
//

#include "args_parser.h"

ArgsParser::ArgsParser(int &argc, char **argv) {
    for (int i=1; i < argc; ++i) {
        this->tokens.emplace_back(argv[i]);
    }
}

bool ArgsParser::argExists(const std::string& arg) {
    return find(this->tokens.begin(),
                this->tokens.end(),
                arg) != this->tokens.end();
}

std::string ArgsParser::getArg(const std::string &arg) {
    std::vector<std::string> :: iterator i;
    i = find(this->tokens.begin(), this->tokens.end(), arg);
    if (i != this->tokens.end() && ++i != this->tokens.end()) {
        return *i;
    }
    return "";
}
