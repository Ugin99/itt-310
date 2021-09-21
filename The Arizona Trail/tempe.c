
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "tempe.h"

bool goToTempe() {
	bool tempeLoop = false;

	while (tempeLoop == false)
	{
		printf("\nYou are now living in Tempe. You now go to Arizona State University where you are studying to be a Software Engineer. You're friends are also at ASU studying the same subject.\n");
		printf("\nYou hear of a major party going on in a sorority house and %s wants to go.\n", player1);
		printf("\nBut %s wants to study for the Mid-Term tomorrow morning instead. Who do you want to go with?\n", player2);
		fgets(answer, 10, stdin);  

		// Going to party
		if (strcmp(answer, player1) == 0)
		{
			printf("\nYou are going to the party with %s.", player1);
			tempeLoop = true;
		}
		// Going to study
		else if (strcmp(answer, player2) == 0)
		{
			printf("\nYou are going to study with %s.", player2);
			tempeLoop = true;
		}
		else 
		{
			printf("\nI'm sorry, I didn't get that");
		}
	}
	return tempeLoop;
}
