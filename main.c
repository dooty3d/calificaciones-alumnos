#include <stdio.h>
 #include <string.h>
 #include <conio.h>
 #include <stdlib.h>
 #include <windows.h>

   	struct persona {
			char nombre[30], materia[7][30], ncontrol[7][7];
			float calif[7];
	  };
	struct persona alumno;
	char opcion,pausa,cad2[80];

	FILE *entrada,*salida;

	void gotoxy(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
 }
	main () {
	    system ("cls"); /*clrscr ();  ms dos is correct but not working here*/
		  gotoxy (10,2); printf ("\a UNIVERSIDAD NACIONAL AUTONOMA DE MEXICO");
		  gotoxy (25,4); printf ("FACULTAD DE CONTADURIA Y ADMINISTRACION \n");
printf ("     |||||||||||||||||||  ||||||||||||||||||||          ||||||||\n");
printf ("     #################||  ###################|         ########|||\n");
printf ("     #################||  ###################|       #####   ####||\n");
printf ("     ####                 ####                      ####|     ####||\n");
printf ("     ####                 ####                     ####|       ####|\n");
printf ("     ####                 ####                     ####|       ####|\n");
printf ("     ####||||||||         ####                     ####|       ####|\n");
printf ("     ###########|         ####                     ################|\n");
printf ("     ###########|         ####                     ################|\n");
printf ("     ####                 ####                     ####|       ####|\n");
printf ("     ####                 ####                     ####|       ####|\n");
printf ("     ####                 ####                     ####|       ####|\n");
printf ("     ####                 ####                     ####|       ####|\n");
printf ("     ####                 ####||||||||||||||||     ####|       ####|\n");
printf ("     ####                 ###################|     ####|       ####|\n");
printf ("     ####                 ###################|     ####|       ####|\n");
printf ("     ²²²²                 ²²²²²²²²²²²²²²²²²²²±     ²²²²±       ²²²²±\n");

		  gotoxy (10,20); printf ("\n  Nombre del Alumno:");
		  gets(alumno.nombre);
		 if ((salida=fopen(alumno.nombre,"rb"))==NULL)
		  {
		  fwrite (&alumno,sizeof(alumno),1,salida);
		  fclose (salida);
		   funcion1 ();
		   }
		   else
			   fclose (salida);
			   funcion1 ();
			   return 0;
		   }

		  funcion1 (){
		  int a=1;
          system ("cls"); /*clrscr ();  ms dos is correct but not working here*/
		  gotoxy (35,5); printf ("MENU");
		  gotoxy (35,10); printf ("1.Alta");
		  gotoxy (35,11); printf ("2.Baja");
		  gotoxy (35,12);printf ("3.Busqueda");
		  gotoxy (35,13);printf ("4.Lista");
		  gotoxy (35,14);printf ("5.stop");
gotoxy (10,20); printf ("\n CUAL ES TU OPCION?");
				opcion=getch ();

system ("cls"); /*clrscr ();  ms dos is correct but not working here*/
		   switch (opcion){
				case '1':
						 salida=fopen(alumno.nombre,"wb");
						gotoxy (35,5); printf ("Dar materias de alta\n");
						 for (a=1;a<7;++a){
						 printf ("%d.",a);
						 printf ("Clave de la Materia: ");
						 gets (alumno.ncontrol[a]);
						 printf ("Materia: ");
						 gets (alumno.materia[a]);
						 printf ("Calificacion: ");
						 alumno.calif[a]=atof(gets(cad2));}
						 fwrite (&alumno,sizeof(alumno),1,salida);
						 fclose(salida);
						 return funcion1 ();

			   case '2':
						gotoxy (35,3);printf ("Dar Materias de Baja \n");
						gotoxy (1,5);printf ("Introdusca el número de la \n");
						printf ("materia que desea dar de baja: ");
						scanf ("%d",&a);
						gotoxy (1,8); printf ("De un enter para dar de baja o ");
						printf ("escriba los datos para cambiar\n");
						salida=fopen(alumno.nombre,"wb");
						printf ("%d.Numero de materia \n",a);
						printf ("Clave de la Materia: ");
						gets (alumno.ncontrol[a]);
						printf ("Materia: ");
						gets (alumno.materia[a]);
						printf ("Calificacion: ");
						alumno.calif[a]=atof(gets(cad2));
						fwrite (&alumno,sizeof(alumno),1,salida);
						fclose(salida);
						return funcion1 ();
			case '3':
						gotoxy (35,4); printf ("Busqueda de Alumno Historial \n");
						 printf ("Introduzca el nombre del Alumno: ");
						 gets (alumno.nombre);
						system ("cls"); /*clrscr ();  ms dos is correct but not working here*/
						 entrada=fopen(alumno.nombre,"rb");
						 while (fread(&alumno,sizeof(alumno),1,entrada)==1){
						 gotoxy (35,1);printf ("Nombre=%s \n",alumno.nombre);

						 for (a=1;a<7;++a){
						 printf ("%d.",a);
						 printf ("Clave=%s \n",alumno.ncontrol[a]);
						 printf ("Materia=%s \n",alumno.materia[a]);
						 printf ("Calificación=%.2f \n",alumno.calif[a]);}

						gotoxy (5,22);printf ("Teclea otra vez tu nombre para volver\n");
						gotoxy (5,23);printf ("a cargar tus datos en memoria: ");
						 gets (alumno.nombre);
						 }

						 fclose(entrada);
						 return funcion1 ();

				case '4':
						  printf ("Lista\n");
						 entrada=fopen(alumno.nombre,"rb");
						 while (fread(&alumno,sizeof(alumno),1,entrada)==1){
					printf ("Nombre=%s \n",alumno.nombre);

						 for (a=1;a<7;++a){
						 printf ("%d.",a);
						 printf ("Clave=%s \n",alumno.ncontrol[a]);
						 printf ("Materia=%s \n",alumno.materia[a]);
						 printf ("Calificaci=%.2f \n",alumno.calif[a]);
						 }
						 printf ("Presiona Cualquier Tecla para Continuar");
						 pausa=getch();
						 }
						 fclose(entrada);
						 return funcion1 ();
}
}






/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}*/
