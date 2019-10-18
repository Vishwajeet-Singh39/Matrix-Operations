#include<stdio.h>
int main(){
int m1,n1,m2,n2;
printf("Enter the order of Ist matrix: ");
scanf("%d%d",&m1,&n1);
printf("Enter the order of IIst matrix: ");
scanf("%d%d",&m2,&n2);
if(n1==m2){
    printf("Enter the elemets of Ist matrix: ");
    int arr1[m1][n1],arr2[m2][n2],arrx[m1][n2];
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
        scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the elemets of IInd matrix: ");
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            arrx[i][j]=0;
            for(int k=0;k<n1;k++){          
                arrx[i][j]+=(arr1[i][k]*arr2[k][j]);         
            }
       
        }
    }
    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
        printf("%d ",arrx[i][j]);
        }
        printf("\n");
    }
}
else{
    printf("Matrix Multiplication is not possile for the given two matrices");
}
    return 0;
}