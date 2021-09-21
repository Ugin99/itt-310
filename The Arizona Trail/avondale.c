
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "avondale.h"
bool goToAvondale() {
	bool avondaleLoop = false;

	char buffer[4096];

// The continuation of the Avondale storyline
	printf("\nYou are now living in Avondale. You now go to Estrella Mountain Community College where you are studying for your associates and hopefully go to Grand Canyon Unvicersity to get your bachelors.\n");
	printf("\nYour friends want to go to Gateway Pavillions for a movie and play at Dave and Busters but you know theres a final coming up and you need to study and go to sleep early.\n");

	while (avondaleLoop == false) 
	{
		printf("\nDo you want to go to the movies with your friends or study?\n");
		fgets(buffer, 10, stdin);

		// Going to party
		if (strcmp(buffer, player1) == 0)
		{
			printf("\nYou are going to the party ");
			avondaleLoop = true;
		}
	}


	if (strcmp(buffer, player1) == 0) {
	}
	return avondaleLoop;
}
