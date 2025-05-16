#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int verificar(float X)//Funcion void que contiene una respuesta dependiendo del valor ingresado por el usuario
{
    if(X > 0)
    {
    printf("La cantidad ingresada es valida\n");
    if( X == 0)
        printf("La cantidad ingresada es 0\n");
     return 1;
    }else
    {
     printf("La cantidad ingresada es NEGATIVA\n");
     return 101;
    }
    return 0;
}

struct cliente{

    int nCliente;
    int nip;
    char nombre[50];
    char apellido[50];
    float saldo;
    int movimientos;

};

void consultarsaldo(struct cliente finiquito){

    printf("Su saldo es:\t%f\n", finiquito.saldo);

}
int main(){

int intento = 3;
int option;
int menu;
int amount;
float balance;
int v;

do{

printf("Menu principal");
    printf("\nSeleccione una opcion");
    printf("\n1. Login/Iniciar sesion\n");
    printf("2. Busqueda\n");
    printf("3. Deposito\n");
    printf("4. Crear Cuenta\n");
    printf("5. Salir\n");
    printf("6. Guardar o Exportar\n");
    printf("Seleccionar una opcion: ");
    scanf("%d", &menu);


switch(menu){

do{

case 1: printf("Ingrese su numero de cuenta: \t\n");
    scanf("%d", nCliente);
    printf("Ingrese su nip: \t\n");
    scanf("%d", &nip);

      if(nCliente = 0 && nip = 0){

        printf("Que accion desea realizar?: \t\n");
        printf("1. Consultar Saldo\n");
        printf("2. Retiro\n");
        printf("3. Salir\n");
        printf("Elija una opcion: \t");
        scanf("%d", &option);

switch(option){

case 1: consultarsaldo[];
    break;

case 2: printf("\nIngrese la cantidad a retirar: ", balance);
        scanf("%f", &amount);
        v= verificar(amount);
        while(v != 1)
            {
            scanf("%f", &amount);
            v= verificar(amount);
        }
        balance= balance - amount;

        printf("\nSu nuevo saldo es %f\n", balance);
        break;

        default: printf("\nEse numero no pertenece a las opciones ingresa un numero valido\n\n");
        break;
}
}else{
     printf("\nEl PIN ingresado es incorrecto, intentelo de nuevo\n");
     intento --;
}
}while(intento > 0);

    break;

case 2:
    break;

case 3:
    break;

case 4:
    break;

case 5://Este se queda en blanco
    break;

case 6:
    break;

default: printf("\nEse numero no pertenece a las opciones ingresa un numero valido\n\n");

}
}while(menu !=5);

return 0;
}
