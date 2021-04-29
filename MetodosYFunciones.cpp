#include <iostream>

#pragma region SubMethods
void MostrarMarizBidi(int matr[][3], int dim)
{
	for (int i = 0; i < dim; i++)
	{
		for (int q = 0; q < dim; q++)
		{
			std::cout << "[" << matr[i][q] << "]";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
#pragma endregion
#pragma region Funcntions
int ElevarNumPotencia(int base, int power)
// Funcion simple para elevar un numero a una potencia, regresa un valor Entero.
{
	// Creamos una variable de base 1.
	int holder = 1;

	// Contador en 0 y se repite hasta que el contador es igual a la potencia elegida.
	for (int i = 0; i < power; i++)
	{
		holder = holder * base;
	}
	return holder;
}
int NumDeDigitos(int num)
// Funcion simple encargada de devolver un valor Entero equivalente al numero de cifras de otro valor Entero.
{
	// Creamos una variable en 1 asumiendo que es la minima cantidad de digitos posible.
	int digitos = 1;

	// Creamos un ciclo el cual se ejecutara siempre que el dividendo sea mayor o igual a 1.
	while ((num / 10) >= 1)
	{
		// Se incrementa la cantidad de digitos y luego se procede a dividir entre 10.
		digitos++;
		num /= 10;
	}
	
	return digitos;
}
int InvertirNumero(int numInicial)
{
	// Si numInicial == 1234, entonces: numOperado == 123 y numFinal == 4;
	int numOperado = numInicial / 10;
	int numFinal = numInicial % 10;

	// Mientras el numero operado pueda seguir dividiendose entre 10, se repetira el ciclo.
	while ((numOperado / 10) >= 1)
	{
		numFinal = (numFinal * 10) + (numOperado % 10);
		numOperado /= 10;
	}

	// Al finalizar, numOperado == 12 y numFinal == 432. Osea que la representacion seria la siguiente:
	// numFinal = (432 * 10) + (12 mod 10)
	// numFinal = 4320 + 1.
	// num final = 4321.
	return numFinal = (numFinal * 10) + (numOperado % 10);
}
#pragma endregion
#pragma region Main Methods
void Fibonacci()
{
	/* La secuencia de Fibonacci es aquella en la cual el numero siguiente es la suma de los dos numeros anteriores.
	* F0 = 0, F1 = 1
	* Fn = (Fn - 1) + (Fn - 2)
	* donde n la posicion del numero.
	*/

	int numElementos = 1;	// Cantidad de elementos. Le inicializamos en 1.
	int x = 0;	
	int y = 1;
	int z = x;
	
	std::cout << "Ingrece la cantidad de elementos: "; std::cin >> numElementos;
	std::cout << std::endl;

	// Nos aseguramos de que no sean numeros igual o menores que 0.
	if (numElementos <= 0)
	{
		std::cout << "Numero de elementos no puede ser igual o menor que 0.";
	}

	// Creamos un ciclo para desde y se ejecutara hasta que el contador deje de ser menor a la cantidad de elementos.
	for (int i = 0; i < numElementos; i++)
	{
		// Vamos mostranto en la misma linea los valores de los numeros.
		std::cout << z << " ";
		z = x + y;
		x = y;
		y = z;

	}
	std::cout << std::endl;
}
void NumPrimo()
{
	// Numero primo es aquel cullo unico numero que lo puede dividir exactamente es el mismo ( Ignorando al numero 1 ).

	int numInicial;			// Variable donde se guardara el numero a evaluar.
	int divTotales = 0;		// Variable que indica la cantidad de veces que el numero se ha dividido exactamente (Result = 0)
	std::cout << "Ingrese un numero mayor que '1': "; std::cin >> numInicial;
	std::cout << std::endl;

	// Creamos ciclo Para iniciando en el numero 2. 
	/* Debido a que usaremos el contador del ciclo como numero que dividira al numero inicial
	 *  ignoramos el contador iniciando por 0 y 1 por obvias razones. 
	 */
	for (int i = 2; i <= numInicial; i++) 
	{
		// Si la division entre el numero inicial y el valor del contador actual es exacta (Residuo 0) 
		// Entonces incrementamos el contador de divisiones totales +1.
		if (numInicial % i == 0) divTotales++; 
	}
	
	/* Si el valor de la variable de divisiones totales es igual a 1 significa que
	*  solo se dividio 1 sola vez, cuando el contador tenia el mismo valor que el 
	*  numero inicial. Como  resultado, el numero es primo.
	*/
	if (divTotales == 1)
	{
		// Mostramos el mensaje que el numero es primo y salimos del metodo.
		std::cout << numInicial << " es un numero primo." << std::endl;
		return;
	}
	std::cout << numInicial << " no es un numero primo." << std::endl;

}
void NumPalindrome()
{
	/* Un numero palindromo es aquel que al escribirse al reves sigue siendo el mismo numero. 
	*  Ejemplo: Si el numero inicial es 1234, al escribirlo al reves seria 4321.
	*/
	// int numOperado;		// Variable que se usara para operar el numero inicial sin alterar esa variable
	
	int numInicial;		// Variable donde se guardara el numero inicial introducido por el usuario.
	int numFinal;		// Variable donde se ira guardando el numero palindromo.
	std::cout << "Ingrese un numero: "; std::cin >> numInicial;
	std::cout << std::endl;

	// Si el numero inicial es mayor a 10 se puede proceder.
	if (numInicial > 10)
	{
		// El codigo acontinuacion es uno que se ha movido a una funcion independiente.
#pragma region OldInvertirCode
		//// Si numInicial == 1234, entonces: numOperado == 123 y numFinal == 4;
		//numOperado = numInicial / 10;	
		//numFinal = numInicial % 10;
		//
		//// Mientras el numero operado pueda seguir dividiendose entre 10, se repetira el ciclo.
		//while ((numOperado / 10) >= 1)
		//{
		//	numFinal = (numFinal * 10) + (numOperado % 10);
		//	numOperado /= 10;
		//}

		//// Al finalizar, numOperado == 12 y numFinal == 432. Osea que la representacion seria la siguiente:
		//// numFinal = (432 * 10) + (12 mod 10)
		//// numFinal = 4320 + 1.
		//// num final = 4321.
		//numFinal = (numFinal * 10) + (numOperado % 10);
#pragma endregion

		// Invocamos a la funcion InvertirNumero.
		numFinal = InvertirNumero(numInicial);

		// Comparamos a ver si el valor de numFinal es igual al valor de numInicial.
		if (numInicial == numFinal)
		{
			// Si el numero inicial es igual al numero final, mosrar que es un numero palindromo y salir del metodo.
			std::cout << numInicial << " es un numero palindromo." << std::endl;
			return;
		}

		// Ya que el metodo aun no ha salido, el numero no es palindromo. Mostrar mensaje indicando eso.
		std::cout << numInicial << " no es un numero palindromo." << std::endl;
		return;
	}
	// Mostrar que debe ingresar un numero mayor a 10 para poder evaluar.
	std::cout << "Ingrese un numero mayor a 10" << std::endl;
}
void Factorial()
{
	// Iniciamos con factorial en 1 ya que el factorial de 0 y 1 es 1.
	int numInicial;
	int factorial = 1;
	std::cout << "Introduzca el numero del cual desea calcular el factorial: "; std::cin >> numInicial;
	std::cout << std::endl;

	// Si el numero introducido es negativo, se sale de la funcion retornando un aviso al respecto.
	if (numInicial < 0)
	{
		std::cout << "Numero debe ser positivo." << std::endl;
		return;
	}
	// Si el numero inicial es 0 o 1 simplemente se imprime un mensaje y salimos de la funcion.
	if (numInicial == 0 || numInicial == 1)
	{
		std::cout << "El factorial de " << numInicial << " es: " << factorial << std::endl;
		return;
	}

	// Iniciamos el contador en 2 ya que este mismo sera el que se usara para incrementar la cantidad.
	for (int i = 2; i < numInicial + 1; i++)
	{
		factorial *= i;
	}

	// Mostramos el resultado del factorial.
	std::cout << "El factorial de " << numInicial << " es: " << factorial << std::endl;
}
void NumAmstrong()
{
	// Creamos 4 variables, donde se guardaran:

	int numInicial;				// 1. El numero Inicial que introducira el usuario
	int numHolder;				// 2. Variable que sostendra las operaciones sin alterar el valor inicial.
	int numDigitoEnOperacion;	// 3. Variable que sostendra el digito(1 solo numero) el cual sera elevado y sumado.
	int numSumado = 0;			// 4. Variable la cual ira siendo sumada con el cubo de los digitos.
	
	// Pedimos el numero al usuario.
	std::cout << "Ingrese un numero: "; std::cin >> numInicial;
	std::cout << std::endl;

	numHolder = numInicial;		// Asignamos el valor inicial a la variable temporal (2.)
	
	// Creamos ciclo desde 0 hasta *La cantidad total de digitos* (con una funcion.) 
	// Ejemplo: 999 tiene 3 digitos. 9, 9 ,9. 
	for (int i = 0; i < NumDeDigitos(numInicial); i++)
	{
		numDigitoEnOperacion = numHolder % 10;									// Obtenemos primer digito
		numSumado = numSumado + (ElevarNumPotencia(numDigitoEnOperacion, 3));	// Sumamos ese digito elevado al cubo (funcion)
		numHolder /= 10;														// Dividimos la variable temporal entre 10.
	}

	// Si el numero sumado es igual al numero inicial, es un numero Amstrong. (Retornamos a la funcion principal)
	if (numSumado == numInicial)
	{
		std::cout << numInicial << " es un numero Amstrong" << std::endl;
		return;
	}

	// Si no retornamos a la funcion principal en la condicional, significa que el numero no es amstrong.
	std::cout << numInicial << " no es un numero Amstrong" << std::endl;
	return;
}
void NumSumaDeDigitos()
{
	// Metodo similar al del numero amstrong 
	int numInicial;			// Variable que el usuaro introducira.
	int numHolder;			// Variable que sostendra el valor de la variable inicial.
	int numSumados = 0;		// Variable que se usara para sumar los digitos individuales
	int numDigitoActual;	// Variable que sostendra el valor de 1 solo digito que sera usado para sumar.

	std::cout << "Introduzca el numero: "; std::cin >> numInicial;
	std::cout << std::endl;

	// Para no alterar el valor inicial, lo asignamos a otra variable.
	numHolder = numInicial;	

	// Creamos ciclo Para desde 0 hasta *El numero total de digitos* del valor inicial usando otra funcion.
	for (int i = 0; i <= NumDeDigitos(numInicial); i++)
	{
		numDigitoActual = numHolder % 10;	// Encontramos el primer digito (Seria el ultimo de derecha a izquierda)
		numSumados += numDigitoActual;		// Sumamos ese digito a la variable encargada de esa suma.
		numHolder /= 10;					// Dividimos entre 10 para hallar el siguiente digito.
	}

	// Mostramos el resultado.
	std::cout << "La suma de los digitos es: " << numSumados << std::endl;

}
void InvertirNumero()
{
	int numInicial;
	std::cout << "Ingrese un numero: "; std::cin >> numInicial;
	std::cout << std::endl;
	std::cout << "El numero invertido es: " << InvertirNumero(numInicial)<< std::endl;
}
void NumCambiar()
{
	int num1, num2;
	std::cout << "Ingrese el primer numero: "; std::cin >> num1;
	std::cout << "Ingrese el segundo numero: "; std::cin >> num2;
	std::cout << std::endl;
	num1 *= num2;
	num2 = num1 / num2;
	num1 = num1 / num2;
	std::cout << "El valor del primer numero es: " << num1 << std::endl;
	std::cout << "El valor del segundo numero es: " << num2 << std::endl;

}
void MatrizMultiplicar()
{
	// Una multiplicacion de matrices bidimensionales.
	const int DIM = 3;									// Variable constante que definira las dimensiones de la matriz. En este caso 3x3.
	int mA[3][3] = { {1,2,3}, {1,2,3}, {1,2,3} };		// Llenamos la matriz con numeros conocidos para verificar su funcionamiento.
	int mB[3][3] = { {1,1,1}, {2,1,2}, {3,2,1} };	
	int mC[3][3];										// Matriz resulsante.

	for (int i = 0; i < DIM; i++)
	{
		for (int q = 0; q < DIM; q++)
		{
			// Iremos llenando la matriz resultante con 0s para inicializarle y pero eso luego se ira sumando en el siguiente paso.
			mC[i][q] = 0;						
			for (int k = 0; k < DIM; k++)
			{
				// La ubiacion actual de la matriz resultante se llenara con la multiplicacion de las otras 2 mas el valor actual.
				mC[i][q] += mA[i][k] * mB[k][q];
			}
		}
	}

	// Llamamos a un Metodo para imprimir la matriz.
	MostrarMarizBidi(mC, DIM);
}
void DeciABinario()
{
	// Creamos un arreglo de tamaño arbitrario y una variable que posee el tamaño de ese arreglo.
	int arreglo[24];
	int arrSize = sizeof(arreglo) / sizeof(arreglo[0]);

	// Llenamos el arreglo con numeros distintos a 0 y 1.
	for (int q = 0; q < arrSize; q++)
	{
		arreglo[q] = 2;
	}

	int numInicial;			// Variable que tendra el valor del numero introducido por el usuario.
	int numResultados;		// Variable que tendra el valor del resultado al dividirlo entre 2.
	int numResiduos;		// Variable que tendra el valor del residuo.
	int i = 0;				// Contador.

	std::cout << "Ingrese un numero: "; std::cin >> numInicial;
	std::cout << std::endl;	

	numResultados = numInicial;	
	numResiduos = numInicial % 2;	// Asignamos el primer valor del residuo antes del ciclo para.

	// Mostramos parte del mensaje inicial antes del cliclo ya que se escribiran en una misma linea.
	std::cout << "El binario de " << numInicial << "es: ";

	while (numResultados > 0)
	{
	arreglo[i] = numResiduos;			// La posicion del arreglo equivalente al contador tendra como valor el residuo actual.
	numResultados /= 2;					// Dividimos el valor del resultado actual entre 2.
	numResiduos = numResultados % 2;	// Conseguimos el residuo del nuevo numero dividido anteriormente.
	i++;								// Incrementamos el contador.
	}

	/* Debido a la naturaleza de como se obtiene el binario de un numero, 
	 * para obtener el orden correcto debemos imprimir la matriz al reves.
	*/ 
	for (int p = arrSize - 1; p >= 0; p--)
	{
		// Solo imprimimos la posiciones de la matriz que tengan algun 0 o algun 1.
		if (arreglo[p] == 0 || arreglo[p] == 1)
		{
			std::cout << arreglo[p];
		}
	}

	// Concluimos la escritura en la misma linea.
	std::cout << std::endl;
}
void TrianguloAlfa()
{
	/* Sinceramente el codigo de este metodo no es mi favorito personalmente debido a que lo rehuse
	*  del triangulo de numeros, y debido a esto no comprendo muy bien como funciona exactamente por lo cual
	*  puede resultar un poco confuso, recomiendo que solo se use de referencia y se trate de entender 
	*  porque funciona como funciona.
	*/

	// Este metodo imprime un triangulo de alfabeto.

	// La razon de definir las variables fuera del Ciclo Para, es debido a que necesitamos que sus valores sean persistente.
	int i, q, k, p, n;
	char ch = 'A';
	std::cout << "Introduzca el rango: "; std::cin >> n;
	std::cout << std::endl;

	// Ciclo Para principal donde lo inicializamos en 1 para que inicie a imprimir desde 1 en vez de 0.
	for (i = 0; i < n; i++)
	{
		// Creamos un ciclo para en reverso. Que ira desde el tamaño del triangulo hasta el valor de la variable de control del ciclo for principal.
		for (q = n; q >= i; q--) std::cout << " ";

		// Creamos otro ciclo para que se encargara de imprimir las letras.
		for (k = 0; k <= i; k++) std::cout << ch++;

		ch--; // Restamos una unidad al valor del char (Debido al tipo de dato esto hace que si su valor actual es B, ahora sea A y asi).

		//Creamos otro ciclo para que imprime el resto del triangulo pero al reves completando el triangulo.
		for (p = i; p >= 1; p--) std::cout << --ch;

		// Salto de linea.
		std::cout << "\n";
		ch = 'A';
	}
}
void TrianguloNum()
{
	// Este metodo imprime un triangulo de numeros basado en un numero dado.

	// La razon de definir las variables fuera del Ciclo Para, es debido a que necesitamos que sus valores sean persistente.
	int i, q, k, p, n; 
	std::cout << "Introduzca el rango: "; std::cin >> n;
	std::cout << std::endl;

	// Ciclo Para principal donde lo inicializamos en 1 para que inicie a imprimir desde 1 en vez de 0.
	for  (i = 1; i <= n; i++)
	{
		// Imprimimos los espacios iniciales. al comenzar el triangulo habran mas espacios que numeros.
		// Esto ira cambiando a medida que el ciclo inicial se repita, por ende la condicion es que siga imprimiendo espacios
		// Siempre y cuando el la variable de control sea menor a: (Dimensiones - Valor de la variable del ciclo para principal)
		for ( q = 0; q < n - i; q++) std::cout << " ";

		// Este ciclo se encarga de imprimir la primera mitad de los numeros de la piramide.
		for ( k = 1; k <= i; k++) std::cout << k;

		// Este termina de imprimir los mismos numeros - 1 en reverso.
		for ( p = i - 1; p >= 1; p--) std::cout << p;

		// Salto de linea.
		std::cout << "\n";
	}

}
void TrianguloFibo()
{
	/* Este metodo muestra un trangulo con numeros de fibonacci */

	int n;		// Variable del rango del triangulo.
	int x = 0;	
	int y = 1;
	int z = 1; // Inizializamos en 1 ya que es mas estetico iniciar desde este numero que desde 0.

	std::cout << "Ingrese un rango: "; std::cin >> n;
	std::cout << std::endl;

	// Creamos un ciclo Para principal el cual se encargara del salto de linea y de reiniciar los valores de las variables.
	for (int i = 0; i < n; i++)
	{
		// Creamos un 2do ciclo Para encargado de mostrar los siguientes valores en la misma linea y de agregar el espaciado.
		// Nos aseguramos de imprimir el ultimo valor haciendo que la condicion de salida sea MENOR O IGUAL.
		for (int q = 0; q <= i; q++)
		{
			std::cout << z << "   ";
			z = x + y;
			x = y;
			y = z;
		}

		// Reiniciamos los valores de la serie Fiboanacci.
		x = 0;
		y = 1;
		z = 1;
		
		// Hacemos un salto de linea a la siguiente.
		std::cout << std::endl;
	}

}
void NumAPalabras()
{
	int numInicial;		// Variable donde se guardara el numero inicial
	int numInvertido;	// Variable donde se guardara el inverso de ese numero.

	std::cout << "Ingrese un numero: "; std::cin >> numInicial;
	std::cout << std::endl;

	// Invertimos el numero usando una Funcion creada previamente.
	numInvertido = InvertirNumero(numInicial);
	
	// Creamos un ciclo Para el cual tiene la misma duracion que el numero de digitos de la cifra inicial.
	// Usamos una funcion que retorna la cantidad de digitos del numero inicial.
	for (int i = 0; i < NumDeDigitos(numInicial); i++)
	{
		// Creamos una variable que sostendra el digito actual del numero invertido.
		int numHolder = numInvertido % 10;
		
		// Creamos un condicional de caso el cual imprime un mensaje en la misma linea segun el numero.
		switch (numHolder)
		{
		case 1: 
			std::cout << "Uno ";
			break;
		case 2:
			std::cout << "Dos ";
			break;
		case 3:
			std::cout << "Tres ";
			break;
		case 4:
			std::cout << "Cuatro ";
			break;
		case 5:
			std::cout << "Cinco ";
			break;
		case 6:
			std::cout << "Seis ";
			break;
		case 7:
			std::cout << "Siete ";
			break;
		case 8:
			std::cout << "Ocho ";
			break;
		case 9:
			std::cout << "Nueve ";
			break;
		case 0:
			std::cout << "Cero ";
			break;
		default:
			break;
		}

		// Dividimos el numero invertido entre 10 y continuamos el ciclo para.
		numInvertido /= 10;
	}

	// Insertamos un salto de linea opcional.
	std::cout << std::endl;
}
#pragma endregion
#pragma region Optional
void StringNombreEdad()
{
	std::string nombre;
	std::string edad;
	std::cout << "Ingrese su nombre: "; std::cin >> nombre;
	std::cout << "Ingrese su edad: "; std::cin >> edad;
	std::cout << std::endl;
	
	std::cout << "Su nombre es " << nombre << " y usted tiene " << edad << " años de edad." << std::endl;
}
void StringComparar()
{
	char key[] = "mango";
	char buffer[50];
	do
	{
		std::cout << "Cual es mi fruta favorita? " << std::endl;
		std::cin >> buffer;

	} while (strcmp(key,buffer));
	std::cout << "Correcto!";
	std::cout << std::endl;
}
#pragma endregion


int main()
{
	// FUNCIONES PRINCIPALES (Descomentar Solo 1 a la vez)
	// Fibonacci();
	// NumPrimo();
	// NumPalindrome();
	// Factorial();
	// NumAmstrong();
	// NumSumaDeDigitos();
	// InvertirNumero();
	// NumCambiar();
	// MatrizMultiplicar();
	// DeciABinario();
	// TrianguloAlfa();
	// TrianguloNum();
	// TrianguloFibo();
	// NumAPalabras();
	// StringNombreEdad();
	// StringComparar();
	system("pause");
}


