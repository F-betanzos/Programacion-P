# incluye  < stdio.h >
int  main ()
{
     / * Cesar Méndez
    Equipo 1
    21 abr 21
    Programa 4. Pide dos valores reales, calcula multiplica, divide y muestra resultado
    * /

   cebador flotante , segundo, multiplica, división;
    printf ( " \ n \ n Programa 3 " );
    printf ( " \ n \ n Saca el promedio de valores reales " );
    printf ( " \ n \ n Dame el primer valor real " );
    scanf ( " % f " , & cebador); // Permite capturar un valor real y lo guarda en variable primer
    printf ( " \ n \ n Dame el segundo valor real " );
    scanf ( " % f " , & segundo); // Permite capturar un valor real y lo guarda en variable primer
    multiplica = cebador * segundo;
    division = cebador / segundo;
    printf ( " \ n El producto es % f " , multiplica);
    printf ( " \ n El cociente es % f " , división);

    return  0 ;
}
