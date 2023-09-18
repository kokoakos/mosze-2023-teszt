#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];
    std::cout << "1-100 ertekek duplazasa\n\n";
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }
     int ert;
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        ert+=b[i];
    } 
    std::cout << "Ertek: " << ert<<"\n";   
    std::cout << "Atlag szamitasa " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl; 
    return 0;
}
