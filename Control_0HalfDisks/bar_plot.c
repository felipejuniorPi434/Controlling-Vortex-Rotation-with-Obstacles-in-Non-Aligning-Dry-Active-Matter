#include <stdio.h>
#include <math.h>

#define NMEAS 500


int main(){
  double medida[NMEAS];;
  int n;
  double a1,a2,a3;;;
  double r,r2,bar,bar2;;;
  FILE *fp=fopen("DS_1.dat","r");;
  if(fp==NULL){
    printf("não é esse o paper\n");;
  }
  for(n=0;n<NMEAS;++n){
    fscanf(fp,"%lf %lf %lf",&a1,&a2,&a3);;
    medida[n]=a3;;
  }
  fclose(fp);;;
  ////////////////////////////////////////
  //media <r>
  r=0;
   for(n=0;n<NMEAS;++n){
     // sfcanf(fp,"%lf %lf %lf",&a1,&a2,&a3);;
     r+=medida[n];
  }
   r=r*(1./NMEAS);;
   ////////////////////////////////
   //media <r2>
    r2=0;
   for(n=0;n<NMEAS;++n){
     // sfcanf(fp,"%lf %lf %lf",&a1,&a2,&a3);;
     r2+=medida[n]*medida[n];
  }
   r2=r2*(1./NMEAS);; 
   ///////////////////////////////////////////
   ////erro
   ////bar2;
   bar2=r2-r*r;
   bar=sqrt(bar2);;
   fp=fopen("medida.dat","w");;
   fprintf(fp,"%lf\t%lf\n",r,bar);;
   fclose(fp);;
}
