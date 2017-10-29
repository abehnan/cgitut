#include <stdlib.h>
#include <stdio.h>

int main(void) {

    char *data = getenv("QUERY_STRING");
    printf("Content-Type:text/html\n\n");
    printf("<html>");
    printf("<head>");
    printf("<style>h2 {color: red;text-align: center;}</style>");
    printf("</head>");
    printf("<body>");
    printf("<h2>");
    printf("%s", data + 5);
    printf("</h2>");
    printf("</body>");
    printf("</html>");
    return 0;
}