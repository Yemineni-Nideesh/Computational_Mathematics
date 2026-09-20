#include <stdio.h>
int main()
{ int A[2][3]={1,2,3,0,1,0};
  int B[3][2]={1,1,2,1,0,3};
  int C[2][2]; int t;
  for(int i=0;i<2;i++){
      for(int j=0;j<2;j++){
          int sum=0;
          for(int t=0;t<3;t++){
              sum+=A[i][t]*B[t][j];
          } C[i][j]=sum;
      }
  }
  for(int i=0;i<2;i++){
      for(int j=0;j<2;j++){
          printf("%d ",C[i][j]);
      } printf("\n");
  }

  return 0;
}