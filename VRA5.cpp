 #include<stdio.h>
 int  main() {
     int a[50],b[50];     /// aslo -----   int arr[]= {1,2,3,4,5};
     int i,n;
     printf("\n enter a array size :");
     scanf("%d",&n);

printf(" \n enter a %d number in array : ",n);
     for(int i =0 ; i < n ; i++ ){
        scanf("%d",&a[i]);
     }
printf("\n elements in array  b is :");

for (int  i = 0; i < n; i++)
{
     b[i]= a[i];   //copy array in b
    printf("\n %d",b[i]);  //printing araay b elemets 
}

     return 0;
 }