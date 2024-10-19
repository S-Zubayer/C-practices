#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

// Points for each letter from A to Z
int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// Function to calculate score for a word
int compute_score(string word) {
    int score = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        if (isalpha(word[i])) {
            int index = toupper(word[i]) - 'A';  // Convert letter to index
            score += points[index];  // Add corresponding points
        }
    }
    return score;
}

int main(void) {
    // Get words from both players using get_string()
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Compute scores
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Determine the winner
    if (score1 > score2) {
        printf("Player 1 wins!\n");
    } else if (score2 > score1) {
        printf("Player 2 wins!\n");
    } else {
        printf("Tie!\n");
    }

    return 0;
}
