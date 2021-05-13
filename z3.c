    #include<stdio.h>    
    int main(){  
    int a[32],n,i;    
    printf("\nPodaj liczbe decymalna: ");    
    scanf("%d",&n);    
    for(i=0;n>0;i++)    
    {    
    a[i]=n%2;    
    n=n/2;    
    }    
    printf("\nLiczba binarna: ");    
    for(i=i-1;i>=0;i--)    
    {    
    printf("%d",a[i]);    
    }    
    return 0;  
    }  