#include <iostream>
using namespace std;

int sumaElementos(int arreglo[], int len){
  int aux=0;
  for(int i=0; i<len; i++){
      aux=aux+arreglo[i];
  }
  return aux;
}

int sumaRecursiva(int arreglo[], int len){
  if(len==0){
      return arreglo[len];
  }else{
    return arreglo[len]+sumaRecursiva(arreglo, len-1);
  }
}

int invertir(int arreglo[], int len){
  int aux, aux2=1;
  for(int i=0; i<(len-1)/2; i++){
    aux=arreglo[i];
    arreglo[i]=arreglo[len-aux2];
    arreglo[len-aux2]=aux;
    aux2++;
  }
}
int tamanioCadena(char cadena[]){
  int aux=0;
  while(cadena[aux]!='\0'){
    aux++;
  }
  return aux;
}

void transladar(char cadena[], char cadena2[]){
  int aux=0;
  while(cadena[aux]!='\0'){
    cadena2[aux]=cadena[aux];
    aux++;
  }
}
void concatenar(char *lista1,char *lista2){
	int i=0;
	for(int i=0;lista2[i]!='\0';i++){
		lista1[i]=lista2[i];
		i++;
	}
}

int main(){
    /*
    int lista[5]={1,2,3,4,5};
    invertir(lista, 5);
    for(int i=0; i<5; i++){
      cout<<lista[i];
      if(i==4){
        cout<<'\n';
      }
    }
    char hola[]="hola", hola2[4];
    transladar(hola,hola2);
    cout<<hola2;
    */
    int lista1[]={1,2,3};
    int lista2[]={1,2,3,4};
    concatenar(lista1,lista2);
  return 0;
}
