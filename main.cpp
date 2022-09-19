#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //az  NELEMENETS helyett N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' // ' helyett "
    for (int i = 0;) // ciklushiba
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //ciklushiba
    {
        std::cout << "Ertek:" // nincs a sor végén pontos vessző
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // az atlag válozónak kell kezdőértéket adni
    for (int i = 0; i < N_ELEMENTS, i++) //ciklushiba
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "Hello";
    return 0;
}
