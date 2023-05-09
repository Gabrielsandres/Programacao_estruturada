#include<stdio.h>

struct ponto {
    float x;
    float y;
    char nome;
};

int main(){
    struct ponto p1;
p1.x = 1.0; 
p1.y = 2.0;
p1.char = 'Plano cartesiano';
printf("\n\nCoordenadas do ponto no %c: (%.2f, %.2f)\n\n",p1.char, p1.x, p1.y);

return 0;
}