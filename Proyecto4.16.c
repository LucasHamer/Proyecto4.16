#include<stdio.h>
#include<stdlib.h>

int main()
{
        int codigo,cod1,unidad,caja10,precio;
        float descuento;
        printf("Ingrese el codigo de un articulo: ");
        scanf("%d",&codigo);

        switch(codigo)
        {
            case 1:
            case 10:
            case 100:
                printf("Ingrese la cantidad a comprar: ");
                scanf("%d",&cod1);
                unidad=cod1*10;
                printf("ARTICULO %d CANTIDAD %d IMPORTE A PAGAR $ %d",codigo,cod1,unidad);
                break;
            case 2:
            case 22:
            case 222:
                printf("Ingrese la cantidad a comprar: ");
                scanf("%d",&cod1);
                caja10=cod1/10;
                unidad=cod1%10;
                precio=(caja10*65)+(unidad*7);
                printf("ARTICULO %d CANTIDAD %d IMPORTE A PAGAR $ %d",codigo,cod1,precio);
                break;
            case 3:
            case 33:
                printf("Ingrese la cantidad a comprar: ");
                scanf("%d",&cod1);
                precio=cod1*3;

                if(cod1>10)
                {
                    descuento=(float)precio-precio*0.1;
                    printf("ARTICULO %d CANTIDAD %d IMPORTE A PAGAR $ %0.2f",codigo,cod1,descuento);
                }
                else
                {
                    printf("ARTICULO %d CANTIDAD %d IMPORTE A PAGAR $ %d",codigo,cod1,precio);
                }
                break;
            case 4:
            case 44:
                printf("Ingrese la cantidad a comprar: ");
                scanf("%d",&cod1);
                precio=cod1*1;
                printf("ARTICULO %d CANTIDAD %d IMPORTE A PAGAR $ %d",codigo,cod1,precio);
            default:
                printf("Codigo erroneo");
        }
        return 0;
}
