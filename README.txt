INSTRUKCJA OBSŁUGI: LINUX

Aby skompilować cały projekt w terminalu należy uruchomić następującą komendę:

$> make all

W rezultacie w głównym folderze projektu pojawi się wykonywalny plik logistics_routes.
Do uruchomienia programu potrzebny jest tekstowy plik wejściowy z listą miast i odległości między nimi
podanymi w następującym formacie:

<miasto> <miasto> <odległość>

Przykładowy plik wejściowy input.txt znajduje się w folderze 'resources/input'.


Skompilowany program uruchamia się w terminalu z następującymi parametrami.

$> ./logistics_routes -i resources/input/input.txt -o resources/output/output.txt -c Poznan

Po ukończeniu działania programu w pliku podanym parametrem '-o' znajduje się wynik.

Aby usunąć pliki wynikowe kompilacji i plik wykonywalny należy użyć komendy:

$> make clean

