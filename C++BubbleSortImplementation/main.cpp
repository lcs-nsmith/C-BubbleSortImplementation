//
//  main.cpp
//  C++BubbleSortImplementation
//
//  Created by Nathan on 2022-10-21.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

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


 
int randInt(int a, int b)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(a, b);
 
    return distrib(gen);
}

int main()
{
    std::vector<int> vet {};
    for(int i = 0; i<3000; ++i)
    {
        vet.push_back(randInt(0, 200000));
    }
    
    std::cout << "Presort!" << std::endl;
    printVet(vet);
    std::chrono::high_resolution_clock clock;
    auto start = clock.now();
    bubbleSwap(vet);
    auto end = clock.now();
    std::chrono::duration<float> duration (end - start);
    
    std::cout << "Sorted" << std::endl;
    printVet(vet);
    std::cout << "Sorted in " << duration.count() << std::endl;
    
    return 0;
}
