//
// Created by bartolomeo on 06.02.23.
//

#include "args_parser.h"

ArgsParser::ArgsParser(int &argc, char **argv) {
    for (int i=1; i < argc; ++i) {
        this->tokens.emplace_back(argv[i]);
    }
}

bool ArgsParser::argExists(const string& arg) {
    return find(this->tokens.begin(),
                this->tokens.end(),
                arg) != this->tokens.end();
}

string ArgsParser::getArg(const string &arg) {
    vector<string> :: iterator i;
    i = find(this->tokens.begin(), this->tokens.end(), arg);
    if (i != this->tokens.end() && ++i != this->tokens.end()) {
        return *i;
    }
    return "";
}
