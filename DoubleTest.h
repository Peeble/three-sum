#ifndef DoubleTest_h
#define DoubleTest_h

#include <vector>
#include <chrono>
#include <iostream>
#include <random>
#include "three_sum.h"

class DoubleTest
{
private:
    std::vector<int> myVec;

public:
    DoubleTest()
    {
        std::cout << "test" << std::endl;
    }

    DoubleTest(int N)
    {
        int MAX = 100000;
        std::default_random_engine generator;
        std::uniform_int_distribution<int> distribution(-MAX, MAX);
        for (int i = 0; i < N; i++)
        {
            myVec.push_back(distribution(generator));

/*            
            for (std::vector<int>::iterator i = myVec.begin(); i != myVec.end(); i++)
            {
                std::cout << *i << std::endl;
            }
*/

            
        }
        three_sum object(myVec);
    }
};

#endif