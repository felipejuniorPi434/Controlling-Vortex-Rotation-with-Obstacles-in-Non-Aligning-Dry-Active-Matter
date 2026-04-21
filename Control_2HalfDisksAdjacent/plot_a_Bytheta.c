//Calc of <w> ;; angular velocity
#include <stdio.h>
#include <math.h>
#define NMEAS 500


int main(){
  FILE *fp;
  int i,j,h;
  double W,WW,SS,S,a1,a2,a3,a4,xparam;
  char fileInput1[100]="Wobs.dat";
  char fileInput2[100]="file_DeltaTheta.txt";
  char fileOutput[100]="f_w.dat";
  //modele
  fp=fopen(fileInput2,"r");
  fscanf(fp,"%lf\n",&xparam);
  fclose(fp);
  //Wobs
  fp=fopen(fileInput1,"r");
  W=0.;
  WW=0.;
  for(i=0;i<NMEAS;++i){
    fscanf(fp,"%lf\t%lf\t%lf\t%lf\n",&a1,&a2,&a3,&a4);
    W+=a2;
    WW+=a2*a2;
  }
  fclose(fp);
  //****************************
  W=W*(1./NMEAS);
  WW=WW*(1./NMEAS);
  SS=WW-W*W;
  S=sqrt(SS);
  //out file
  fp=fopen(fileOutput,"w");
  fprintf(fp,"%lf\t%lf\t%lf\n",xparam,W,S);
  fclose(fp);
  
  
}
