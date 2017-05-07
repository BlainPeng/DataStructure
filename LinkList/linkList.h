//
// Created by PengBaiLiang on 17/5/2.
//

#ifndef LINKLIST_LINKLIST_H
#define LINKLIST_LINKLIST_H

typedef void LinkList;
typedef struct _tag_LinkListNode LinkListNode;
/**结点指针域*/
struct _tag_LinkListNode {

    /**指向下个元素的指针*/
    LinkListNode *next;
};
/**数据元素结点*/
typedef struct Value {

    LinkListNode next;
    int value;
} TValue;

LinkList *createLinkList();

void destroyLinkList(LinkList *list);

void clearLinkList(LinkList *list);

int getLinkListLen(LinkList *list);

int addLinkListEle(LinkList *list, LinkListNode *node, int position);

LinkListNode *getLinkListEle(LinkList *list, int position);

LinkListNode *deleteLinkListEle(LinkList *list, int position);

int locateNode(LinkList *list, LinkListNode *node);

#endif //LINKLIST_LINKLIST_H
