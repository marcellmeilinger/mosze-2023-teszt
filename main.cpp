#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //Elgépelt változónév. N_ELEMENTS helyett NELEMENTS (hiányzik az aláhúzás)
    int *b = new int[NELEMENTS]; 
    
    //A karakterláncot kettős idézőjelbe kell tenni, nem szimplába.
    //Hiányzik a pontosvessző a sor végéről.
    std::cout << '1-100 ertekek duplazasa' 
    
    //A for ciklus hiányos. Hiányzik a feltétel és az iterációs lépés (i++).
    //i < N_ELEMENTS feltétel nélkül túlmehet a tömb határain.
    for (int i = 0;) 
    {
        b[i] = i * 2;
    }

    //A feltétel csak "i", ami 0-nál azonnal hamis, így a ciklus sosem fut le.
    //A ciklusmagból hiányzik az adat (b[i]) és a pontosvessző.
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:"
    }    

    std::cout << "Atlag szamitasa: " << std::endl;
    
    //Az 'atlag' változó nincs inicializálva (0-ra), így szemét értékről indul a számolás.
    //Az átlaghoz double vagy float kellene, különben az osztásnál elvesznek a tizedesjegyek.
    int atlag;

    //A for ciklusban vessző (,) van pontosvessző (;) helyett a feltétel után.
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        //Hiányzik a pontosvessző a sor végéről.
        atlag += b[i]
    }

    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    //Memóriaszivárgás! A 'new'-val lefoglalt tömb nincs felszabadítva (delete[] b;).

    return 0;
}
