#include<iostream>
#include <conio.h>

using namespace std;


int main() {
    int factorial;
    int num1, num2;
    int edad, opc, dia;
    int n, i;


    cout << "Bienvenido elija una de las opciones disponibles" << endl;
    cout << "***  opcion 1 : verificacion de edad  ***" << endl;
    cout << "***  opcion 2 : numero mayor o menor  *** " << endl;
    cout << "***  opcion 3 : numero par e impar  *** " << endl;
    cout << "***  opcion 4 : Factorial de un numeor  ***" << endl;
    cout << "***  opcion 5 : impares con bucle  ***" << endl;
    cout << "***  opcion 6 : Dia de la semana  *** \n" << endl;
    cout << " ingrese numero : " << endl;
    cin >> opc;


    switch (opc) {
        case 1 :
            cout << "ingrese su edad: " << endl;
            cin >> edad;

            if (edad >= 18) {
                cout << edad << ":felicidades usted es mayor de edad" << endl;

            } else if (edad < 18) {
                cout << edad << ":es menor de edad" << endl;
            }
            break;

        case 2:
            cout << "ingrese el primer  numero : " << endl;
            cin >> num1;

            cout << "ingrese el segundo numero" << endl;
            cin >> num2;

            if (num1 <= num2) {
                cout << num1 << ":es menor que:" << num2 << endl;
            } else if (num1 >= num2) {
                cout << num1 << ":es mayor que: " << num2 << endl;
            }
            break;

        case 3:
            cout << "ingrese un numero entero" << endl;
            cin >> num1;

            if (num1 % 2 == 0) {
                cout << num1 << ":es un numero par" << endl;
            } else if (num1 % 2 > 0) {
                cout << num1 << ":es un numero impar " << endl;
            }
            break;

        case 4:
            cout << "introduzca un numero" << endl;
            cin >> n;

            factorial = 1;

            for (i = 1; i <= n; i++)
                factorial << factorial * i;

            cout << endl << "Factorial de " << n << "->" << factorial << endl;
            system("pause");

            break;

        case 5 :
            cout << "introduzca un numero mayor a 10 y menor que 30  : " << endl;


            break;

        case 6:
            cout << "ingrese un numero de la semana(1-6)\n: ";
            cin >> n;
            switch (n) {
                case 1: {
                    cout << "lunes";
                    break;
                }
                case 2: {
                    cout << "martes";
                    break;
                }
                case 3: {
                    cout << "miercoles";
                    break;
                }
                case 4: {
                    cout << "jueves ";
                    break;
                }
                case 5: {
                    cout << "sabado";
                    break;
                }
                case 6: {
                    cout << "domingo";
                    break;
                }


            }
            while (opc != 6);


            return 0;
    }
}