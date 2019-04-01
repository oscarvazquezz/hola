#include <iostream>

using namespace std;

int corredores[5];
void ingresarDatos ();
int conversion(int min);
float  velocidad (float suma);


int main(int argc, char** argv) 
{
	  ingresarDatos ();
	return 0;
}

void ingresarDatos ()
{
	 int min,seg,i;
     float suma,promedio,acum=0,corredores_rapidos=0;
     for (i=0;i<5;i++)
     {
       	 do
         {
	         cout << "ingrese los minutos del corredor "<<i+1<<endl;
	         cin >>min;
	     }while(min<0);
		 do 
		 {
		     cout << "ingrese los segundos"<<endl;
		     cin>>seg;
	     }while(seg<0 	|| seg>=60);
     
	     suma=conversion(min)+seg;
	     
	     velocidad (suma);
	     cout << "El tiempo total del corredor "<<i+1<<" es de: "<<suma<<endl;
	     cout << "La velocidad del corredor es de: "<<velocidad (suma)<<endl;
	     cout << "--------------------------------------------------------"<<endl;
		 if(velocidad(suma)>=6.52174)
		 {
		 	 corredores_rapidos=corredores_rapidos+1;
			 acum=acum+velocidad(suma);		 
		 }
	 }
	 promedio=acum/corredores_rapidos;
	 cout << "El promedio de la velocidad de los mejores corredores es de: "<<endl<<promedio;		
}

int conversion(int min)
{
	 int conversion;
	 conversion=(min*60);
	 return conversion;
}

float velocidad (float suma)
{
	 float velocidad;
	 int distancia=1500;
	 velocidad= distancia/suma;
	 return velocidad;
}
