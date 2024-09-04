
# Atividade-50

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void compressRLE(const char *input, char *output) {
    int i, j = 0;
    int length = strlen(input);
    
    for (i = 0; i < length; i++) {
       
        int count = 1;
        while (i < length - 1 && input[i] == input[i + 1]) {
            count++;
            i++;
        }
        
        output[j++] = input[i];
        output[j++] = count + '0'; 
    }
    output[j] = '\0'; 
}

int main() {
    char input[100]; 
    printf("Digite a string para compressão (máx. 99 caracteres): ");
    fgets(input, sizeof(input), stdin);
    
    
    size_t length = strlen(input);
    if (length > 0 && input[length - 1] == '\n') {
        input[length - 1] = '\0';
    }
    
    
    char *output = (char *)malloc(2 * strlen(input) + 1);
    if (output == NULL) {
        fprintf(stderr, "Memória insuficiente\n");
        return 1;
    }

    
    compressRLE(input, output);
    
    printf("String original: %s\n", input);
    printf("String comprimida: %s\n", output);
    
    free(output); 

    return 0;
}
