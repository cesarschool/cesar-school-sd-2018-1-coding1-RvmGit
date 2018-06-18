#include <stdio.h>
/**
 * Escreva uma função que encontra a primeira letra que não se repete em uma
 * sentença.
 * Função: char firstNonRepeatingChar(char[] sentence, int length)
 * Input:
 * - sentence: array não nulo de letras, formado apenas por ASCII em minúsculo.
 * - length: tamanho do array - número de caracteres
 * Output: A primeira letra que não se repete, ou -1, caso todas se repitam.
 */
char firstNonRepeatingChar (char sentence[], int length)
{
    printf("\nfirstNonRepeatingChar::START: %s, %d\n", sentence, length);
    
        int count = 0;
    int x=0;
    char letra = sentence[x];
    for (;count<length;){
        if ((count!=x) && (sentence[count] == letra)){
                if (x <length){
                    x = x+1;
                    letra = sentence[x];
                    count = 0;
                }else{
                 count++;
                }
        }else{
            count++;
        }
    }if(x==length){
    printf("-1");
    }else{
    printf("%c",letra);
    }
    // TODO: YOUR CODE HERE!
    
    printf("\nfirstNonRepeatingChar::END\n");
    return -1;
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: firstNonRepeatingChar ###\n");
    
    firstNonRepeatingChar("ovo", 3);
    firstNonRepeatingChar("cesar school", 12);
    firstNonRepeatingChar("sistemas digitais", 17);
    
    return 0;
}
