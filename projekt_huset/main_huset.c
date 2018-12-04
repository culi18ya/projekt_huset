#include <stdio.h>

#include "houseManager.h"
#include "houseHelper.h"
#include "myIOLib.h"

void initGame(MapT, positionT*);

int main(void)
{
MapT theMap = createMap(30, 20, 8);
	positionT * kermitsPos = malloc(sizeof(positionT));
	system("chcp 1252");
	system("cls");
	

	int menyval = 0, återgå = 0;
	do
	{
		system("cls");
		printf("HUVUDMENY\n\n"
			"1. spela\n"
			"2. om spelet\n"
			"0. avsluta\n");
		scanf_s("%d", &menyval);

		switch (menyval)
		{
		case 1:
			initGame(theMap, kermitsPos);
			//gameLoop();
			printf("CONGRATULATIONS!"
				"You made it out of the house!");
			break;
		case 2:
			system("cls");
			printf("Blablalblalblablbllablalbla");
			printf("\nför att återgå till huvudmeny, tryck ENTER");
			getchar();
			getchar();
			break;
		}
	} while (menyval != 0);

	



	getchar();
	getchar();
}

void initGame(MapT theMap, positionT * kermitsPos)
{
	system("cls");
	placeObject(theMap, 0, 0, '@', &kermitsPos, 1);
	drawMap(theMap);

	getchar();
	getchar();
}