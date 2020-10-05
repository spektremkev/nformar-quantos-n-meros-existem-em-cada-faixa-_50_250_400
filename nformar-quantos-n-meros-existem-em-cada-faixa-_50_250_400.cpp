#include <stdio.h>
#include <stdlib.h>

/* 
atividade 2_questão 4


int main()<%
	float num;
	int F1=0,F2=0,F3=0;
	
	for(int i=1 ; i <= 10 ; i++){
		printf("Digite um numero real: ");
			scanf("%f", &num);

		if( num >= 1 and num <= 50)
			F1++;
		
			else if( num>= 100 and num<= 250 )
				F2++;
			
				else if( num >= 300 and num <= 400 )
				
					F3++;				
	}
	
	printf("\nA quantidade de numero na faixa 1 e: %d",F1);
	printf("\nA quantidade de numero na faixa 2 e: %d",F2);
	printf("\nA quantidade de numero na faixa 3 e: %d",F3);
%>
*/
int idade, i=0, f1=0, f2=0, f3=0;
 
void Comparar(int i) {
    if (valor < 20)
            f1++;
            
    else if (( valor >= 25) && ( valor <= 45))
            f2++;
            
     else if ( valor > 60)
            f3++;
}
main() {
			
            {
                        printf("Idade: ");
                        	scanf("%d",&i);
                        	
                       i  (idade)
                        i =       +1
            }while (i < 10)
            
            printf("\nFaixa 1 = %d",f1);
            printf("\nFaixa 2 = %d", f2);
            printf("\nFaixa 3 = %d",f3);
}/*
8main() {
	
 int x=-5,j=1;
 for (int i=0; i<= 3; i++){
 	
 	do{
	 x+=2;
 	
	 }while (x<1);
	 
	 j*=2;
	  
 }
 printf("%d, %d",x,j);
}*/
