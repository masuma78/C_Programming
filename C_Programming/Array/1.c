int main(){
int a[10][10],i,j,sumofright=0,sumofleft=0,n;
printf("enter the num of mat: ");
scanf("%d",&n);
printf("enter the matrix: ");
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    scanf("%d", &a[i][j]);

    }

    }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
            printf("the matrix: %d", a[i][j]);


    }
}
 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
            if (i==j){
                sumofright=sumofright + a[i][j];
            }
    }
 }
 printf("%d",sumofright);
 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
            if(i+j==n-1){
                sumofleft=sumofleft+a[i][j];
            }
    }
 }
 printf("%d",sumofleft);


 return 0;
}