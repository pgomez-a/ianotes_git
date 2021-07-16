#include "tren.h"

void	pedirEdadesPrecio(int NumAsientos)
{
	char	fideliz[3];
	int	viajeros[NumAsientos];
	int	total[NumAsientos];
	int	result;
	int	diff;

	diff = 0;
	printf("¿Qué edad tienen los viajeros?\n");
	while (diff < NumAsientos)
	{
		printf("Viajero %d: ", diff + 1);
		scanf("%d", &(viajeros[diff]));
		diff++;
	}
	diff = 0;
	fideliz[2] = '\0';
	printf("¿Tienen tarjeta de fidelización?\n");
	while (diff < NumAsientos)
	{
		printf("Viajero %d: ", diff + 1);
		scanf("%s", fideliz);
		if (strcmp("SI", fideliz))
			total[diff] = calcularPrecio(viajeros[diff], 's');
		else
			total[diff] = calcularPrecio(viajeros[diff], 'n');
		diff++;
	}
	diff = 0;
	result = 0;
	while (diff < NumAsientos)
	{
		result += total[diff];
		diff++;
	}
	printf("El precio es: %d€\n", result);
}
