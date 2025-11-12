//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char src_name[512], dst_name[512];
    FILE *srcf = NULL, *dstf = NULL;
    int ch;

    printf("Enter source filename: ");
    if (fgets(src_name, sizeof src_name, stdin) == NULL) return 1;
    printf("Enter destination filename: ");
    if (fgets(dst_name, sizeof dst_name, stdin) == NULL) return 1;
    if (src_name[strlen(src_name)-1] == '\n') src_name[strlen(src_name)-1] = '\0';
    if (dst_name[strlen(dst_name)-1] == '\n') dst_name[strlen(dst_name)-1] = '\0';

    srcf = fopen(src_name, "rb");
    if (!srcf) {
        perror("Failed to open source file");
        return 1;
    }

    dstf = fopen(dst_name, "wb");
    if (!dstf) {
        perror("Failed to open destination file");
        fclose(srcf);
        return 1;
    }
    while ((ch = fgetc(srcf)) != EOF) {
        if (fputc(ch, dstf) == EOF) {
            perror("Write error");
            fclose(srcf);
            fclose(dstf);
            return 1;
        }
    }

    if (ferror(srcf)) {
        perror("Read error");
        fclose(srcf);
        fclose(dstf);
        return 1;
    }
    fclose(srcf);
    fclose(dstf);
    printf("Copied '%s' -> '%s' successfully.\n", src_name, dst_name);
    return 0;
}
