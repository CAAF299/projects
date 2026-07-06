#include <iostream.h>
#include <conio.h>
#include <stdio.h>


int main(){

 struct fichero{
 char np[20];
 char d[20];
 double p;
 double de;
 double i;
 double pd;
 double pi;

 }p1,p2,p3,p4;




cout<<"///// PRODUCTO 1 /////"<<endl;
cout<<"                      "<<endl;
 cout<<"NOMBRE DEL PRODUCTO: ";
 gets(p1.np);
 cout<<"DESCRIPCION DEL PRODUCTO: ";
 gets(p1.d);
 cout<<"PRECIO DEL PRODUCTO : ";
 cin>>p1.p;
 cout<<"DESCUENTO DEL PRODUCTO : ";
 cin>>p1.de;
 cout<<"IMPUESTO DEL PRODUCTO : ";
 cin>>p1.i;

 p1.pd=p1.p*(1.0-(p1.de/100));
 p1.pi=p1.pd*(1.0+(p1.i/100));

 cout<<"///// PRODUCTO 2 /////"<<endl;
 cout<<"                      "<<endl;
 cout<<"NOMBRE DEL PRODUCTO: ";
 gets(p2.np);
 cout<<"DESCRIPCION DEL PRODUCTO: ";
 gets(p2.d);
 cout<<"PRECIO DEL PRODUCTO : ";
 cin>>p2.p;
 cout<<"DESCUENTO DEL PRODUCTO : ";
 cin>>p2.de;
 cout<<"IMPUESTO DEL PRODUCTO : ";
 cin>>p2.i;

 p2.pd=p2.p*(1.0-(p2.de/100));
 p2.pi=p2.pd*(1.0+(p2.i/100));

 cout<<"///// PRODUCTO 3 /////"<<endl;
 cout<<"                      "<<endl;
 cout<<"NOMBRE DEL PRODUCTO: ";
 gets(p3.np);
 cout<<"DESCRIPCION DEL PRODUCTO: ";
 gets(p3.d);
 cout<<"PRECIO DEL PRODUCTO : ";
 cin>>p3.p;
 cout<<"DESCUENTO DEL PRODUCTO : ";
 cin>>p3.de;
 cout<<"IMPUESTO DEL PRODUCTO : ";
 cin>>p3.i;

 p3.pd=p3.p*(1.0-(p3.de/100));
 p3.pi=p3.pd*(1.0+(p3.i/100));

 cout<<"///// PRODUCTO 4 /////"<<endl;
 cout<<"                      "<<endl;
 cout<<"NOMBRE DEL PRODUCTO: ";
 gets(p4.np);
 cout<<"DESCRIPCION DEL PRODUCTO: ";
 gets(p4.d);
 cout<<"PRECIO DEL PRODUCTO : ";
 cin>>p4.p;
 cout<<"DESCUENTO DEL PRODUCTO : ";
 cin>>p4.de;
 cout<<"IMPUESTO DEL PRODUCTO : ";
 cin>>p4.i;


 p4.pd=p4.p*(1.0-(p4.de/100));
 p4.pi=p4.pd*(1.0+(p4.i/100));

 clrscr();


 printf("PRODUCTO 1: \n DESCRIPCION : %s %s \n PRECIO ORIGINAL: %.2lf \n CON DESCUENTO : %.2lf \n CON IMPUESTO: %.2lf\n\n", p1.np, p1.d, p1.p, p1.pd, p1.pi);
 printf("PRODUCTO 2: \n DESCRIPCION : %s %s \n PRECIO ORIGINAL: %.2lf \n CON DESCUENTO : %.2lf \n CON IMPUESTO: %.2lf\n\n", p2.np, p2.d, p2.p, p2.pd, p2.pi);
 printf("PRODUCTO 3: \n DESCRIPCION : %s %s \n PRECIO ORIGINAL: %.2lf \n CON DESCUENTO : %.2lf \n CON IMPUESTO: %.2lf\n\n", p3.np, p3.d, p3.p, p3.pd, p3.pi);
 printf("PRODUCTO 4: \n DESCRIPCION : %s %s \n PRECIO ORIGINAL: %.2lf \n CON DESCUENTO : %.2lf \n CON IMPUESTO: %.2lf\n\n", p4.np, p4.d, p4.p, p4.pd, p4.pi);

 getch();
 return 0;



}
