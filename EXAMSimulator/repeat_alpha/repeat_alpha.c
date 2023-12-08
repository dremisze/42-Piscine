#include <unistd.h>

int main(int argc, char *argv[]) {
    if (argc == 2) {
        for (int i = 0; argv[1][i] != '\0'; i++) {
            char ch = argv[1][i];
            int repeat = 1;
            if (ch >= 'a' && ch <= 'z') {
                repeat = ch - 'a' + 1;
            } else if (ch >= 'A' && ch <= 'Z') {
                repeat = ch - 'A' + 1;
            }
            for (int j = 0; j < repeat; j++) {
                write(1, &ch, 1);
            }
        }
    }
    write(1, "\n", 1);
    return 0;
}
