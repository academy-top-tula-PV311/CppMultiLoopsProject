#include <iostream>

int main()
{
    //int number{ 3 };

    /*std::cout << "Input number: ";
    std::cin >> number;*/

    /*for (int number{ 1 }; number < 10; number++)
    {
        for (int i{ 1 }; i < 10; i++)
            std::cout << number << " * "
            << i << " = "
            << number * i << "\n";
        std::cout << "-----------\n";
    }*/

    /*int width;
    int height;

    std::cout << "Input width: ";
    std::cin >> width;
    std::cout << "Input height: ";
    std::cin >> height;

    for (int h{}; h < height; h++)
    {
        for (int w{ 0 }; w < width; w++)
            std::cout << "*";
        std::cout << "\n";
    }*/
    
    //int size{ 7 };
    //for (int i{}; i < size; i++)
    //{
    //    for (int j{}; j < size; j++)
    //        //if (i == j)
    //        if(i == j || j == size - 1 - i 
    //                  || i == size / 2
    //                  || j == size / 2)
    //            std::cout << "* ";
    //        else
    //            std::cout << "  ";
    //    std::cout << "\n";
    //}
        
    int width{ 7 };
    int height{ 5 };

    for (int i{}; i < height; i++)
    {
        for (int j{}; j < width; j++)
            if (i == 0 || i == height - 1
                       || j == 0
                       || j == width - 1)
                std::cout << "*";
            else
                std::cout << " ";
    }

    std::cout << "\n";

    for (int i = 0; i < width; i++)
        std::cout << "*";
    std::cout << "\n";

    for (int i = 0; i < height - 2; i++)
    {
    std::cout << "*";
    for(int j = 0; j < width - 2; j++)
    std::cout << "*";
    std::cout << "\n";
    std::cout << "*";
    }

    for (int i = 0; i < width; i++)
        std::cout << "*";
    std::cout << "\n";

}
