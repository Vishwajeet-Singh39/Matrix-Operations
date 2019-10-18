#include<stdio.h>
int main(){
int m,n,t;
printf("Enter the order of matrix: ");
scanf("%d%d",&m,&n);
int arr1[m][n],arrx[m][n];
printf("Enter the elemets of Matrix: ");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&arr1[i][j]);
    }
}
printf("Enter the no. of times matrix is to be rotated: ");
scanf("%d",&t);
for(int k=0;k<t%4;k++){
    for(int i=0;i<m;i++){
        for(int j=n-1,l=0;j>=0,l<n;j--,l++){
            arrx[i][l]=arr1[j][i];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr1[i][j]=arrx[i][j];
        }
    }
}
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d ",arr1[i][j]);
    }
    printf("\n");
}

    return 0;
}