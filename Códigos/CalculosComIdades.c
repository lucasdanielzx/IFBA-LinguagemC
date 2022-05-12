int main () {
    
    int idade, pessoas, maior, menor;
    float media;
    
	printf ("Digite a idade de uma pessoa: \n");
    scanf  ("%d", &idade);
    system ("cls");
    
    maior = 0;
    menor = 200;
        
    while (idade != 0) {
        pessoas = pessoas + 1;
        media = idade + media;
        
        printf ("Digite a idade de uma pessoa: ");
        scanf  ("%d", &idade);
        system ("cls");
        
        if (idade >0){
        	if (idade > maior){
		    	maior = idade;   
        	} 
			if (idade < menor) { 
				menor = idade;  	
        	}
    	}
    }
    
    media = media / pessoas;
    printf ("Numero de pessoas: %d\n", pessoas);
    printf ("Media: %.1f\n", media); 
    printf ("maior idade: %d \n", maior);
    printf ("menor idade: %d \n", menor);
    
    system ("pause");
    }
