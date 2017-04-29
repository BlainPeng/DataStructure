#include <stdio.h>
#include "sequentList.h"


int main() {

    sequentList *list = createSequentList(10);

    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    int e = 50;
    addSequentListElement(list, &a, 0);
    addSequentListElement(list, &b, 0);
    addSequentListElement(list, &c, 0);
    addSequentListElement(list, &d, 0);
    int i;
    for (i = 0; i < getSequentListLength(list); i++) {
        printf("%d\n", *((int *) getSequentListElement(list, i)));
    }
    printf("------------------------\n");

    addSequentListElement(list, &e, 2);
    for (i = 0; i < getSequentListLength(list); i++) {
        printf("%d\n", *((int *) getSequentListElement(list, i)));
    }

    printf("------------------------\n");

    int *ret = deletesSequentListElement(list, 1);
    printf("delete = %d\n", *ret);
    for (i = 0; i < getSequentListLength(list); i++) {
        printf("%d\n", *((int *) getSequentListElement(list, i)));
    }
    destroySequentList(list);
    return 0;
}