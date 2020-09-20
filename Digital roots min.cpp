#include "iostream"
using namespace std;
//Sacar raices digitales con C++!
//by: Inky Captain c:

int main(){
	int num, res, total = 0;	//Definimos las variables
	
	cin >> num;					//Solicitamos el valor inicial para el sistema, un numero con "n" cantidad de digitos

	while(num != 0){			//Nuestro ciclo principal, el cual valida que el numero que no introduzcamos sea 0.
		while(num != 0){		//Nuestro ciclo secundario, el cual se encarga de sumar cada digito del numero inicial.
			res = num%10;		//Extraemos el ultimo digito del numero.
			num = num/10;		//Y ahora al numero se lo quitamos, dejandolo sin ese ultimo digito.
			total += res;		//Ahora, por cada digito que le quitamos al numero inicial, se lo sumamos a nuestro total.
			if(total >= 10){	//Aqui comparamos que nuestro total no tenga mas de 2 digitos, si llega a tener mas de 2 digitos, significa que aun debemos
				num = total;	//procesarlo.
				total = 0;		//Aquí dejamos que el total sea cero, para que solo le sume los nuevos valores.
			}
		}			
		cout << total<< endl; 	//una vez que ha llegado a ser un valor de un unico digito (un valor menor a 10) lo imprimimos como resultado.
		total = 0;				//Reiniciamos la variable del inicio.
		cin >> num;				//Y Ahora pedimos un nuevo numero para seguir con el ciclo.
	}
	return 0;					//Si introducen el numero 0, se saldrá del ciclo y terminará el programa.
}

//Repositorio de Github:
//https://github.com/ElArmandoxd/DigitalRoots

//Canal de Youtube:
//https://www.youtube.com/channel/UCPK3kiwEbpd2m5oGkA2Go8g

//¡Muchas gracias por el apoyo! suscribete al canal para más contenido y codigo. 
