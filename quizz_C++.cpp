#include <iostream>
#include <locale.h>//polskie znaki 1/2
using namespace std;

int main()
{
    main; setlocale(LC_CTYPE, "Polish"); //polskie znaki 2/2

    //zmienne odpowiedzi
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;
    int odp1;
    int odp2;
    int odp3;
    int odp4;
    int odp5;
    int odp6;
    int odp7;
    int odp8;
    int odp9;
    int odp10;
    int odp11;
    int odp12;
    int odp13;
    int odp14;
    //zmienna punktów
    int punkty1 = 0;

    //-------------------------------------------------------------------------------------------------------------------------------------------------//
    //Pytanie 1

    cout << "I. Jak nazywa się właściciel Energylandi?\n1) Paweł Meten\n2) Krystian Reweczyński\n3) Marek Goczał\n";
    cin >> odp1;
    if (odp1 == c)
    {
        cout << "Poprawna odpowiedź";
        punkty1 = punkty1 + 1;
    }
    else
    {
        cout << "żle";
    }

    //-------------------------------------------------------------------------------------------------------------------------------------------------//
    //Pytanie 2

    cout << "\nII. Ile stref liczy energylandia?\n1) 20\n2) 13\n3) 5\n4) 7\n";
    cin >> odp2;
    if (odp2 == d)
    {
        cout << "Poprawna odpowiedź";
        punkty1 = punkty1 + 1;
    }
    else
    {
        cout << "zła odpowiedź";
    }

    //-------------------------------------------------------------------------------------------------------------------------------------------------//
    //Pytanie 3

    cout << "\nIII. Który z poniżej wymienionych rollercasterów jest koloru niebieskiego?\n1) Abysuss\n2) Draken\n3) Frida\n4) Light Explorers\n5) Formuła\n";
    cin >> odp3;
    if (odp3 == a)
    {
        cout << "Poprawna odpowiedź";
        punkty1 = punkty1 + 1;
    }
    else
    {
        cout << "zła odpowiedź";
    }

    //-------------------------------------------------------------------------------------------------------------------------------------------------//
    //Pytanie 4

    cout << "\nIV. Który z poniżej wymienionych rollercasterów jest koloru czarnego?\n1) Abysuss\n2) Draken\n3) Frida\n4) Light Explorers\n5) Formuła\n";
    cin >> odp4;
    if (odp4 == d)
    {
        cout << "Poprawna odpowiedź";
        punkty1 = punkty1 + 1;
    }
    else
    {
        cout << "zła odpowiedź";
    }

    //-------------------------------------------------------------------------------------------------------------------------------------------------//
    //Pytanie 5

    cout << "\nV. Który z poniżej wymienionych rollercasterów jest koloru brązowego?\n1) Abysuss\n2) Draken\n3) Frida\n4) Light Explorers\n5) Formuła\n";
    cin >> odp5;
    if (odp5 == b)
    {
        cout << "Poprawna odpowiedź";
        punkty1 = punkty1 + 1;
    }
    else
    {
        cout << "zła odpowiedź";
    }

    //-------------------------------------------------------------------------------------------------------------------------------------------------//
    //Pytanie 6

    cout << "\nVI. Jaka jest prędkość Moya Formuła?\n1) 80km/h\n2) 100km/h\n";
    cin >> odp6;
    if (odp6 == a)
    {
        cout << "Poprawna odpowiedź";
        punkty1 = punkty1 + 1;
    }
    else
    {
        cout << "zła odpowiedź";
    }

    //-------------------------------------------------------------------------------------------------------------------------------------------------//
    //Pytanie 7

    cout << "\nVII. Jaka jest wysokość Moya Formuła?\n1) 33m\n2) 25m\n";
    cin >> odp7;
    if (odp7 == b)
    {
        cout << "Poprawna odpowiedź";
        punkty1 = punkty1 + 1;
    }
    else
    {
        cout << "zła odpowiedź";
    }

    //-------------------------------------------------------------------------------------------------------------------------------------------------//
    //Pytanie 8

    cout << "\nVIII. Jaka jest długość trasy Moya Formuła?\n1) 560m\n2) 689\n";
    cin >> odp8;
    if (odp8 == a)
    {
        cout << "Poprawna odpowiedź";
        punkty1 = punkty1 + 1;
    }
    else
    {
        cout << "zła odpowiedź";
    }

    //-------------------------------------------------------------------------------------------------------------------------------------------------//
    //Pytanie 9

    cout << "\nVIX. Jaka jest ilość inwersi Moya Formuła?\n1) 3\n2) 5\n";
    cin >> odp9;
    if (odp9 == a)
    {
        cout << "Poprawna odpowiedź";
        punkty1 = punkty1 + 1;
    }
    else
    {
        cout << "zła odpowiedź";
    }

    //-------------------------------------------------------------------------------------------------------------------------------------------------//
    //Pytanie 10

    cout << "\nX. Jakim typem rollercoastera jest Moya Formuła?\n1) Klasycznym\n2) Launch\n";
    cin >> odp10;
    if (odp10 == b)
    {
        cout << "Poprawna odpowiedź";
        punkty1 = punkty1 + 1;
    }
    else
    {
        cout << "zła odpowiedź";
    }

    //-------------------------------------------------------------------------------------------------------------------------------------------------//
    //Pytanie 11

    cout << "\nXI. Oceń prawdziwość zdania: Mayan posiada największą liczbę inwersji spośród wszystkich kolejek górskich w Polsce.\n1) P\n2) F\n";
    cin >> odp11;
    if (odp11 == a)
    {
        cout << "Poprawna odpowiedź";
        punkty1 = punkty1 + 1;
    }
    else
    {
        cout << "zła odpowiedź";
    }

    //-------------------------------------------------------------------------------------------------------------------------------------------------//
    //Pytanie 12

    cout << "\nXII.Oceń prawdziwość zdania: Energylandia obchodzi swoje urodziny w Lipcu.\n1) P\n2) F\n";
    cin >> odp12;
    if (odp12 == a)
    {
        cout << "Poprawna odpowiedź";
        punkty1 = punkty1 + 1;
    }
    else
    {
        cout << "zła odpowiedź";
    }

    //-------------------------------------------------------------------------------------------------------------------------------------------------//
    //Pytanie 13

    cout << "\nXIII. Andżelika ma 120cm wzrostu. Czy Andżelika może iść na Hyperiona?\n1) Tak\n2) Nie\n";
    cin >> odp13;
    if (odp13 == b)
    {
        cout << "Poprawna odpowiedź";
        punkty1 = punkty1 + 1;
    }
    else
    {
        cout << "zła odpowiedź";
    }

    //-------------------------------------------------------------------------------------------------------------------------------------------------//
    //Pytanie 14

    cout << "\nXIV. Jaka firma zbudowała Hyperiona? \n1) Vakoma\n2) RMC\n3) Intamin\n4) B&M\n";
    cin >> odp14;
    if (odp14 == c)
    {
        cout << "Poprawna odpowiedź";
        punkty1 = punkty1 + 1;
    }
    else
    {
        cout << "zła odpowiedź";
    }

    //-------------------------------------------------------------------------------------------------------------------------------------------------//
    //Wypisanie punktów
    cout << "\nLiczba zdobytych przez ciebie punktów to: " << punkty1 << "/ 14";
    
    return 0;
}


