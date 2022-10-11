/*P4 LISTA DE EMPLEADOS
Nombre:  Flores Calvillo Kenneth Iran
Grupo: 2APGM
Fecha: 14/05/16
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
char opcion=('v');
char opc= ('V');

sueldo(){


                                        float sueldo[10], renglon;
                                        int  x, y, menor;
                                        char otro='s';

                                           while (otro=='s')
                                                   {
                                              system ("COLOR F0");
                                  gotoxy(20,4); printf ("Ingresa Sueldos");

                                        renglon=renglon+1;
                                  gotoxy(21,7+renglon); scanf("%f", &sueldo);

                                    gotoxy(20,16); printf ("Desea capturar otro dato s/n");
                                  gotoxy(49,16); otro=getche();
                                         }   //Fin ciclo While




                                        for (x=1; x>=5; x++){
                                        for (y=1; y>=5; y++){

                                       if (sueldo[y]>sueldo[y+1]){
                                              menor=sueldo[y];
                                              sueldo[y]=sueldo[y+1];
                                              sueldo[y+1]=menor;



                                        }//Fin del for x
                                        }//Fin del for y
                                        }// Fin de la condicion

                                        for (y=1; y>=5; y++){
                                        gotoxy (40,16); printf("%f, ", sueldo[x]);
                                        }//Fin del ciclo for
                                        }// Fin del  Metodo


Empleados ()

                                             {// Inicio del metodo "Empleados"

                                  int  Edad,  persona[16];
                                        char Nom[10],Dom[10],otro='s';
                                          clrscr  ();
                                     while (otro=='s')
                                             {
                                     
                                        system ("COLOR F0");
                              gotoxy (20,4); printf ("Ingresando datos....");


                              gotoxy (20,8); printf ("Persona");


                              gotoxy (20,10); printf (" Nombre     : ");
                              gotoxy (20,12); printf (" Edad       : ");
                              gotoxy (20,14); printf (" Domicilio  : ");
                                      fflush (stdin);

                              gotoxy (34,10); scanf ("%s", &Nom);
                              gotoxy (34,12); scanf ("%i", &Edad);
                              gotoxy (34,14); scanf ("%s", &Dom);

                        gotoxy(20,16); printf("desea ingresar otro dato s/n");
                              gotoxy (50,16); otro=getche();
                                             }
                                             }

main (){

 while (opc=='v' || opc=='V')
                          {

                          clrscr  ();
                             system ("COLOR F0");
gotoxy (20,2); printf ("MENU DE OPCIONES");
gotoxy (20,4);printf("1) Sueldos");
gotoxy (20,6);printf("2) Registros de Empleados");
gotoxy (20,8);printf("Elije Opcion");
gotoxy (33,8); opcion = getche();


                             switch (opcion)
                                    { // inicio de Switch

                                 case '1':
                       clrscr();  sueldo(); break;


                                 case '2':
                       clrscr();  Empleados(); break;



                                 default:

                    clrscr(); gotoxy (26,16); printf ("Error... opcion no valida"); break;

                                 }//cierra de switch()
                                    system ("COLOR F0");
                    gotoxy (45,22); printf("[v] Para Volver a Menu");
                     gotoxy (46,22);           opc= getche();
                              }

                              clrscr ();
                                system ("COLOR F0");
                     gotoxy (35,16); printf ("Que tenga un Lindo Dia :D");
                               getch();}    //Fin del programa :D



