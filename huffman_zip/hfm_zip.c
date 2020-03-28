

#include "hfm_zip.h"

int main(int argc, char **argv) {
    if (argc < 3) {
        printf("Error parameter\n");
        exit(1);
    }
    char *op = argv[1];
    char *filename = argv[2];
    char *destname = argv[3];
    if (!strcmp(op, "-c")) {
        prepare(filename);
        HuffmanTree *tree = build(cnt);
        compress(tree, filename, destname);
    } else if (!strcmp(op, "-d")) {
        uncompress(filename, destname);
    } else {
        printf("Error option\n");
    }
    return 0;
}

