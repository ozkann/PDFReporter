//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/LinkedList.java
//

#ifndef _JavaUtilLinkedList_H_
#define _JavaUtilLinkedList_H_

@class IOSObjectArray;
@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@class JavaUtilLinkedList_Link;
@protocol JavaUtilCollection;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/util/AbstractSequentialList.h"
#include "java/util/Deque.h"
#include "java/util/Iterator.h"
#include "java/util/List.h"
#include "java/util/ListIterator.h"
#include "java/util/Queue.h"

#define JavaUtilLinkedList_serialVersionUID 876323262645176354LL

@interface JavaUtilLinkedList : JavaUtilAbstractSequentialList < JavaUtilList, JavaUtilDeque, JavaUtilQueue, NSCopying, JavaIoSerializable > {
 @public
  jint size__;
  JavaUtilLinkedList_Link *voidLink_;
}

- (instancetype)init;

- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)addWithInt:(jint)location
            withId:(id)object;

- (jboolean)addWithId:(id)object;

- (jboolean)addAllWithInt:(jint)location
   withJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)addFirstWithId:(id)object;

- (void)addLastWithId:(id)object;

- (void)clear;

- (id)clone;

- (jboolean)containsWithId:(id)object;

- (id)getWithInt:(jint)location;

- (id)getFirst;

- (id)getLast;

- (jint)indexOfWithId:(id)object;

- (jint)lastIndexOfWithId:(id)object;

- (id<JavaUtilListIterator>)listIteratorWithInt:(jint)location;

- (id)removeWithInt:(jint)location;

- (jboolean)removeWithId:(id)object;

- (id)removeFirst;

- (id)removeLast;

- (id<JavaUtilIterator>)descendingIterator;

- (jboolean)offerFirstWithId:(id)e;

- (jboolean)offerLastWithId:(id)e;

- (id)peekFirst;

- (id)peekLast;

- (id)pollFirst;

- (id)pollLast;

- (id)pop;

- (void)pushWithId:(id)e;

- (jboolean)removeFirstOccurrenceWithId:(id)o;

- (jboolean)removeLastOccurrenceWithId:(id)o;

- (id)setWithInt:(jint)location
          withId:(id)object;

- (jint)size;

- (jboolean)offerWithId:(id)o;

- (id)poll;

- (id)remove;

- (id)peek;

- (id)element;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)contents;

- (void)dealloc;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLinkedList)

J2OBJC_FIELD_SETTER(JavaUtilLinkedList, voidLink_, JavaUtilLinkedList_Link *)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaUtilLinkedList, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLinkedList)

@interface JavaUtilLinkedList_Link : NSObject {
 @public
  id data_;
  __weak JavaUtilLinkedList_Link *previous_;
  JavaUtilLinkedList_Link *next_;
}

- (instancetype)initWithId:(id)o
withJavaUtilLinkedList_Link:(JavaUtilLinkedList_Link *)p
withJavaUtilLinkedList_Link:(JavaUtilLinkedList_Link *)n;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLinkedList_Link)

J2OBJC_FIELD_SETTER(JavaUtilLinkedList_Link, data_, id)
J2OBJC_FIELD_SETTER(JavaUtilLinkedList_Link, next_, JavaUtilLinkedList_Link *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLinkedList_Link)

@interface JavaUtilLinkedList_LinkIterator : NSObject < JavaUtilListIterator > {
 @public
  jint pos_, expectedModCount_;
  JavaUtilLinkedList *list_;
  __weak JavaUtilLinkedList_Link *link_, *lastLink_;
}

- (instancetype)initWithJavaUtilLinkedList:(JavaUtilLinkedList *)object
                                   withInt:(jint)location;

- (void)addWithId:(id)object;

- (jboolean)hasNext;

- (jboolean)hasPrevious;

- (id)next;

- (jint)nextIndex;

- (id)previous;

- (jint)previousIndex;

- (void)remove;

- (void)setWithId:(id)object;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLinkedList_LinkIterator)

J2OBJC_FIELD_SETTER(JavaUtilLinkedList_LinkIterator, list_, JavaUtilLinkedList *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLinkedList_LinkIterator)

@interface JavaUtilLinkedList_ReverseLinkIterator : NSObject < JavaUtilIterator > {
}

- (instancetype)initWithJavaUtilLinkedList:(JavaUtilLinkedList *)outer$
                    withJavaUtilLinkedList:(JavaUtilLinkedList *)linkedList;

- (jboolean)hasNext;

- (id)next;

- (void)remove;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLinkedList_ReverseLinkIterator)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLinkedList_ReverseLinkIterator)

#endif // _JavaUtilLinkedList_H_
