#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct cliente{

    int nCliente;
    int nip;
    char nombre[50];
    char apellido[50];
    float saldo;
    int movimientos;

};

void crear_cuenta(struct cliente nuevo){



}
int main(){

int intento = 3;
int option;
int menu;

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

case 1:
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
