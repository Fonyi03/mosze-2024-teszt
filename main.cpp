#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // NELEMENTS elírás javítva
    std::cout << "1-100 értékek duplázása" << std::endl; // Sorvégén ; hiányzott 

    // for loop kijavítva
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = (i + 1) * 2; // tömb feltöltése a dupla értékekkel 
    }

    // for loop javítva 
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        std::cout << "Érték: " << b[i] << std::endl; // minden egyes elem kiíratva
    }

    // javított átlagszámítás
    int atlag = 0; // változó inicializáslása
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i]; 
    }
    atlag /= N_ELEMENTS; 

    std::cout << "Átlag: " << atlag << std::endl; 

    delete[] b; // memória felszabadítva
    return 0;
}
