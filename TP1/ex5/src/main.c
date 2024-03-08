#include "base.h"
#include "read_int.h"
#include "write_int.h"

int main(int argc, char** argv) {

    if (argc != 3) {
        printf("Ce programme nécessite 2 arguments mais a reçu : %d\n", argc);
        exit(EXIT_FAILURE);
    }

    int pos = atoi(argv[2]);
    read_int(argv[1], pos);

   /*
    if (argc != 4) {
        printf("Ce programme nécessite 3 arguments mais a reçu : %d\n", argc);
        exit(EXIT_FAILURE);
    }

    int pos = atoi(argv[2]);
    int64_t value = atoi(argv[3]);

    printf("value : %ld\n", value);
    write_int(argv[1], pos, value);
    */
    return EXIT_SUCCESS;
}