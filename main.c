#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    int opcion;
    int contador = 0;
    char continuar ='s';
    char continuar1 = 's';
    Pila dada, aux1, aux2, origen, destino,distintos,auxi,tope1,cuerpo,base,mazo,jugador1,jugador2, pilaAA, pilaBB,modelo
    ,necesarios, limite, mayores, menores, par, impar;

    inicpila(&dada);
    inicpila(&aux1);
    inicpila(&aux2);
    inicpila(&origen);
    inicpila(&destino);
    inicpila(&distintos);
    inicpila(&auxi);
    inicpila(&tope1);
    inicpila(&cuerpo);
    inicpila(&base);
    inicpila(&mazo);
    inicpila(&jugador1);
    inicpila(&jugador2);
    inicpila(&pilaAA);
    inicpila(&pilaBB);
    inicpila(&modelo);
    inicpila(&necesarios);
    inicpila(&limite);
    inicpila(&mayores);
    inicpila(&menores);
    inicpila(&par);
    inicpila(&impar);

    printf("Elige el ejercicio que deseas ver poniendo su numero: \n");

    scanf("%i", &opcion);
    switch(opcion)
    {
    case 1:

        printf("EJERCICIO 1\n");
        leer(&dada);
        leer(&dada);
        leer(&dada);
        leer(&dada);
        leer(&dada);

        apilar(&aux1,desapilar(&dada));
        apilar(&aux1,desapilar(&dada));
        apilar(&aux1,desapilar(&dada));
        apilar(&aux2,desapilar(&dada));
        apilar(&aux2,desapilar(&dada));

        mostrar(&dada);
        mostrar(&aux1);
        mostrar(&aux2);
        break;
    case 2:

        printf("EJERCICIO 2\n");

        while (continuar == 's')
        {
            leer (&origen);
            printf("Si desea ingresar mas datos ingrese la letra s, sino la n \n");
            fflush(stdin);
            scanf("%c", &continuar);
        }
        printf("PILA ORIGEN\n");
        mostrar(&origen);
        while (!pilavacia(&origen))
        {
            apilar (&destino, desapilar(&origen));

        }
        printf("PILA DESTINO\n");
        mostrar(&destino);
        break;
    case 3:
        printf("EJERCICIO 3\n");

        while(continuar == 's')
        {
            leer(&dada);
            printf("Si desea ingresar mas datos ingrese la letra s, sino la n \n");
            fflush(stdin);
            scanf("%c", &continuar);
        }
        printf("PILA DADA\n");
        mostrar(&dada);

        while(!pilavacia(&dada))
        {
            if (tope (&dada) != 8)
            {
                apilar (&distintos, desapilar(&dada));
            }
            else
            {
                apilar(&auxi, desapilar(&dada));
            }
        }
        printf("PILA DISTINTOS\n");
        mostrar(&distintos);
        break;
    case 4:
        printf("EJERCICIO 4\n");


        while(continuar == 's')
        {
            leer(&origen);
            printf("Si desea ingresar mas datos ingrese la letra s, sino la n \n");
            fflush(stdin);
            scanf("%c", &continuar);
        }
        printf("PILA ORIGEN\n");
        mostrar(&origen);

        while(!pilavacia(&origen))
        {
            apilar(&auxi, desapilar(&origen));

        }
        while(!pilavacia(&auxi))
        {
            apilar(&destino, desapilar (&auxi));

        }

        printf("PILA DESTINO\n");
        mostrar(&destino);
        break;
    case 5:
        printf("EJERCICIO 5\n");
        while(continuar == 's')
        {
            leer(&dada);
            printf("Si desea ingresar mas datos ingrese la letra s, sino la n \n");
            fflush(stdin);
            scanf("%c", &continuar);
        }
        printf("PILA SIN INVERTIR");
        mostrar(&dada);
        while(!pilavacia(&dada))
        {
            apilar(&auxi, desapilar(&dada));
        }
        while(!pilavacia(&auxi))
        {
            apilar(&aux1,desapilar(&auxi));
        }
        while(!pilavacia(&aux1))
        {
            apilar(&dada,desapilar(&aux1));
        }



        printf("PILA INVERTIDA");
        mostrar(&dada);
        break;
    case 6:
        printf("EJERCICIO 6\n");
        while(continuar == 's')
        {
            leer(&dada);
            printf("Si desea ingresar mas datos ingrese la letra s, sino la n \n");
            fflush(stdin);
            scanf("%c", &continuar);
        }
        mostrar(&dada);
        apilar(&tope1, desapilar(&dada));



        while (!pilavacia(&dada))
        {
            apilar(&cuerpo, desapilar(&dada));
        }
        apilar(&dada, desapilar(&tope1));
        while (!pilavacia (&cuerpo))
        {
            apilar(&dada, desapilar(&cuerpo));

        }


        printf("PILA DADA");
        mostrar(&dada);
        break;
    case 7:
        printf("EJERCICIO 7\n");
        while(continuar == 's')
        {
            leer(&dada);
            printf("Si desea ingresar mas datos ingrese la letra s, sino la n \n");
            fflush(stdin);
            scanf("%c", &continuar);
        }
        mostrar(&dada);
        while (!pilavacia(&dada))
        {
            apilar(&cuerpo, desapilar(&dada));
        }

        apilar(&base, desapilar(&cuerpo));

        while(!pilavacia(&cuerpo))
        {
            apilar(&dada, desapilar(&cuerpo));
        }
        while (!pilavacia(&base))
        {
            apilar(&dada, desapilar(&base));
        }
        printf("PILA DADA");
        mostrar(&dada);
        break;
    case 8:
        printf("EJERCICIO 8\n");
        while(continuar == 's')
        {
            leer(&mazo);
            printf("Si desea ingresar mas datos ingrese la letra s, sino la n \n");
            fflush(stdin);
            scanf("%c", &continuar);
        }
        printf("MAZO");
        mostrar(&mazo);

        while(!pilavacia(&mazo))
        {
            apilar(&jugador1, desapilar(&mazo));
            if (!pilavacia(&mazo))
            {
                apilar(&jugador2, desapilar(&mazo));
            }
        }

        printf("JUGADOR 1");
        mostrar(&jugador1);
        printf("JUGADOR 2");
        mostrar(&jugador2);
        break;
    case 9:
        printf("EJERCICIO 9 \n");

        printf("INGRESE LOS VALORES QUE IRAN EN LA PILA A\n");

        while(continuar == 's')
        {
            leer(&pilaAA);
            printf("Si desea ingresar mas datos ingrese la letra s, sino la n \n");
            fflush(stdin);
            scanf("%c", &continuar);
        }


        printf("INGRESE LOS VALORES QUE IRAN EN LA PILA B\n");
        while(continuar1 == 's')
        {
            leer(&pilaBB);
            printf("Si desea ingresar mas datos ingrese la letra s, sino la n \n");
            fflush(stdin);
            scanf("%c", &continuar1);
        }


        while((!pilavacia(&pilaAA)) && (!pilavacia(&pilaBB)))
        {
            apilar(&aux1, desapilar(&pilaAA));
            apilar(&aux1, desapilar(&pilaBB));
        }

        if(pilavacia(&pilaAA) && pilavacia(&pilaBB))
        {
            printf("Ambas pilas son iguales en cantidad\n");

        }
        else
        {

            printf("Ambas pilas no son iguales en cantidad\n");

        }
        break;
    case 10:

        printf("INGRESE LOS VALORES QUE IRAN EN LA PILA A\n");

        while(continuar == 's')
        {
            leer(&pilaAA);
            printf("Si desea ingresar mas datos ingrese la letra s, sino la n \n");
            fflush(stdin);
            scanf("%c", &continuar);
        }


        printf("INGRESE LOS VALORES QUE IRAN EN LA PILA B\n");
        while(continuar1 == 's')
        {
            leer(&pilaBB);
            printf("Si desea ingresar mas datos ingrese la letra s, sino la n \n");
            fflush(stdin);
            scanf("%c", &continuar1);
        }


        while (tope(&pilaAA) ==  tope(&pilaBB) && !pilavacia(&pilaAA) && !pilavacia (&pilaBB))
        {
            apilar(&aux1, desapilar(&pilaBB));
            apilar(&aux2, desapilar(&pilaAA));
        }



        if (tope(&pilaAA) != tope(&pilaBB))
        {
            printf("Las pilas A Y B no son iguales");

        }
        else
        {

            printf("Las pilas A Y B  son iguales");
        }

        break;
    case 11:
        printf("LOS DATOS QUE USTED INGRESE IRAN A LA PILA MODELO\n");
        while(continuar == 's')
        {
            leer(&modelo);
            printf("Si desea ingresar mas datos ingrese la letra s, sino la n \n");
            fflush(stdin);
            scanf("%c", &continuar);
        }
        printf("LOS DATOS DE LA PILA MODELO SON\n");
        mostrar(&modelo);
        printf("LOS DATOS QUE USTED INGRESE IRAN A LA PILA DADA\n");
        while(continuar1 == 's')
        {
            leer(&dada);
            printf("Si desea ingresar mas datos ingrese la letra s, sino la n \n");
            fflush(stdin);
            scanf("%c", &continuar1);
        }
        printf("LOS DATOS DE LA PILA DADA SON\n");
        mostrar(&dada);

        while(!pilavacia(&modelo) && !pilavacia(&dada))
        {
            if(tope(&dada) != tope(&modelo))
            {
                apilar(&aux1, desapilar(&dada));
            }
            else
            {
                apilar(&aux2, desapilar(&dada));

            }

        }
        while(!pilavacia(&aux1))
        {
            apilar(&dada, desapilar(&aux1));
        }
        printf("PILA DADA QUEDO CON LOS SIGUIENTES ELEMENTOS");
        mostrar(&dada);
        break;
    case 12:
        printf("EJERCICIO 12\n");

        printf("LOS DATOS QUE USTED INGRESE IRAN A LA PILA MODELO\n");
        while(continuar == 's')
        {
            leer(&modelo);
            printf("Si desea ingresar mas datos ingrese la letra s, sino la n \n");
            fflush(stdin);
            scanf("%c", &continuar);
        }
        printf("LOS DATOS DE LA PILA MODELO SON\n");
        mostrar(&modelo);
        printf("LOS DATOS QUE USTED INGRESE IRAN A LA PILA DADA\n");
        while(continuar1 == 's')
        {
            leer(&dada);
            printf("Si desea ingresar mas datos ingrese la letra s, sino la n \n");
            fflush(stdin);
            scanf("%c", &continuar1);
        }
        printf("LOS DATOS DE LA PILA DADA SON\n");
        mostrar(&dada);

        while(!pilavacia(&modelo))
        {

            while(!pilavacia(&dada))
            {
                if(tope(&dada) != tope(&modelo))
                {
                    apilar(&necesarios, desapilar(&dada));


                }
                else
                {
                    desapilar(&dada);
                }
            }
            while(!pilavacia(&necesarios))
            {
                apilar(&dada, desapilar(&necesarios));

            }
            desapilar(&modelo);
        }
        printf("LOS DATOS QUE QUEDARON EN LA PILA DADA SON: \n ");
        mostrar(&dada);
        break;
    case 13:
        printf("EJERCICIO 13\n");
        printf("LOS DATOS QUE USTED INGRESE IRAN A LA PILA LIMITE\n");
        while(continuar == 's')
        {
            leer(&limite);
            printf("Si desea ingresar mas datos ingrese la letra s, sino la n \n");
            fflush(stdin);
            scanf("%c", &continuar);
        }
        printf("LOS DATOS DE LA PILA LIMITE SON\n");
        mostrar(&limite);
        printf("LOS DATOS QUE USTED INGRESE IRAN A LA PILA DADA\n");
        while(continuar1 == 's')

        {
            leer(&dada);
            printf("Si desea ingresar mas datos ingrese la letra s, sino la n \n");
            fflush(stdin);
            scanf("%c", &continuar1);
        }
        printf("LOS DATOS DE LA PILA DADA SON\n");
        mostrar(&dada);

        while(!pilavacia(&dada))
        {
            if(tope(&dada) >= tope(&limite))
            {

                apilar(&mayores, desapilar(&dada));
            }
            else
            {
                apilar(&menores, desapilar(&dada));
            }


        }


        printf("LOS MAYORES AL TOPE SON: \n");
        mostrar(&mayores);

        printf("LOS MENORES AL TOPE SON: \n");
        mostrar(&menores);
        break;
    case 14:
        printf("Ejercicio 14\n");
        printf("LOS DATOS QUE USTED INGRESE IRAN A LA PILA DADA\n");
        while(continuar == 's')
        {
            contador++;
            leer(&dada);
            printf("Si desea ingresar mas datos ingrese la letra s, sino la n \n");
            fflush(stdin);
            scanf("%c", &continuar);

        }
        printf("LOS DATOS DE LA PILA DADA SON\n");
        mostrar(&dada);
        if (contador % 2 == 0)
        {
            printf("La cantidad de elementos de la pila es par");

        }
        if(contador % 2 != 0)
        {
            printf("La cantidad de elementos es impar");

        }
        break;
    case 15:
        printf("Ejercicio 15\n");
        printf("La respuesta es: \n");
        printf("La condicion del ciclo es que mientras Pila1 contenga datos, los datos de Descarte se van a desapilar y se van a apilar en Pila2 \n");
        break;
    case 16:
        printf("Ejercicio 16\n");
        printf("La respuesta es: \n");
        printf("Si ese codigo funcionaria, lo que hace es que mientras Pila1 contenga datos va a preguntar si el tope de pila 1 es igual a 5, si esto es asi los datos de Pila1 se desapilan, se apilan en Aux y luego se desapilan de Aux y se apilan en Result, igual no funciona porque le falta un else al if para que el codigo termine.");
        break;
    case 17:
        printf("Ejercicio 17\n");
        printf("La respuesta es: \n");
        printf("No resuelve el problema planteado. \n");
        printf("Los errores que hay en el problema son: \n");
        printf("El if tendria que ir dentro del while,dentro del while tendria que haber un !pilavacia(&origen) y dentro de el if tendria que haber un tope(&origen!=5), la !pilavacia tiene la v en Mayuscula\n");

        while(continuar == 's')
        {
            contador++;
            leer(&origen);
            printf("Si desea ingresar mas datos ingrese la letra s, sino la n \n");
            fflush(stdin);
            scanf("%c", &continuar);

        }
        while(!pilavacia(&origen))
        {
            if( tope(&origen) != 5)
            {
                apilar(&distintos, desapilar(&origen));

            }
            else
            {
                apilar(&aux1, desapilar(&origen));

            }

        }

        printf("Los numeros distintos a 5 son: \n");
        mostrar(&distintos);


        printf("El programa contiene una pila origen que es donde se almacenan primero los datos, una pila distinto donde se almacenan los datos distintos de 5, y un auxiliar donde se van los datos iguales a 5, posee un while para ingresar los datos a evaluar, otro para que mientras la pila origen tenga datos funcionen los if, un if que se ejecute si el tope de origen es distinto de 5 y un else que se ejecute si el tope de origen es 5");
        break;
        case 18:
        printf("La condicion del ciclo es que se ejecute mientras Pila1 y Pila2 contengan datos los dos.\n");
        printf("Al finalizar el ciclo puede pasar que ambas pilas no tengan datos, que la pila1 no tenga datos pero la 2 si o que la pila 2 no tenga datos pero la pila1 si.\n");
        return  0;
    }

}



















/*















*/


