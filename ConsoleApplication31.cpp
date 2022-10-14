// ConsoleApplication31.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <stdio.h>

//funciones
int suma(int x, int y);
int resta(int x, int y);
int division(int x, int y);
int multiplicacion(int x, int y);


int main()
{
    int num, num2,opcion;
    system("cls");

    printf("\t ***CALCULADORA*** \n");
    printf(" 1.-Suma \n 2.-Resta \n 3.-Division \n 4.-Multiplicacion \n 5.-Salir \n");
    scanf_s("%d", &opcion);
    switch (opcion)
    {
    case 1:
        printf("ingrese 2 numeros \n");
        scanf_s("%d \n %d", &num, &num2);
        printf("el resultado es: %d \n", suma(num, num2));
        system("pause");
        return main();
        break;

    case 2:
        printf("ingrese 2 numeros \n");
        scanf_s("%d \n %d", &num, &num2);
        printf("el resultado es: %d \n", resta(num, num2));
        system("pause");
        return main();
        break;

    case 3:
        printf("ingrese 2 numeros \n");
        scanf_s("%d \n %d", &num, &num2);
        printf("el resultado es: %d \n", division(num, num2));
        system("pause");
        return main();
        break;

    case 4:
        printf("ingrese 2 numeros \n");
        scanf_s("%d \n %d", &num, &num2);
        printf("el resultado es: %d \n", multiplicacion(num, num2));
        system("pause");
        return main();
        break; 

    case 5:
        printf("saliendo....\n");
        break;

    default:
        printf("opcion incorrecta \n");
        return main();
        break;
    }
    system("pause");
}

int suma(int x, int y)
{
    int res;
        res = x + y;
    return res;
}
int resta(int x, int y)
{
    int res;
    res = x - y;
    return res;
}
int division(int x, int y)
{
    int res;
    res = x / y;
    return res;
}
int multiplicacion(int x, int y)
{
    int res;
    res = x * y;
    return res;
}