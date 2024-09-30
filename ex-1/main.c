#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{

	int start = 0;
	char *map = ">><><><<>>><<><><<<<<>><><>>>><><<><<>>>><<<><<>><<<<<>><<<<<<<<<>><>>><>><>>><<<<>>>>><>>><<><<><><><>>>>>>><<><<<<<>>><<<>><<<>>><<<<<<<<<<<<<<<>>>><<><><>>>>>>>>><>><>>><>>>>>>>><<><<>>>>";
	int count = strlen(map);

	printf("Carte:\n");

	for (int i = 0; i < count; i = i + 1)
	{
		if (map[i] == '<')
		{
			start = start - 1;
		}
		else
		{
			start = start + 1;
		}
	}
	printf("La case d'arrivé est: %d\n", start);
	exit(0);

}