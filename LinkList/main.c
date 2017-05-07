#include <stdio.h>
#include "linkList.h"


int main() {

    LinkList *linkList = createLinkList();

    struct Value v1 = {NULL, 1};
    struct Value v2 = {NULL, 2};
    struct Value v3 = {NULL, 3};
    struct Value v4 = {NULL, 4};
    struct Value v5 = {NULL, 5};

    addLinkListEle(linkList, (LinkListNode *) &v1, 0);
    addLinkListEle(linkList, (LinkListNode *) &v2, 0);
    addLinkListEle(linkList, (LinkListNode *) &v3, 0);
    addLinkListEle(linkList, (LinkListNode *) &v4, 0);
    addLinkListEle(linkList, (LinkListNode *) &v5, 0);

    int i;
    for (i = 0; i < getLinkListLen(linkList); i++) {


        struct Value *value = (struct Value *) getLinkListEle(linkList, i);
        if (value != NULL) {

            printf("%d\n", value->value);
        }
    }

    printf("----------------------\n");
    int index = locateNode(linkList, (LinkListNode *) &v2);
    printf("index=%d\n", index);

    printf("----------------------\n");
    struct Value *value = (struct Value *) getLinkListEle(linkList, 3);
    printf("单独获取=%d\n", value->value);

    printf("----------------------\n");

    struct Value *delete = (struct Value *) deleteLinkListEle(linkList, 3);
    printf("delete = %d\n", delete->value);
    printf("----------------------\n");

    for (i = 0; i < getLinkListLen(linkList); i++) {


        struct Value *value2 = (struct Value *) getLinkListEle(linkList, i);
        if (value2 != NULL) {

            printf("%d\n", value2->value);
        }
    }

    destroyLinkList(linkList);

    return 0;
}