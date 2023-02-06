//
// Created by bartolomeo on 06.02.23.
//
#include <string>

#ifndef SPEDITION_COMPANY_STRINGS_H
#define SPEDITION_COMPANY_STRINGS_H

const std::string HELP_TEXT = "\nPomoc do programu - Spedycja\n"
                              "===========================================\n"
                              "Program znajduje najszybsza i mozliwa trase z danej centrali\n"
                              "By porgram zadzialal poprawnie nalezy podac argumenty:\n"
                              "-i plik z danymi trasami spedycyjnymi\n"
                              "-o nazwa pliku wyjsciowego\n"
                              "-c centrala z ktorej program wyznaczy trasy\n\n"
                              "Poprawne podanie argumentow:\n"
                              "spedycja.exe -i dane.txt -o wynik.txt -c miasto_centralne\n"
                              "Trasy miedzy miastami w pliku wejsciowym zapisane sa w nastepujacy sposob:\n"
                              "<miasto> <miasto> <odleglosc>\n"
                              "przyklad: Szczecin Poznan 220\n"
                              "===========================================\n";
const std::string MISSING_I = "Brakujacy agrument:\n-i (plik z danymi trasami spedycyjnymi)\n";
const std::string MISSING_O = "Brakujacy agrument:\n-o (nazwa pliku wyjsciowego)\n";
const std::string MISSING_C = "Brakujacy agrument:\n-c (centrala z ktorej program wyznaczy trasy)\n";

#endif //SPEDITION_COMPANY_STRINGS_H
