// Dice Rolling Sim.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <ctime>

int main()
{
    srand(time(0));
    double num = 0;
    int temp = 0;


    int count = 1000000;

    for (int i = 0; i < count; i++)
    {
        temp += (1 + rand() % 6) - (1 + rand() % 6);
        if (temp < 0)
            temp = temp * -1;
        num = num + temp;

        temp = 0;
    }

    std::cout << "The average difference between two six sided dice rolls across " << count << " rolls = " << num / count << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
