#include <cs50.h>
#include <stdio.h>

void detectCardType(int digits[16], int length) ;

int main(void) 
{
    long credit_card_number;
    int digits[16];
    int length = 0;
    int sum = 0; 
    int othersum = 0; 
   
    do
    {
         credit_card_number = get_long("Entrez le numéro de carte de crédit compris entre 13 et 16 chiffres : ");
    }
    while (length < 13 || length > 16);

    detectCardType( digits,  length);

    return 0;

void detectCardType(int digits[16], int length) ;

    // Vérifier le type de carte
       if (length == 15 && (digits[0] == '3' && (digits[1] == '4' || digits[1] == '7'))) {
        printf("Type de carte : American Express\n");
    } else if (length == 16 && digits[0] == '5' && (digits[1] >= '1' && digits[1] <= '5')) {
        printf("Type de carte : MasterCard\n");
    } else if ((length == 13 || length == 16) && digits[0] == '4') {
        printf("Type de carte : Visa\n");
    } else {
        printf("Type de carte inconnu.\n");
    }

}
   

















