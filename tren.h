#ifndef TREN_H
# define TREN_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>

void	mostrarOcupacion(int *AsientosAsignados);

void	pedirEdadesPrecio(int NumAsientos);

int	asignarOcupacion(int *AsientosAsignados, int NumAsientos, int *OcupacionAsientos);

int	calcularPrecio(int Edad, char Fidelizado);

#endif
