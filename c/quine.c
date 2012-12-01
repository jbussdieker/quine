#include <stdio.h>

void main() {
  int i;

  char *data[] = {
    "#include <stdio.h>",
    "",
    "void main() {",
    "  int i;",
    "",
    "  char *data[] = {",
    "  };",
    "",
    "  for (i = 0; i < 6; i++) {",
    "    puts(data[i]);",
    "  }",
    "  for (i = 0; i < 22; i++) {",
    "    char buffer[128] = {32,32,32,32,34,0};",
    "    char tail[] = {34,44,0};",
    "    strcat(buffer, data[i]);",
    "    strcat(buffer, tail);",
    "    puts(buffer);",
    "  }",
    "  for (i = 6; i < 22; i++) {",
    "    puts(data[i]);",
    "  }",
    "}",
  };

  for (i = 0; i < 6; i++) {
    puts(data[i]);
  }
  for (i = 0; i < 22; i++) {
    char buffer[128] = {32,32,32,32,34,0};
    char tail[] = {34,44,0};
    strcat(buffer, data[i]);
    strcat(buffer, tail);
    puts(buffer);
  }
  for (i = 6; i < 22; i++) {
    puts(data[i]);
  }
}
