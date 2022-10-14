#include <iostream>
#include <conio.h>
#include <stdio.h>

//declaracion de funcion
int suma(int x, int y);
int resta (int x, int y);
int division(int x, int y);
int multiplicacion(int x, int y);

int main()
{
    int num, num2,opcion;

    printf("\t ***CALCULADORA*** \n");
    printf(" 1.-Suma \n 2.-Resta \n 3.-Division \n 4.-Multiplicacion \n 5.-Salir \n 6.-Limpiar Pantalla \n");
    scanf_s("%d", &opcion);

    switch (opcion)
    {

    case 1:
        printf("ingrese dos numeros \n");
        scanf_s("%d \n %d", &num, &num2);
        printf("\n el resultado es: %d \n", suma(num, num2));
        system("pause");
        system("cls");
        return main();
        break;

    case 2:
        printf("ingrese dos numeros \n");
        scanf_s("%d \n %d", &num, &num2);
        printf("\n el resultado es: %d \n", resta(num, num2));
        return main();

        break;

    case 3:
        printf("ingrese dos numeros \n");
        scanf_s("%d \n %d", &num, &num2);
        if (division(num, num2) != 0)
        {
            printf("\n el resultado es: %d \n", division(num, num2));
        }
        else
        {
            printf("no se puede dividir entre 0 \n");
        }
        return main();
        break;

    case 4:
        printf("ingrese dos numeros \n");
        scanf_s("%d \n %d", &num, &num2);
        printf("\n el resultado es: %d \n", multiplicacion(num, num2));
        return main();
        break;

    case 5:
        printf("saliendo...\n");
        break;

    case 6:
        system("cls");
        return main();
        break;

    default:
        printf("opcion incorrecta \n");
        return main();
        break;
    } 
    
    system("pause");
}    
//definicion de la funcion
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
    if (x != 0 || y != 0)
    {
        res = x / y;
    }
    else
    {
        res = 0;
    }
    return res;
}

int multiplicacion(int x, int y)
{
    int res;
    res = x * y;
    return res;
}