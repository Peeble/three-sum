#ifndef three_sum_h
#define three_sum_h

#include <vector>
#include <chrono>
#include <iostream>

class three_sum
{
private:
    std::vector<int> myInts;
    std::chrono::duration<double> elapsed;

public:
    three_sum(std::vector<int> myVector)
    {
        myInts = myVector;

        output(count(myInts));
    }

    int count(std::vector<int> myVector)
    {
        int count = 0;
        auto start = std::chrono::high_resolution_clock::now();
        for (int i = 0; i < myVector.size(); i++)
        {
            for (int j = i + 1; j < myVector.size(); j++)
            {
                for (int k = j + 1; k < myVector.size(); k++)
                {
                    if ((myVector.at(i) + myVector.at(j) + myVector.at(k)) == 0)
                        count++;
                }
            }
        }
        auto finish = std::chrono::high_resolution_clock::now();
        elapsed = finish - start;

        return count;
    }

    void output(int myCount)
    {
        //std::cout << "My count: " << myCount << std::endl;
        std::cout << "Elapsed time: " << elapsed.count() << " s\n";
    }
};

#endif