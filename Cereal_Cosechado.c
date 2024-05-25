
#include<stdio.h>

void registroToneladas();
float promedioAnual(int[],int);
int superiorPromedio(int[],int);
void mesSuperior(int[],int);

int main()
{

 registroToneladas();
	
 return 0;	
}

void registroToneladas() //Función para registrar de incio las toneladas anuales.
{
	int i,q,x;
	int elem[12];
  printf("Toneladas por mes:\n");	
  for(i=0;i<12;i++)
  {
	printf("Mes %d ",i+1);
	scanf("%d",&elem[i]);
	  
  }	
  
do{ 
  
    do{ 
  printf("\nEliga una opcion: \n\n");
  printf("1:Promedio anual de toneladas cosechasdas.\n");
  printf("2:Cosechas superiores al promedio anual.\n");
  printf("3:Mes de mayor produccion de toneladas.\n\n");
  printf("Opcion: ");
  scanf("%d",&q);
  
  if(q<1 || q>3)
  {
	printf("Opcion no valida...\n"); 
  }
  
  }while(q<1 || q>3); 


   switch(q)
  {
	case 1:
	{
		printf("%.2f",promedioAnual(elem,i));
		break;
	}  
	
	case 2:
	{
		printf("%d",superiorPromedio(elem,i));
	   	break;
	}
	
	case 3:
	{
		mesSuperior(elem,i);
		break;
		
		
	}
  }
     printf("\nDesea realizar otra accion: 1=SI. Otra tecla para NO. Opcion: ");
     scanf("%d",&x);
  
 }while(x==1);  
}


float promedioAnual(int q[],int v)
{
	float total=0,promedio=0;
	
	for(int j=0;j<v;j++)
	{
		promedio=promedio+q[j];
		total=promedio/v;
	}
	printf("El promedio anual de toneladas cosechadas es: ");
	return total;
	//printf("%d",q[5]);
      
}

int superiorPromedio(int mat[],int iter)
{
	float total=0,promedio=0;
	int mesesSuper=0;
	
	for(int j=0;j<iter;j++)
	{
		promedio=promedio+mat[j];
		total=promedio/iter;
		
	}
	printf("Promedio anula %.2f: ",total);
	printf("\n");
	
	for(int i=0;i<iter;i++)
	{
		if(mat[i]>total)
		{
			mesesSuper++;
			printf("Mes %d con un total de toneladas %d: ",i+1,mat[i]);
			printf("\n");
		}
	}
	printf("\nTotal de meses que superaron el promedio anual: ");
	return mesesSuper;;
}

void mesSuperior(int sup[],int iter)
{
	int may=0;
	int i,j;
	for(i=0;i<iter;i++)
	{
		if(sup[i]>may)
		{
		  may=sup[i];
		  j=i;
		  
	    }

	}

	printf("Mes en el que se produjo el mayor número de toneladas: Mes %d coun un total de:%d Toneladas.",j+1,may);
}
