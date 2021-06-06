#include <iostream>
#include <windows.h>
#include <fstream>
#include <stdlib.h>
using namespace std;

struct person{

string nombre;
string apellido;
int edad;
int sueldo;

};

void remplazarymodificar(int b,struct person pers[]){
int n;
int v;
string fedesn;
string fedesa;
cout<<"ingrese el: \n nombre:";
cin>>fedesn;
cout<<" apellido:";
cin>>fedesa;
 for(int i=1;i<b;i=i+1){
    if(pers[i].nombre==fedesn&&pers[i].apellido==fedesa){
    i=v;
}
 }
 cout<<"ingrese el: \n nombre:";
cin>>fedesn;
cout<<" apellido:";
cin>>fedesa;
 for(int i=1;i<b;i=i+1){
        if(pers[i].nombre==fedesn&&pers[i].apellido==fedesa){
    i=v;
}
 }
 cout<<"por quien remplazar:";
 cout<<"ingrese el: \n nombre:";
cin>>fedesn;
cout<<" apellido:";
cin>>fedesa;
 for(int i=1;i<b;i=i+1){
        if(pers[i].nombre==fedesn&&pers[i].apellido==fedesa){
    i=n;
}
 }
 int aux;
 string stringaux;
 }
/*
for ( int i = 0; i < str.size(); i++){

   if( str[i] == 'a' ){
      contador++
   }

}
*/

int main(){
int b=1;
int w=0;
int s=1;
person pers[9999];
fstream data;
fstream data2;
data.open("data.txt");
if(data.fail()){
    cout<<"no se encontraron archivos anteriores \n";
    system("pause");
}else{
    while(!data.eof()){
    data>>pers[s].nombre>>pers[s].apellido>>pers[s].edad>>pers[s].sueldo;
    if(!data.eof()){
        b=b+1;
    }
    s=s+1;
    }}
    data.close();
while(w!=5){
        system("cls");

 cin>>w;
 system("cls");
 switch(w){

 case 1:
 data2.open("data.txt",ios::app);
 cout<<" "<<b<<"______________________________________ \n";
 cout<<"    nombre:";
 cin>>pers[b].nombre;
 cout<<"    apellido:";
 cin>>pers[b].apellido;
 cout<<"    edad:";
 cin>>pers[b].edad;
 cout<<"    sueldo:";
 cin>>pers[b].sueldo;
 data2<<pers[b].nombre<<pers[b].apellido<<pers[b].edad<<pers[b].sueldo;
 b=b+1;
 data2.close();
 break;

 case 2:
     for(int i=1;i<b;i=i+1){
 cout<<" "<<i<<"______________________________________ \n";
 cout<<"    nombre:";
 cout<<pers[i].nombre<<"\n";
 cout<<"    apellido:";
 cout<<pers[i].apellido<<"\n";
 cout<<"    edad:";
 cout<<pers[i].edad<<"\n";
 cout<<"    sueldo:";
 cout<<pers[i].sueldo<<"\n";
     }
     system("pause");
 break;

 case 3:
    string federicosa;
    string federicosn;
    cout<<"ingrese los siguientes datos para realizar la busqueda \n";
    cout<<"nombre: ";
    cin>>federicosn;
    cout<<"apellido: ";
    cin>>federicosa;

    for(int i=1;i<b;i=i+1){
        if(pers[i].nombre==federicosn&&pers[i].apellido==federicosa){
            cout<<" "<<i<<"______________________________________ \n";
 cout<<"    nombre:";
 cout<<pers[i].nombre<<"\n";
 cout<<"    apellido:";
 cout<<pers[i].apellido<<"\n";
 cout<<"    edad:";
 cout<<pers[i].edad<<"\n";
 cout<<"    sueldo:";
 cout<<pers[i].sueldo<<"\n";
 cout<<"\n    sueldo nuevo:";
 cin>>pers[i].sueldo;
        }
    }
    system("pause");
    break;


}
}
}
