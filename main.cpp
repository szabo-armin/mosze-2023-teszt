#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; 
    // HIBA: NELEMENTS nincs definiálva, a helyes konstans neve N_ELEMENTS

    std::cout << '1-100 ertekek duplazasa'
    // HIBA: hiányzik a pontosvessző a sor végéről
    // HIBA: egyes idézőjelek (' ') karakter literált jelentenek, nem stringet

    for (int i = 0;)
    // HIBA: hiányzik a ciklus feltétele és az inkrementálás (pl. i < N_ELEMENTS; i++)
    {
        b[i] = i * 2;
        // HIBA: i nem változik, így végtelen ciklus lenne (ha a for szintaktikailag helyes lenne)
    }

    for (int i = 0; i; i++)
    // HIBA: a ciklus feltétele csak "i", ami 0-ról indul, tehát a ciklus egyszer sem fut le
    {
        std::cout << "Ertek:"
        // HIBA: hiányzik a pontosvessző
        // HIBA: nem írja ki b[i] értékét, csak a szöveget
    }    

    std::cout << "Atlag szamitasa: " << std::endl;

    int atlag;
    // HIBA: az atlag változó nincs inicializálva, így szemétértékről indul

    for (int i = 0; i < N_ELEMENTS, i++)
    // HIBA: vessző van a feltételben pontosvessző helyett (i < N_ELEMENTS, i++)
    {
        atlag += b[i]
        // HIBA: hiányzik a pontosvessző
    }

    atlag /= N_ELEMENTS;

    std::cout << "Atlag: " << atlag << std::endl;

    return 0;
}