//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/HashMap.java
//

#ifndef _JavaUtilHashMap_H_
#define _JavaUtilHashMap_H_

@class IOSObjectArray;
@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@class JavaUtilHashMap_HashMapEntry;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/util/AbstractCollection.h"
#include "java/util/AbstractMap.h"
#include "java/util/AbstractSet.h"
#include "java/util/Iterator.h"
#include "java/util/Map.h"

#define JavaUtilHashMap_DEFAULT_LOAD_FACTOR 0.75f
#define JavaUtilHashMap_MAXIMUM_CAPACITY 1073741824
#define JavaUtilHashMap_MINIMUM_CAPACITY 4
#define JavaUtilHashMap_serialVersionUID 362498820763181265LL

@interface JavaUtilHashMap : JavaUtilAbstractMap < NSCopying, JavaIoSerializable > {
 @public
  IOSObjectArray *table_;
  JavaUtilHashMap_HashMapEntry *entryForNullKey_;
  jint size__;
  jint modCount_;
}

- (instancetype)init;

- (instancetype)initWithInt:(jint)capacity;

- (instancetype)initWithInt:(jint)capacity
                  withFloat:(jfloat)loadFactor;

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)map;

- (void)constructorPutAllWithJavaUtilMap:(id<JavaUtilMap>)map;

+ (jint)capacityForInitSizeWithInt:(jint)size;

- (id)clone;

- (void)init__ OBJC_METHOD_FAMILY_NONE;

- (jboolean)isEmpty;

- (jint)size;

- (id)getWithId:(id)key;

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

- (id)putWithId:(id)key
         withId:(id)value;

- (void)preModifyWithJavaUtilHashMap_HashMapEntry:(JavaUtilHashMap_HashMapEntry *)e;

- (void)addNewEntryWithId:(id)key
                   withId:(id)value
                  withInt:(jint)hash_
                  withInt:(jint)index;

- (void)addNewEntryForNullKeyWithId:(id)value;

- (JavaUtilHashMap_HashMapEntry *)constructorNewRetainedEntryWithId:(id)key
                                                             withId:(id)value
                                                            withInt:(jint)hash_
                                   withJavaUtilHashMap_HashMapEntry:(JavaUtilHashMap_HashMapEntry *)first;

- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

- (id)removeWithId:(id)key;

- (void)postRemoveWithJavaUtilHashMap_HashMapEntry:(JavaUtilHashMap_HashMapEntry *)e;

- (void)clear;

- (id<JavaUtilSet>)keySet;

- (id<JavaUtilCollection>)values;

- (id<JavaUtilSet>)entrySet;

- (id<JavaUtilIterator>)newKeyIterator OBJC_METHOD_FAMILY_NONE;

- (id<JavaUtilIterator>)newValueIterator OBJC_METHOD_FAMILY_NONE;

- (id<JavaUtilIterator>)newEntryIterator OBJC_METHOD_FAMILY_NONE;


@end

FOUNDATION_EXPORT BOOL JavaUtilHashMap_initialized;
J2OBJC_STATIC_INIT(JavaUtilHashMap)

J2OBJC_FIELD_SETTER(JavaUtilHashMap, table_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaUtilHashMap, entryForNullKey_, JavaUtilHashMap_HashMapEntry *)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT jint JavaUtilHashMap_capacityForInitSizeWithInt_(jint size);

J2OBJC_STATIC_FIELD_GETTER(JavaUtilHashMap, MINIMUM_CAPACITY, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilHashMap, MAXIMUM_CAPACITY, jint)

FOUNDATION_EXPORT IOSObjectArray *JavaUtilHashMap_EMPTY_TABLE_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilHashMap, EMPTY_TABLE_, IOSObjectArray *)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilHashMap, DEFAULT_LOAD_FACTOR, jfloat)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilHashMap, serialVersionUID, jlong)

FOUNDATION_EXPORT IOSObjectArray *JavaUtilHashMap_serialPersistentFields_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilHashMap, serialPersistentFields_, IOSObjectArray *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilHashMap)

