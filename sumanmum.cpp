/*La instruccion include le indica al procesador que libreria vamos a usar, en este caso utilizaremos la libreria iostream que es una libreria para poder tener acceso a los dispositivos estandar de entrada y salida de datos.*/
#include<iostream>
/*Da acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la libreria estandar.*/
Uso delespacio de nombresSTD;
/*Es la funcion principal que sirve como punto de partida para la ejecucion del programa.*/
int main()
{
/*Sirve para declarar una variable de tipo decimal.*/
  flotar FMGA_y,s=0,0;
/*Sirve para declarar una variable de tipo entero.*/
  inti=0,FMGA_c;
cout<<"Ingrese el valor de FMGA_c:";
  cin>>FMGA_c;
/*Hace que el conjunto de instrucciones se ejecuten al menos una vez.*/
  hacer{

cout<<"Ingrese el valor de FMGA_y:";
  cin>>FMGA_y;
  i=i+1;
  s=s+FMGA_y;

/*Comprueba si cumple cierta condicion ejecutandose una y otra vez hasta que deje de cumplirse.*/
 }while(i<FMGA_c);

 cout<<"La suma de los numeros fue: "<<s<<endl;
/*Finaliza la ejecucion de una funcion y devuelve el control a la funcion de llamada.*/
  volver0;

}
