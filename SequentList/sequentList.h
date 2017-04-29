//
// Created by PengBaiLiang on 17/4/24.
//

#ifndef SEQUENTLIST_SEQUENTLIST_H
#define SEQUENTLIST_SEQUENTLIST_H

/**
 * 线性表
 * 用void类型是为了便于数据封装，
 * 当我们创建一个线性表时，返回的肯定是一
 * 个指针，而void*可转换成任类型的指针
 */
typedef void sequentList;
/**
 * 线性表中的每个节点，也就是每一个数据元素
 */
typedef void sequentListNode;

/**
 * 创建一个指定大小的线性表
 * @param capacity
 * @return
 */
sequentList *createSequentList(int capacity);

/**
 * 销毁线性表
 * @param list
 */
void destroySequentList(sequentList *list);

/**
 * 清空线性表中的数据
 * @param list
 */
void clearSequentList(sequentList *list);

/**
 * 获取线性表当前长度
 * @param list
 * @return -1 获取失败
 */
int getSequentListLength(sequentList *list);

/**
 * 获取线性最大容量
 * @param list
 * @return -1 获取失败
 */
int getSequentListCapacity(sequentList *list);

/**
 * 获取某个位置的元素
 * @param list
 * @param position
 * @return
 */
sequentListNode *getSequentListElement(sequentList *list, int position);


/**
 * 线性表添加元素操作
 * @param list
 * @param node
 * @param position
 * @return
 */
int addSequentListElement(sequentList *list, sequentListNode *node, int position);

/**
 * 删除某个位置的元素
 * @param list
 * @param position
 * @return
 */
sequentListNode *deletesSequentListElement(sequentList *list, int position);


#endif //SEQUENTLIST_SEQUENTLIST_H
