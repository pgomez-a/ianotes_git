#include "tren.h"

void	mostrarOcupacion(int *AsientosAsignados)
{
	int	count;
	int	seat;

	count = 0;
	seat = 11;
	printf("El estado de ocupacion del vagon es:\n");
	while (count < 36)
	{
		if (AsientosAsignados[count])
			printf("|ooo|");
		else
			printf("|A%d|", seat);
		if ((count + 1) % 9 == 0)
			printf("\n");
		if ((count + 1) % 18 == 0)
			printf("\n");
		if (seat > 90)
			seat -= 79;
		else
			seat += 10;
		count++;
	}
}
