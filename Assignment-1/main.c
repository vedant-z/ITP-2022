 
 ​#include <stdio.h> 
  
 ​int main(){ 
 ​    //Array Size Declaration 
 ​    int m,n,s,p,NOP=0; 
  
 ​    printf("Enter size of 1st & 2nd array:\n"); 
 ​    scanf("%d %d",&m,&n); 
 ​     
 ​    printf("\n"); 
 ​     
 ​    printf("Enter sum you want to search:\n"); 
 ​    scanf("%d",&p);      
 ​     
 ​    s=m+n; 
 ​    int a[m],b[n],c[s];  
 ​     
 ​    //Inputting arrays and merging them.  
 ​    for(int i=0;i<m;i++)     
 ​    { 
 ​       scanf("%d",&a[i]); 
 ​       c[i]=a[i]; 
 ​    } 
 ​    int k=m; 
 ​    for(int i=0;i<n;i++)    
 ​    { 
 ​        scanf("%d",&b[i]); 
 ​        c[k]=b[i]; 
 ​        k++; 
 ​    } 
 ​     
 ​    printf("\nThe merged array..\n"); 
 ​    for(int i=0;i<s;i++){ 
 ​        printf("%d "" ",c[i]);   
 ​    } 
 ​    printf("\n"); 
 ​     
 ​    for(int i=0;i<s;i++)    
 ​    { 
 ​        int temp; 
 ​        for(int j=i+1;j<s;j++) 
 ​        { 
 ​            if(c[i]>c[j]) 
 ​            { 
 ​                temp=c[i]; 
 ​                c[i]=c[j]; 
 ​                c[j]=temp; 
 ​            } 
 ​        } 
 ​    }    
 ​    printf("\n"); 
 ​    printf("\nAfter sorting...\n"); 
 ​    for(int i=0 ; i<s; i++)     
 ​    { 
 ​        printf("%d "" ",c[i]); 
 ​    } 
 ​    printf("\n"); 
 ​     
 ​    for(int x=0;x<s;x++){ 
 ​        for(int y=x+1;y<s;y++){ 
 ​            if(c[x]+c[y]==p){ 
 ​                printf("[%d,%d]"" ",c[x],c[y]); 
 ​                NOP++; 
 ​            } 
 ​        } 
 ​    } 
 ​    if(NOP!=0) 
 ​        printf("--->Pairs with given sum"); 
 ​    else 
 ​        printf("There exists no such pair."); 
 ​     
  
  
 ​    return 0; 
  
 ​}
