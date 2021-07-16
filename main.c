#include "tren.h"

void	initAsientosAsignados(int *AsientosAsignados)
{
	int	count;

	count = 0;
	while (count < 36)
	{
		AsientosAsignados[count] = 0;
		count++;
	}
}

int	main(void)
{
	int	AsientosAsignados[36];
	int	OcupacionAsientos[36];
	int	NumAsientos;
	int	err;

	initAsientosAsignados(AsientosAsignados);
	initAsientosAsignados(OcupacionAsientos);
	while (1)
	{
		mostrarOcupacion(AsientosAsignados);
		printf("¿Cuántos billetes deseas? ");
		scanf("%d", &NumAsientos);
		err = asignarOcupacion(AsientosAsignados, NumAsientos, OcupacionAsientos);
		if (err == 0)
			printf("Lo sentimos, no hay %d asientos disponibles\n\n", NumAsientos);
		else
			pedirEdadesPrecio(NumAsientos);
	}
}
