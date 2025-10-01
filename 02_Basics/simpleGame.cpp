#include <iostream>

int main() {
    // Initialization: Declaring and assigning in one clean step.
    int playerHealth = 100;
    int enemiesRemaining = 5;
    double gameVersion = 1.2;
    char playerGrade = 'A';
    bool isGameOver = false; // 'bool' is for true/false

    std::cout << "Welcome to version " << gameVersion << " of our game!\n";
    std::cout << "Initial health: " << playerHealth << "\n";
    std::cout << "Enemies left: " << enemiesRemaining << "\n";

    // Using a variable in a calculation
    playerHealth = playerHealth - 20; // Player takes 20 damage
    enemiesRemaining = enemiesRemaining - 1; // Defeated an enemy

    std::cout << "After the fight, health is: " << playerHealth << "\n";
    std::cout << "Enemies left: " << enemiesRemaining << "\n";

    return 0;
}