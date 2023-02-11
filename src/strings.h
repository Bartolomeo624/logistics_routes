//
// Created by bartolomeo on 06.02.23.
//
#include <string>

#ifndef SPEDITION_COMPANY_STRINGS_H
#define SPEDITION_COMPANY_STRINGS_H

const std::string HELP_TEXT = "\nPomoc do programu - Spedycja\n"
                              "===========================================\n"
                              "Program znajduje najszybsza mozliwa trase z danej centrali\n"
                              "By porgram zadzialal poprawnie nalezy podac argumenty:\n\n"
                              "-i [plik z danymi trasami spedycyjnymi]\n"
                              "-o [nazwa pliku wyjsciowego]\n"
                              "-c [centrala z ktorej program wyznaczy trasy]\n\n"
                              "Przyklad poprawnego uruchomienia:\n"
                              "spedycja.exe -i dane.txt -o wynik.txt -c miasto_centralne\n\n"
                              "Trasy miedzy miastami w pliku wejsciowym powinny byc zapisane \n"
                              "w osobnych liniach zgodnie z ponizszym schematem:\n"
                              "<miasto> <miasto> <odleglosc>\n"
                              "przyklad: Szczecin Poznan 220\n"
                              "===========================================\n";
const std::string MISSING_I = "Brakujacy agrument:\n-i [plik z danymi trasami spedycyjnymi]\n";
const std::string MISSING_O = "Brakujacy agrument:\n-o [nazwa pliku wyjsciowego]\n";
const std::string MISSING_C = "Brakujacy agrument:\n-c [centrala z ktorej program wyznaczy trasy]";
const std::string INCORRECT_C = "Dana Centrala nie istnieje w danych wejsciowych";
const std::string NO_DATA = "Dany plik wejsciowy nie istnieje lub jest pusty.\n";

#endif //SPEDITION_COMPANY_STRINGS_H
