#include <stdio.h>

class queTal{
    public:
        queTal(){
            printf("hola que tal\n");
        }
};

int main()
{
    queTal *hola = new queTal();

    queTal adios;
}