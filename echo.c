#include <stdlib.h>
#include <stdio.h>

int main(void) {

    char *data = getenv("QUERY_STRING");
    printf("Content-Type: text/html\n\n");
    printf("<html>");
    printf("<head>");
    printf("<title>EROR</title>");
    printf("h2 {color: red;text-align: center;}");
    printf("</head>");
    printf("<body>");
    printf("<h2>");
    printf("%s", input);
    printf("</h2>");
    printf("</body>");
    printf("</html>");
    return 0;
}