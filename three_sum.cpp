#include <iostream>
#include <fstream>
#include <vector>
#include <chrono>
#include "three_sum.h"
#include "DoubleTest.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Usage: .\\three-sum.exe file.txt" << std::endl;
    }

    std::ifstream myFile(argv[1]);
    std::vector<int> myInts;
    int n;
    while (myFile >> n)
    {
        myInts.push_back(n);
    }

    //DoubleTest();
    //DoubleTest(1000);


    for (int k = 250; k < 8000; k += k)
    {
        std::cout << "Problem Size: " << k << std::endl;
        DoubleTest myDub(k);
        std::cout << "===========" << std::endl;
    }

    /*
    for (std::vector<int>::iterator i = myInts.begin(); i != myInts.end(); i++)
    {
        //std::cout << *i << std::endl;
    }
    
    auto start = std::chrono::high_resolution_clock::now();
    std::cout << "my count: " << count(myInts) << std::endl;
    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Elapsed time: " << elapsed.count() << " s\n";
*/
    //three_sum object(myInts);
}