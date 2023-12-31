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
    std::vector<int> Player1;
    std::vector<int> Player2;
    int Player1_score = 0;
    int Player2_score = 0;

    // Generate 100 random numbers and insert them into the set
    for (int i = 0; i < 100; ++i) {
        int randomNum1 = distribution(gen);
        Player1.push_back(randomNum1);
        int randomNum2 = distribution(gen);
        Player2.push_back(randomNum2);
    }


    std::cout << "Generated randomnumbers(vector): ";
    for(int i = 0 ; i < 99; ++i)
    {
        std::cout <<"Player1: " << Player1.at(i) << " Player2: " << Player2.at(i);
        if(maximus(Player1.at(i), Player2.at(i)) == Player1.at(i))
        {
            std::cout << " Player1 wins" << std::endl;
            Player1_score++;
        }
        else
        {
            std::cout << " Player2 wins" << std::endl;
            Player2_score++;
        }

    }
    std::cout << "Total games won, Player1 won: " << Player1_score << " vs Player2 wins: " << Player2_score << std::endl;
    if(Player1_score > Player2_score)
    {
        std::cout << "Player1 won more games!!! " << std::endl;
    }
    else
    {
        std::cout << "Player2 won more games!!! " << std::endl;
    }
    std::cout << "\n\n" << std::endl;
    return 0;
}