@interface JavaUtilHashMap_HashMapEntry : NSObject < JavaUtilMap_Entry > {
 @public
  id key_;
  id value_;
  jint hash__;
  JavaUtilHashMap_HashMapEntry *next_;
}

- (instancetype)initWithId:(id)key
                    withId:(id)value
                   withInt:(jint)hash_
withJavaUtilHashMap_HashMapEntry:(JavaUtilHashMap_HashMapEntry *)next;

- (id)getKey;

- (id)getValue;

- (id)setValueWithId:(id)value;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilHashMap_HashMapEntry)

J2OBJC_FIELD_SETTER(JavaUtilHashMap_HashMapEntry, key_, id)
J2OBJC_FIELD_SETTER(JavaUtilHashMap_HashMapEntry, value_, id)
J2OBJC_FIELD_SETTER(JavaUtilHashMap_HashMapEntry, next_, JavaUtilHashMap_HashMapEntry *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilHashMap_HashMapEntry)

@interface JavaUtilHashMap_HashIterator : NSObject {
 @public
  jint nextIndex_;
  JavaUtilHashMap_HashMapEntry *nextEntry__;
  JavaUtilHashMap_HashMapEntry *lastEntryReturned_;
  jint expectedModCount_;
}

- (instancetype)initWithJavaUtilHashMap:(JavaUtilHashMap *)outer$;

- (jboolean)hasNext;

- (JavaUtilHashMap_HashMapEntry *)nextEntry;

- (void)remove;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilHashMap_HashIterator)

J2OBJC_FIELD_SETTER(JavaUtilHashMap_HashIterator, nextEntry__, JavaUtilHashMap_HashMapEntry *)
J2OBJC_FIELD_SETTER(JavaUtilHashMap_HashIterator, lastEntryReturned_, JavaUtilHashMap_HashMapEntry *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilHashMap_HashIterator)

@interface JavaUtilHashMap_KeyIterator : JavaUtilHashMap_HashIterator < JavaUtilIterator > {
}

- (id)next;

- (instancetype)initWithJavaUtilHashMap:(JavaUtilHashMap *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilHashMap_KeyIterator)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilHashMap_KeyIterator)

@interface JavaUtilHashMap_ValueIterator : JavaUtilHashMap_HashIterator < JavaUtilIterator > {
}

- (id)next;

- (instancetype)initWithJavaUtilHashMap:(JavaUtilHashMap *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilHashMap_ValueIterator)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilHashMap_ValueIterator)

@interface JavaUtilHashMap_EntryIterator : JavaUtilHashMap_HashIterator < JavaUtilIterator > {
}

- (id<JavaUtilMap_Entry>)next;

- (instancetype)initWithJavaUtilHashMap:(JavaUtilHashMap *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilHashMap_EntryIterator)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilHashMap_EntryIterator)

@interface JavaUtilHashMap_KeySet : JavaUtilAbstractSet {
}

- (id<JavaUtilIterator>)iterator;

- (jint)size;

- (jboolean)isEmpty;

- (jboolean)containsWithId:(id)o;

- (jboolean)removeWithId:(id)o;

- (void)clear;

- (instancetype)initWithJavaUtilHashMap:(JavaUtilHashMap *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilHashMap_KeySet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilHashMap_KeySet)

@interface JavaUtilHashMap_Values : JavaUtilAbstractCollection {
}

- (id<JavaUtilIterator>)iterator;

- (jint)size;

- (jboolean)isEmpty;

- (jboolean)containsWithId:(id)o;

- (void)clear;

- (instancetype)initWithJavaUtilHashMap:(JavaUtilHashMap *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilHashMap_Values)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilHashMap_Values)

@interface JavaUtilHashMap_EntrySet : JavaUtilAbstractSet {
}

- (id<JavaUtilIterator>)iterator;

- (jboolean)containsWithId:(id)o;

- (jboolean)removeWithId:(id)o;

- (jint)size;

- (jboolean)isEmpty;

- (void)clear;

- (instancetype)initWithJavaUtilHashMap:(JavaUtilHashMap *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilHashMap_EntrySet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilHashMap_EntrySet)

#endif // _JavaUtilHashMap_H_
