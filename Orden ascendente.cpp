#include <iostream>

using namespace std;

int main(){
	int numeros[100],a, mayor=0, aux;
	
	
   cout<<"Cantidad de numeros del arreglo: ";
    cin>>a;
    for(int k=0; k<a; k++){
    	cout<<k+1<<": Digite un numero: ";
    	cin>>numeros[k];
}

    for(int i=0; i<a; i++){
    	for(int j=0; j<a; j++){
    		if (numeros[j]>numeros [j+1]){
    			aux=numeros[j];
    			numeros[j]=numeros[j+1];
    			numeros[j+1]= aux;
    		}
    	}
    }
    cout<<"Orden Ascendente: "<<endl;
    for(int h=a; h>0;h--){
    cout<<numeros[h]<<endl;
    	
    }
    
    
}
