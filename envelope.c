#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	// Seed the random generator
	srand(time(0));
	// Get a random boolean and money value
	int normalValue = (rand() % 100) + 1;
	int doubleEnvelope = rand() % 2;
	// Ask the player to type 1 or 0
	printf("Two envelopes are placed before you. You may choose to open one and see the contents. Type 0 for the first, and 1 for the second\n");
	// Get input
	int choice = 0;
	scanf("%d", &choice);
	// Check input
	if (choice < 0 || choice > 1) {
		printf("You didn't type 1 or 0!\n");
		return 0;
	}
	// Tell player result
	int current = normalValue * ((choice == doubleEnvelope) ? 2 : 1);
	printf("The amount in the envelope is %d.\n", current);
	// Ask player if want to switch and read answer
	printf("Type 0 to keep this choice, or 1 to switch\n");
	int keep = 0;
	scanf("%d", &keep);
	// Check value
	if (keep < 0 || keep > 1) {
		printf("You didn't type 1 or 0!\n");
		return 0;
	}
	// Show result
	if (keep == 0) {
		printf("You chose to keep the %d.\n", current);
	} else {
		int new = normalValue * ((!choice == doubleEnvelope) ? 2 : 1);
		printf("You chose to switch and you got %d.\n", new);
	}
}
