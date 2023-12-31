#include <iostream>
#include <vector>
#include <random>

template <typename T>
T maximus(T const a, T const b)
{
    return (a > b) ? a : b;
}

int main() {
    // Seed the random number generator
    std::random_device rd;
    std::mt19937 gen(rd());

    // Define the range for random integers
    std::uniform_int_distribution<int> distribution(1, 99);

    // Set to store random numbers
    std::vector<int> vecRand1;
    std::vector<int> vecRand2;
    int vec1_score = 0;
    int vec2_score = 0;

    // Generate 100 random numbers and insert them into the set
    for (int i = 0; i < 100; ++i) {
        int randomNum = distribution(gen);
        vecRand1.push_back(randomNum);
    }

    // Generate 100 random numbers and insert them into the set
    for (int i = 0; i < 100; ++i) {
        int randomNum = distribution(gen);
        vecRand2.push_back(randomNum);
    }


    std::cout << "Generated randomnumbers(vector): ";
    for(int i = 0 ; i < 99; ++i)
    {
        std::cout <<"vec1: " << vecRand1.at(i) << " vec2: " << vecRand2.at(i);
        if(maximus(vecRand1.at(i), vecRand2.at(i)) == vecRand1.at(i))
        {
            std::cout << " vec1 wins" << std::endl;
            vec1_score++;
        }
        else
        {
            std::cout << " vec2 wins" << std::endl;
            vec2_score++;
        }

    }
    std::cout << "Score is vec1 score: " << vec1_score << " to vec2_score: " << vec2_score << std::endl;
    if(vec1_score > vec2_score)
    {
        std::cout << "vec1 wins!!! " << std::endl;
    }
    else
    {
        std::cout << "vec2 wins!!! " << std::endl;
    }
    std::cout << "\n\n" << std::endl;
    return 0;
}
