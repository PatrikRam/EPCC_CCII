#include <iostream>
using namespace std;
void multiplicar(int M[][3][3],int a, int b, int c, int num){
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			for(int k=0; k<c; k++){
				cout<<"Introduce un valor: ";
				cin>>M[i][j][k];
				
			}
		}
	}	
}

void mostrar(int M[][3][3],int a, int b, int c, int num){
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			for(int k=0; k<c; k++){
				cout<<M[i][j][k]*num<<" ";
			}
			
		}
		cout<<endl;
	}
	
}


int main(){
int x[3][3][3];
int a,b,c, num;
cout<<"\tDimensiones de la matriz"<<endl;
cout<<"Valor para a: ";cin>>a;
cout<<"Valor para b: ";cin>>b;
cout<<"Valor para c: ";cin>>c;
cout<<"Multiplicar x: ";cin>>num;

multiplicar(x, a,b,c,num);
mostrar(x, a,b,c,num);				
}
