///part 1
#include <stdio.h>
#include <math.h>
#define MAXESSAY 72
#define ME 500
const char AllwS_plot[MAXESSAY][100]={
  "AllwS_1.dat",
  "AllwS_2.dat",
  "AllwS_3.dat",
  "AllwS_4.dat",
  "AllwS_5.dat",
  "AllwS_6.dat",
  "AllwS_7.dat",
  "AllwS_8.dat",
  "AllwS_9.dat",
  "AllwS_10.dat",
  "AllwS_11.dat",
  "AllwS_12.dat",
  "AllwS_13.dat",
  "AllwS_14.dat",
  "AllwS_15.dat",
  "AllwS_16.dat",
  "AllwS_17.dat",
  "AllwS_18.dat",
  "AllwS_19.dat",
  "AllwS_20.dat",
  "AllwS_21.dat",
  "AllwS_22.dat",
  "AllwS_23.dat",
  "AllwS_24.dat",
  "AllwS_25.dat",
  "AllwS_26.dat",
  "AllwS_27.dat",
  "AllwS_28.dat",
  "AllwS_29.dat",
  "AllwS_30.dat",
  "AllwS_31.dat",
  "AllwS_32.dat",
  "AllwS_33.dat",
  "AllwS_34.dat",
  "AllwS_35.dat",
  "AllwS_36.dat",
  "AllwS_37.dat",
  "AllwS_38.dat",
  "AllwS_39.dat",
  "AllwS_40.dat",
  "AllwS_41.dat",
  "AllwS_42.dat",
  "AllwS_43.dat",
  "AllwS_44.dat",
  "AllwS_45.dat",
  "AllwS_46.dat",
  "AllwS_47.dat",
  "AllwS_48.dat",
  "AllwS_49.dat",
  "AllwS_50.dat",
  "AllwS_51.dat",
  "AllwS_52.dat",
  "AllwS_53.dat",
  "AllwS_54.dat",
  "AllwS_55.dat",
  "AllwS_56.dat",
  "AllwS_57.dat",
  "AllwS_58.dat",
  "AllwS_59.dat",
  "AllwS_60.dat",
  "AllwS_61.dat",
  "AllwS_62.dat",
  "AllwS_63.dat",
  "AllwS_64.dat",
  "AllwS_65.dat",
  "AllwS_66.dat",
  "AllwS_67.dat",
  "AllwS_68.dat",
  "AllwS_69.dat",
  "AllwS_70.dat",
  "AllwS_71.dat",
  "AllwS_72.dat"
};
//Super wobs




int N_essay;

int main(){
  FILE *fp;
  int n,i;
  double W1[ME],W2[ME],W[ME],T[ME];
  double a1,a2,a3,a4,a5,a6;
  double r,r2,d2,d,media;
  double Deltatheta,w0;
  int Np,Nm;
  // set parameter
  N_essay=25;
  fp=fopen("file_DeltaTheta.txt","r");
  //fp=fopen("file_a0.txt","r");
  //fp=fopen("file_diamobs1.txt","r");;
  fscanf(fp,"%lf",&Deltatheta);
  fclose(fp);
  //**********************
  fp=fopen("f_w2SemObs.dat","r");
  fscanf(fp,"%lf",&w0);
  fclose(fp);
  //w0=1.;
  //********************************
  for(i=0;i<ME;++i){
    W1[i]=0.;
    W2[i]=0.;
    W[i]=0.;
  }
  //**********************
  Np=Nm=0;
  for(n=0;n<N_essay;++n){
    fp=fopen(AllwS_plot[n],"r");
    media=0.;
    for(i=0;i<ME;++i){
      fscanf(fp,"%lf\t%lf\t%lf\t%lf\t%lf\n",&a1,&a2,&a3,&a4,&a5);
      W[i]+=a3;
      W2[i]+=a3*a3;
      media+=a3;
      T[i]=a1;
    }
    
    fclose(fp);
  }
  //***************************
  //
  fp=fopen("f_w_Time.dat","w");
  for(i=0;i<ME;++i){
      //********************
    W[i]*=(1./N_essay);
    // W2[i]*=(1./N_essay);
    /// w0=sqrt(W2[i]);
    W[i]*=(1./w0);
    
    fprintf(fp,"%lf\t%lf\n",T[i],W[i]);;
    
  
  }
   fclose(fp);
  //***************************
  r=r2=0.;
  for(i=0;i<ME;++i){
    r+=W[i];
    r2+=W[i]*W[i];
  }
  r=r*(1./ME);
  r2=r2*(1./ME);
  d2=r2-r*r;
  d=sqrt(d2);
  fp=fopen("f_Omega.dat","w");
  fprintf(fp,"%lf\t%lf\t%lf\n",Deltatheta,r,d);
  fclose(fp);
}
