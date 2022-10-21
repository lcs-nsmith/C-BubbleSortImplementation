//
//  main.cpp
//  C++BubbleSortImplementation
//
//  Created by Nathan on 2022-10-21.
//
#include <iostream>
#include <vector>
#include <algorithm>

void bubbleSwap(std::vector<int>& vet)
{
    for(int i = 0; i<vet.size(); ++i)
    {
        for(int j = 0; j<vet.size() - 1; ++j)
        {
            if(vet[j] > vet[j + 1])
            {
                std::swap(vet[j], vet[j + 1]);
            }
        }
    }
}

void printVet(const std::vector<int>& vet)
{
    for(int i = 0; i<vet.size(); ++i)
    {
        if (i == vet.size() - 1)
        {
            std::cout <<  vet[i];
        }
        else
        {
            std::cout <<  vet[i] << " ,";
            
        }
    }
    std::cout << "\n";
}

int main()
{
    std::vector<int> vet {1234, 1234, 990, 112};
    std::cout << "Presort!" << std::endl;
    printVet(vet);
    bubbleSwap(vet);
    std::cout << "Sorted" << std::endl;
    printVet(vet);
    
    return 0;
}
