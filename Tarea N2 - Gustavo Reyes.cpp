#include <iostream>
#include <math.h>

using namespace std;
int main() {
	int cantidad_estudiantes = 0;
	int cantidad_notas = 0;
	float nota = 0;
	int contador = 1;
	int contador_notas = 1;
	float suma_notas = 0;
	float promedio_notas = 0;
	float promedio_general = 0;
	float notaMax = 7.0;
	float notaMin = 1.0;
	
	cout << "Ingrese la cantidad de estudiantes: ";
	cin >> cantidad_estudiantes;
	
	cout << "Ingrese la cantidad de notas por estudiante: ";
	cin >> cantidad_notas;
	
	do {
		for(int i = 0; i < cantidad_notas; i++) {
			// Pedimos al usuario que ingrese la nota del estudiante
			cout << "Ingrese la nota " << i + 1 << " del estudiante " << contador << ": ";
			cin >> nota;
			if (nota > notaMax or nota < notaMin) {
				// Si la nota entregada es mayor o menor que los valores declarados, entregamos mensaje de error
				cout << "La nota " << "'" << nota << "'" << " del estudiante " << contador << " debe ser mayor que " << notaMin << " o menor que " << notaMax << endl;
				break;
			} else {
				// De lo contrario continuamos
				
				// Sumamos cada nota para luego obtener el promedio
				suma_notas += nota;
				
				// Obtenemos el promedio de notas con la suma de notas
				promedio_notas = suma_notas / cantidad_notas;
			}
		}
		// Reiniciamos la variable a su valor por defecto '0' para poder guardar las notas del siguiente estudiante
		suma_notas -= suma_notas;
		// Engregamos el promedio de notas del estudiante
		cout << "El promedio de notas es: " << promedio_notas << endl;
		
		// Guardamos el valor de cada promedio en la variable 'promedio_general' para luego dividirlo con la cantidad de estudiantes
		promedio_general += promedio_notas;
		
		contador++;
	} while (contador <= cantidad_estudiantes);
	// Calculamos el promedio general con los valores obtenidos anteriormente
	promedio_general = promedio_general / cantidad_estudiantes;
	cout << "El promedio general de notas es: " << promedio_general;
	
	return 0;
}
