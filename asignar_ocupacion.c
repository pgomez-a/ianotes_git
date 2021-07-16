#include "tren.h"

int	asignarOcupacion(int *AsientosAsignados, int NumAsientos, int *OcupacionAsientos)
{
	int	count;
	int	diff;
	int	y;
	int	x;

	count = 0;
	while (count < 36 && OcupacionAsientos[count])
		count++;
	if (count >= 36)
		return (0);
	else
	{
		diff = 0;
		while (count < 36)
		{
			diff++;
			count++;
		}
		if (diff < NumAsientos)
			return (0);
	}
	count -= diff;
	diff = 0;
	while (diff < NumAsientos)
	{
		OcupacionAsientos[count] = 1;
		count++;
		diff++;
	}
	x = 0;
	diff = 0;
	while (x < 9)
	{
		y = 0;
		while (y < 4 && diff < NumAsientos)
		{
			if (!AsientosAsignados[(y * 9) + x])
			{
				AsientosAsignados[(y * 9) + x] = 1;
				diff++;
			}
			y++;
		}
		x++;
	}
	return (1);
}
