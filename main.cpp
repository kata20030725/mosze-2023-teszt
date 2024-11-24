#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //hiányzik egy alsó vonal, helyesen: N_ELEMENTS//
    std::cout << '1-100 ertekek duplazasa' //sima idézőjel van és hiányzik a pontosvessző, helyesen: "1-100 ertekek duplazasa";//
    for (int i = 0;) //hiányzik ez: ; i < N_ELEMENTS; i++//
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:" //hiányzik a pontosvessző, "Ertek";//
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) //sima vessző helyett pontosvessző kell, helyesen: N_ELEMENTS; i++//
    {
        atlag += b[i] //hiányzik a pontosvessző, helyesen: b[i];//
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
