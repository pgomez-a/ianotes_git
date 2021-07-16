# Proyecto para curso Git de IA Notes
El presente repositorio ha sido elaborado con el objetivo de facilitar las explicaciones dadas en el **[curso de Git de la página de IA Notes](https://ia-notes.com/curso-de-git/)**. Dada la gran cantidad de comandos existentes en Git, es necesario poder trabajar con un proyecto con el que experimentar y probar todo lo aprendido. Mediante el uso de este repositorio se pretende que la persona interesada en seguir dicho curso sea capaz de aplicar, de forma práctica, todo el contenido teórico que recibe.

### Descripción del programa
Este programa simula una **máquina de venta electrónica de billetes de tren**. La función de dicha máquina es la de interactuar con el cliente para poder determinar el coste que tendrá la operación y poder también asignar tantos asientos como el cliente le indique.

### Ejecución del programa
Los pasos que debes seguir para poder crear el programa son:
1. Clona el repositorio de trabajo en tu ordenador
2. Accede al repositorio de trabajo
3. Ejecuta el comando **make**
4. Ejecuta el programa **'tren'**

### Desarrollo del programa
El programa ha sido desarrolaldo teniendo en cuenta los siguientes requisitos:
- El tren está compuesto por un solo vagón con 36 asientos individuales.
- Se irán asignando asientos por orden hasta completar el vagón.
- Si el número de billetes solicitados por el cliente supera el número de asientos libres, se le comunicará al cliente que no hay asientos.
- El precio del billete siempre es de 100€.
- Menores de dos años viajan gratis.
- Hasta 14 años (menores de 15) hay un descuento del 30%.
- Los mayores de 54 años tienen un descuento del 30%.
- Los mayores de 64 años tienen un descuento del 60%.
- Hay una tarjeta de fidelización, pero sólo para mayores de edad, que aporta un 10% adicional de descuento en cada tramo.
