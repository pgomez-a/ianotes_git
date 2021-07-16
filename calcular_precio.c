#include "tren.h"

int	calcularPrecio(int Edad, char Fidelizado)
{
	float	precio;

	precio = 100.0;
	if (Edad < 2)
		return (0);
	if (Edad < 15)
		return ((int)(precio - (precio * 0.3)));
	if (Edad > 64)
	{
		if (Fidelizado == 's')
		{
			precio -= (precio * 0.6);
			return ((int)(precio - (precio * 0.1)));
		}
		return ((int)(precio - (precio * 0.6)));
	}
	if (Edad > 54)
	{
		if (Fidelizado == 's')
		{
			precio -= (precio * 0.3);
			return ((int)(precio - (precio * 0.1)));
		}
		return ((int)(precio - (precio * 0.3)));
	}
	if (Fidelizado == 's')
		return (90);
	return (100);
}
