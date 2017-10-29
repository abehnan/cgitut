#include <stdlib.h>
#include <stdio.h>

int main() {
    char *data = getenv("QUERY_STRING");

    printf("Content-Type: text/html\n\n");
    printf("<html>");
    printf("<head>");
    printf("h2 {color: red;text-align: center;}");
    printf("</head>");
    printf("<body>");
    printf("<h2>%s</h2>", &data);
    printf("</body>");
    printf("</html>");
    return 0;
}