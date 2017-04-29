//
// Created by PengBaiLiang on 17/4/24.
//
#include <stdio.h>
#include <stdlib.h>
#include "sequentList.h"

/**
 * 在插入元素时我们插入的是一个指针，在64位系统中，
 * 一个指针占的内存空间是8，而在32位系统中，一个指
 * 针占的内存空间是4，所以在64位系统是用unsigned
 * long类型，而32位系统则用unsigned int类型
 */
typedef unsigned long TSeqListNode;


typedef struct SequentList {

    int capacity;
    int length;
    /**
     * 用一个指针来动态申请数组的空间，
     * 可以改变数组的最大长度
     */
    TSeqListNode *node;

} TSeqList;

sequentList *createSequentList(int capacity) {

    TSeqList *ret = NULL;
    if (capacity >= 0) {
        ret = (TSeqList *) malloc(sizeof(TSeqList) + sizeof(TSeqListNode) * capacity);

    }
    if (ret != NULL) {
        ret->capacity = capacity;
        ret->length = 0;
        ret->node = (TSeqListNode *) (ret + 1);
    }
    return ret;
}

void destroySequentList(sequentList *list) {

    free(list);
}

void clearSequentList(sequentList *list) {

    if (list != NULL) {

        TSeqList *seqList = (TSeqList *) list;
        seqList->length = 0;
    }
}

int getSequentListLength(sequentList *list) {

    int len = -1;
    if (list != NULL) {

        TSeqList *seqList = (TSeqList *) list;
        len = seqList->length;
    }
    return len;
}

int getSequentListCapacity(sequentList *list) {

    int capacity = -1;
    if (list != NULL) {

        TSeqList *seqList = (TSeqList *) list;
        capacity = seqList->capacity;

    }
    return capacity;
}

sequentListNode *getSequentListElement(sequentList *list, int position) {

    TSeqList *seqList = (TSeqList *) list;
    sequentListNode *node = NULL;
    /**判断线性表是否合法并且判断位置是否合法*/
    if (seqList != NULL && (position >= 0 && position < seqList->length)) {

        node = (sequentListNode *) seqList->node[position];
    }
    return node;
}

int addSequentListElement(sequentList *list, sequentListNode *node, int position) {

    TSeqList *seqList = (TSeqList *) list;
    int ret = (seqList != NULL);
    /**判断是否还有空间可插入*/
    ret = ret && (seqList->length + 1 <= seqList->capacity);
    /**判断插入的位置是否合法*/
    ret = ret && (position >= 0);
    int i;
    if (ret) {

        /**若插入的位置大于当前线性表的长度，则直接插入到线性表的最后*/
        if (position >= seqList->length) {

            position = seqList->length;
        }

        /**从最后一个元素开始到第position个位置，分别将它们都向后移动一个位置*/
        for (i = seqList->length; i > position; i--) {

            /**
             * 最后一个元素的index为seqList->length -1, 循环第一次，
             * 把它移动到index为seqList-length处，后面的依此类推
             */
            seqList->node[i] = seqList->node[i - 1];
        }

        /**将新元素插入到指定position*/
        seqList->node[i] = (TSeqListNode) node;

        /**更新线性表长度*/
        seqList->length++;
    }
    return ret;
}

sequentListNode *deletesSequentListElement(sequentList *list, int position) {

    TSeqList *seqList = (TSeqList *) list;
    sequentListNode *node = NULL;
    int i;
    if (seqList != NULL && (position >= 0 && position <= seqList->length)) {

        /**取出被删除元素*/
        node = getSequentListElement(list, position);
        /**从删除位置的下一个元素开始向前移动一个位置*/
        for (i = position + 1; i < seqList->length; i++) {

            seqList->node[i - 1] = seqList->node[i];
        }
        /**更新线性表长度*/
        seqList->length--;
    }
    return node;
}