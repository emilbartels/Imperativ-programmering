#include <stdio.h>
#include <string.h>

//prototype
void udskift(char string[], char old_letter, char new_letter);

int main(void){
//lad os lave en streng
    char str[] = "Foodback";
    
    printf("Her er strengen: %s\n", str);

    udskift(str, 'o', 'e');
    
    printf("Her er den nye streng: %s\n", str);

    return 0;
}

void udskift(char string[], char old_letter, char new_letter){
    int i = 0;
    while(string[i] != '\0'){
        if(string[i] == old_letter){
            string[i] = new_letter;
        }
        i++;
    }

}