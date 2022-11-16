#include <stdio.h>


int main(void){
    char x,y,z,n; 
    int a,k;
    scanf("%c", &x);
    scanf("%c", &y);
    scanf("%c", &z);
    printf("Key to change :\n");
    scanf("%d", &k);
    printf("Select to Decode or Encode\n");
    printf("If Encode press 1 of Decode press 2 :\n");
    scanf("%d", &a);
   
    
    if (a == 1){
    x = x+k;
    y = y+k;
    z = z+k;
    
    printf("Select to encode in word of interger");
    scanf(" %c", &n);
    
    //interger change word
    if (n == 'i'){
    printf("%i", x);
    printf("%i", y);
    printf("%i", z);
    }
    //chiper change word
    if (n == 'w'){
    printf("%c", x);
    printf("%c", y);
    printf("%c", z);
    }
    }

    if (a == 2){
    x = x-k;
    y = y-k;
    z = z-k;
    
    printf("Select to encode in word of interger");
    scanf(" %c", &n); 

    if (n == 'i'){
    printf("%i", x);
    printf("%i", y);
    printf("%i\n", z);
    } 

    if (n == 'w'){
    printf("%c", x);
    printf("%c", y);
    printf("%c\n", z);
    } 
    }
     
}
