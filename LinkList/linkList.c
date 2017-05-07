//
// Created by PengBaiLiang on 17/5/2.
//
#include <stdlib.h>
#include "linkList.h"

/**
 * 定义头结点
 */
typedef struct _tag_LinkList {

    /**指向第一个元素的头指针*/
    LinkListNode header;
    /**整个单链表的长度*/
    int length;

} TLinkList;


LinkList *createLinkList() {

    TLinkList *list = (TLinkList *) malloc(sizeof(TLinkList));
    if (list != NULL) {

        list->length = 0;
        list->header.next = NULL;
    }
    return list;
}

void destroyLinkList(LinkList *list) {

    free(list);
}

void clearLinkList(LinkList *list) {

    TLinkList *linkList = (TLinkList *) list;
    if (linkList != NULL) {

        linkList->length = 0;
        linkList->header.next = NULL;
    }

}

int getLinkListLen(LinkList *list) {

    TLinkList *linkList = (TLinkList *) list;
    int len = -1;
    if (linkList != NULL) {

        len = linkList->length;
    }
    return len;
}

/**
 * 获取指定位置的元素
 * @param list
 * @param position 被获取元素在链表中的索引值
 * @return
 */
LinkListNode *getLinkListEle(LinkList *list, int position) {

    TLinkList *linkList = (TLinkList *) list;
    LinkListNode *node = NULL;
    int i;
    if (linkList != NULL && position >= 0 && position < linkList->length) {

        /** step 1 开始位置指向表头*/
        LinkListNode *current = (LinkListNode *) linkList;

        for (i = 0; i < position; i++) {

            /** step 2 由表头开始通过next指针移动position次*/
            current = current->next;

        }
        /** step 3 当前元素的next指针即指向要获取的元素*/
        node = current->next;
    }
    return node;
}

/**
 * 添加元素到单链表中指定位置
 * @param list
 * @param node
 * @param position  在链表中的索引值
 * @return
 */
int addLinkListEle(LinkList *list, LinkListNode *node, int position) {

    TLinkList *linkList = (TLinkList *) list;
    /**判断单链表、插入的元素以及插入的位置的合法性*/
    int ret = (linkList != NULL) && (node != NULL) && (position >= 0);
    int i;
    if (ret) {
        /** step 1 开始位置指向表头*/
        LinkListNode *current = (LinkListNode *) linkList;
        for (i = 0; i < position && current->next != NULL; i++) {

            /**
             * step 2 由表头开始通过next指针移动position次
             * 第position处的下一个元素就是要插入的位置，也就
             * 是当前元素的current->next。
             */
            current = current->next;
        }
        /**
         * step 3 交换当前元素和插入元素的指针域
         * 注：这两步顺序不能搞反，否则会导致单链
         * 表断链
         */
        node->next = current->next;
        current->next = node;

        /**更新单链表长度*/
        linkList->length++;
    }
    return ret;
}

/**
 * 删除链表中指定的元素
 * @param list
 * @param position  被删除元素在链表中的索引值
 * @return
 */
LinkListNode *deleteLinkListEle(LinkList *list, int position) {

    TLinkList *linkList = (TLinkList *) list;
    LinkListNode *node = NULL;
    if (linkList != NULL && position >= 0 && position < linkList->length) {

        LinkListNode *current = (LinkListNode *) linkList;
        /**获取第position处元素，该元素的next指针域就是需要删除的元素*/
        for (int i = 0; i < position; i++) {
            current = current->next;
        }
        node = current->next;
        current->next = node->next;
        linkList->length--;

    }
    return node;
}

/**
 * 获取元素在链表中的位置
 * @param list
 * @param node
 * @return  在链表中的索引值
 */
int locateNode(LinkList *list, LinkListNode *node) {

    TLinkList *linkList = (TLinkList *) list;
    int position = -1;
    if (linkList != NULL && node != NULL) {
        LinkListNode *current = (LinkListNode *) linkList;
        for (int i = 0; i < linkList->length; i++) {
            current = current->next;
            if (((TValue *) current)->value == ((TValue *) node)->value) {
                position = i;
            }
        }
    }
    return position;
}


