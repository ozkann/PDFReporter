//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/collect/StandardTable.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectStandardTable_RESTRICT
#define ComGoogleCommonCollectStandardTable_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectStandardTable_RESTRICT
#if ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapValues_INCLUDE
#define ComGoogleCommonCollectStandardTable_TableCollection_INCLUDE 1
#endif
#if ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapEntrySet_INCLUDE
#define ComGoogleCommonCollectStandardTable_TableSet_INCLUDE 1
#endif
#if ComGoogleCommonCollectStandardTable_RowMap_EntrySet_INCLUDE
#define ComGoogleCommonCollectStandardTable_TableSet_INCLUDE 1
#endif
#if ComGoogleCommonCollectStandardTable_Values_INCLUDE
#define ComGoogleCommonCollectStandardTable_TableCollection_INCLUDE 1
#endif
#if ComGoogleCommonCollectStandardTable_ColumnKeySet_INCLUDE
#define ComGoogleCommonCollectStandardTable_TableSet_INCLUDE 1
#endif
#if ComGoogleCommonCollectStandardTable_RowKeySet_INCLUDE
#define ComGoogleCommonCollectStandardTable_TableSet_INCLUDE 1
#endif
#if ComGoogleCommonCollectStandardTable_CellSet_INCLUDE
#define ComGoogleCommonCollectStandardTable_TableSet_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonCollectStandardTable_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_

@class ComGoogleCommonCollectStandardTable_CellSet;
@class ComGoogleCommonCollectStandardTable_ColumnMap;
@class ComGoogleCommonCollectStandardTable_RowKeySet;
@class ComGoogleCommonCollectStandardTable_RowMap;
@class ComGoogleCommonCollectStandardTable_Values;
@protocol ComGoogleCommonBaseSupplier;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectTable_RESTRICT 1
#define ComGoogleCommonCollectTable_INCLUDE 1
#include "com/google/common/collect/Table.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonCollectStandardTable_serialVersionUID 0LL

@interface ComGoogleCommonCollectStandardTable : NSObject < ComGoogleCommonCollectTable, JavaIoSerializable > {
 @public
  id<JavaUtilMap> backingMap_;
  id<ComGoogleCommonBaseSupplier> factory_;
}

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)backingMap
    withComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)factory;

- (jboolean)containsWithId:(id)rowKey
                    withId:(id)columnKey;

- (jboolean)containsColumnWithId:(id)columnKey;

- (jboolean)containsRowWithId:(id)rowKey;

- (jboolean)containsValueWithId:(id)value;

- (id)getWithId:(id)rowKey
         withId:(id)columnKey;

- (jboolean)isEmpty;

- (jint)size;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

- (void)clear;

- (id)putWithId:(id)rowKey
         withId:(id)columnKey
         withId:(id)value;

- (void)putAllWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

- (id)removeWithId:(id)rowKey
            withId:(id)columnKey;

- (id<JavaUtilSet>)cellSet;

- (id<JavaUtilMap>)rowWithId:(id)rowKey;

- (id<JavaUtilMap>)columnWithId:(id)columnKey;

- (id<JavaUtilSet>)rowKeySet;

- (id<JavaUtilSet>)columnKeySet;

- (id<JavaUtilIterator>)createColumnKeyIterator;

- (id<JavaUtilCollection>)values;

- (id<JavaUtilMap>)rowMap;

- (id<JavaUtilMap>)columnMap;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable, backingMap_, id<JavaUtilMap>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable, factory_, id<ComGoogleCommonBaseSupplier>)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectStandardTable, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable)
#if !defined (_ComGoogleCommonCollectStandardTable_TableSet_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_TableSet_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_TableSet_

@class ComGoogleCommonCollectStandardTable;

#define JavaUtilAbstractSet_RESTRICT 1
#define JavaUtilAbstractSet_INCLUDE 1
#include "java/util/AbstractSet.h"


@interface ComGoogleCommonCollectStandardTable_TableSet : JavaUtilAbstractSet {
}

- (jboolean)isEmpty;

- (void)clear;

- (instancetype)initWithComGoogleCommonCollectStandardTable:(ComGoogleCommonCollectStandardTable *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_TableSet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_TableSet)
#if !defined (_ComGoogleCommonCollectStandardTable_CellSet_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_CellSet_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_CellSet_

@class ComGoogleCommonCollectStandardTable;
@protocol JavaUtilIterator;


@interface ComGoogleCommonCollectStandardTable_CellSet : ComGoogleCommonCollectStandardTable_TableSet {
}

- (id<JavaUtilIterator>)iterator;

- (jint)size;

- (jboolean)containsWithId:(id)obj;

- (jboolean)removeWithId:(id)obj;

- (instancetype)initWithComGoogleCommonCollectStandardTable:(ComGoogleCommonCollectStandardTable *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_CellSet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_CellSet)
#if !defined (_ComGoogleCommonCollectStandardTable_CellIterator_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_CellIterator_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_CellIterator_

@class ComGoogleCommonCollectStandardTable;
@protocol ComGoogleCommonCollectTable_Cell;
@protocol JavaUtilMap_Entry;

#define JavaUtilIterator_RESTRICT 1
#define JavaUtilIterator_INCLUDE 1
#include "java/util/Iterator.h"


@interface ComGoogleCommonCollectStandardTable_CellIterator : NSObject < JavaUtilIterator > {
 @public
  id<JavaUtilIterator> rowIterator_;
  id<JavaUtilMap_Entry> rowEntry_;
  id<JavaUtilIterator> columnIterator_;
}

- (jboolean)hasNext;

- (id<ComGoogleCommonCollectTable_Cell>)next;

- (void)remove;

- (instancetype)initWithComGoogleCommonCollectStandardTable:(ComGoogleCommonCollectStandardTable *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_CellIterator)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable_CellIterator, rowIterator_, id<JavaUtilIterator>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable_CellIterator, rowEntry_, id<JavaUtilMap_Entry>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable_CellIterator, columnIterator_, id<JavaUtilIterator>)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_CellIterator)
#if !defined (_ComGoogleCommonCollectStandardTable_Row_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Row_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Row_

@class ComGoogleCommonCollectStandardTable;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

#define JavaUtilAbstractMap_RESTRICT 1
#define JavaUtilAbstractMap_INCLUDE 1
#include "java/util/AbstractMap.h"


@interface ComGoogleCommonCollectStandardTable_Row : JavaUtilAbstractMap {
 @public
  id rowKey_;
  id<JavaUtilMap> backingRowMap__;
  id<JavaUtilSet> keySet_Row_;
  id<JavaUtilSet> entrySet__;
}

- (instancetype)initWithComGoogleCommonCollectStandardTable:(ComGoogleCommonCollectStandardTable *)outer$
                                                     withId:(id)rowKey;

- (id<JavaUtilMap>)backingRowMap;

- (id<JavaUtilMap>)computeBackingRowMap;

- (void)maintainEmptyInvariant;

- (jboolean)containsKeyWithId:(id)key;

- (id)getWithId:(id)key;

- (id)putWithId:(id)key
         withId:(id)value;

- (id)removeWithId:(id)key;

- (void)clear;

- (id<JavaUtilSet>)keySet;

- (id<JavaUtilSet>)entrySet;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_Row)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable_Row, rowKey_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable_Row, backingRowMap__, id<JavaUtilMap>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable_Row, keySet_Row_, id<JavaUtilSet>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable_Row, entrySet__, id<JavaUtilSet>)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_Row)
#if !defined (_ComGoogleCommonCollectStandardTable_Row_keySet_RowKeySet_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Row_keySet_RowKeySet_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Row_keySet_RowKeySet_

@class ComGoogleCommonCollectStandardTable_Row;
@protocol JavaUtilMap;

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_KeySet_INCLUDE 1
#include "com/google/common/collect/Maps.h"


@interface ComGoogleCommonCollectStandardTable_Row_keySet_RowKeySet : ComGoogleCommonCollectMaps_KeySet {
}

- (id<JavaUtilMap>)map;

- (instancetype)initWithComGoogleCommonCollectStandardTable_Row:(ComGoogleCommonCollectStandardTable_Row *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_Row_keySet_RowKeySet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_Row_keySet_RowKeySet)
#if !defined (_ComGoogleCommonCollectStandardTable_Row_RowEntrySet_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Row_RowEntrySet_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Row_RowEntrySet_

@class ComGoogleCommonCollectStandardTable_Row;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_EntrySet_INCLUDE 1
#include "com/google/common/collect/Maps.h"


@interface ComGoogleCommonCollectStandardTable_Row_RowEntrySet : ComGoogleCommonCollectMaps_EntrySet {
}

- (id<JavaUtilMap>)map;

- (jint)size;

- (id<JavaUtilIterator>)iterator;

- (instancetype)initWithComGoogleCommonCollectStandardTable_Row:(ComGoogleCommonCollectStandardTable_Row *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_Row_RowEntrySet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_Row_RowEntrySet)
#if !defined (_ComGoogleCommonCollectStandardTable_Row_RowEntrySet_$1_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Row_RowEntrySet_$1_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Row_RowEntrySet_$1_

@class ComGoogleCommonCollectStandardTable_Row_RowEntrySet;
@protocol JavaUtilMap_Entry;

#define JavaUtilIterator_RESTRICT 1
#define JavaUtilIterator_INCLUDE 1
#include "java/util/Iterator.h"


@interface ComGoogleCommonCollectStandardTable_Row_RowEntrySet_$1 : NSObject < JavaUtilIterator > {
}

- (jboolean)hasNext;

- (id<JavaUtilMap_Entry>)next;

- (void)remove;

- (instancetype)initWithComGoogleCommonCollectStandardTable_Row_RowEntrySet:(ComGoogleCommonCollectStandardTable_Row_RowEntrySet *)outer$
                                                       withJavaUtilIterator:(id<JavaUtilIterator>)capture$0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_Row_RowEntrySet_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_Row_RowEntrySet_$1)
#if !defined (_ComGoogleCommonCollectStandardTable_Row_RowEntrySet_$1_$1_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Row_RowEntrySet_$1_$1_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Row_RowEntrySet_$1_$1_

@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectForwardingMapEntry_RESTRICT 1
#define ComGoogleCommonCollectForwardingMapEntry_INCLUDE 1
#include "com/google/common/collect/ForwardingMapEntry.h"


@interface ComGoogleCommonCollectStandardTable_Row_RowEntrySet_$1_$1 : ComGoogleCommonCollectForwardingMapEntry {
}

- (id<JavaUtilMap_Entry>)delegate;

- (id)setValueWithId:(id)value;

- (jboolean)isEqual:(id)object;

- (instancetype)initWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)capture$0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_Row_RowEntrySet_$1_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_Row_RowEntrySet_$1_$1)
#if !defined (_ComGoogleCommonCollectStandardTable_Column_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Column_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Column_

@class ComGoogleCommonCollectStandardTable;
@class ComGoogleCommonCollectStandardTable_Column_KeySet;
@class ComGoogleCommonCollectStandardTable_Column_Values;
@protocol ComGoogleCommonBasePredicate;
@protocol JavaUtilCollection;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_ImprovedAbstractMap_INCLUDE 1
#include "com/google/common/collect/Maps.h"


@interface ComGoogleCommonCollectStandardTable_Column : ComGoogleCommonCollectMaps_ImprovedAbstractMap {
 @public
  id columnKey_;
  ComGoogleCommonCollectStandardTable_Column_Values *columnValues_;
  ComGoogleCommonCollectStandardTable_Column_KeySet *keySet_Column_;
}

- (instancetype)initWithComGoogleCommonCollectStandardTable:(ComGoogleCommonCollectStandardTable *)outer$
                                                     withId:(id)columnKey;

- (id)putWithId:(id)key
         withId:(id)value;

- (id)getWithId:(id)key;

- (jboolean)containsKeyWithId:(id)key;

- (id)removeWithId:(id)key;

- (id<JavaUtilSet>)createEntrySet;

- (id<JavaUtilCollection>)values;

- (jboolean)removePredicateWithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

- (id<JavaUtilSet>)keySet;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_Column)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable_Column, columnKey_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable_Column, columnValues_, ComGoogleCommonCollectStandardTable_Column_Values *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable_Column, keySet_Column_, ComGoogleCommonCollectStandardTable_Column_KeySet *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_Column)
#if !defined (_ComGoogleCommonCollectStandardTable_Column_EntrySet_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Column_EntrySet_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Column_EntrySet_

@class ComGoogleCommonCollectStandardTable_Column;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;

#define ComGoogleCommonCollectSets_RESTRICT 1
#define ComGoogleCommonCollectSets_ImprovedAbstractSet_INCLUDE 1
#include "com/google/common/collect/Sets.h"


@interface ComGoogleCommonCollectStandardTable_Column_EntrySet : ComGoogleCommonCollectSets_ImprovedAbstractSet {
}

- (id<JavaUtilIterator>)iterator;

- (jint)size;

- (jboolean)isEmpty;

- (void)clear;

- (jboolean)containsWithId:(id)o;

- (jboolean)removeWithId:(id)obj;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (instancetype)initWithComGoogleCommonCollectStandardTable_Column:(ComGoogleCommonCollectStandardTable_Column *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_Column_EntrySet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_Column_EntrySet)
#if !defined (_ComGoogleCommonCollectStandardTable_Column_EntrySetIterator_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Column_EntrySetIterator_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Column_EntrySetIterator_

@class ComGoogleCommonCollectStandardTable_Column;
@protocol JavaUtilIterator;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectAbstractIterator_RESTRICT 1
#define ComGoogleCommonCollectAbstractIterator_INCLUDE 1
#include "com/google/common/collect/AbstractIterator.h"


@interface ComGoogleCommonCollectStandardTable_Column_EntrySetIterator : ComGoogleCommonCollectAbstractIterator {
 @public
  id<JavaUtilIterator> iterator_;
}

- (id<JavaUtilMap_Entry>)computeNext;

- (instancetype)initWithComGoogleCommonCollectStandardTable_Column:(ComGoogleCommonCollectStandardTable_Column *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_Column_EntrySetIterator)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable_Column_EntrySetIterator, iterator_, id<JavaUtilIterator>)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_Column_EntrySetIterator)
#if !defined (_ComGoogleCommonCollectStandardTable_Column_EntrySetIterator_computeNext_EntrySetIteratorMapEntry_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Column_EntrySetIterator_computeNext_EntrySetIteratorMapEntry_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Column_EntrySetIterator_computeNext_EntrySetIteratorMapEntry_

@class ComGoogleCommonCollectStandardTable_Column_EntrySetIterator;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectAbstractMapEntry_RESTRICT 1
#define ComGoogleCommonCollectAbstractMapEntry_INCLUDE 1
#include "com/google/common/collect/AbstractMapEntry.h"


@interface ComGoogleCommonCollectStandardTable_Column_EntrySetIterator_computeNext_EntrySetIteratorMapEntry : ComGoogleCommonCollectAbstractMapEntry {
}

- (id)getKey;

- (id)getValue;

- (id)setValueWithId:(id)value;

- (instancetype)initWithComGoogleCommonCollectStandardTable_Column_EntrySetIterator:(ComGoogleCommonCollectStandardTable_Column_EntrySetIterator *)outer$
                                                              withJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)capture$0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_Column_EntrySetIterator_computeNext_EntrySetIteratorMapEntry)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_Column_EntrySetIterator_computeNext_EntrySetIteratorMapEntry)
#if !defined (_ComGoogleCommonCollectStandardTable_Column_KeySet_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Column_KeySet_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Column_KeySet_

@class ComGoogleCommonCollectStandardTable_Column;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;

#define ComGoogleCommonCollectSets_RESTRICT 1
#define ComGoogleCommonCollectSets_ImprovedAbstractSet_INCLUDE 1
#include "com/google/common/collect/Sets.h"


@interface ComGoogleCommonCollectStandardTable_Column_KeySet : ComGoogleCommonCollectSets_ImprovedAbstractSet {
}

- (id<JavaUtilIterator>)iterator;

- (jint)size;

- (jboolean)isEmpty;

- (jboolean)containsWithId:(id)obj;

- (jboolean)removeWithId:(id)obj;

- (void)clear;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (instancetype)initWithComGoogleCommonCollectStandardTable_Column:(ComGoogleCommonCollectStandardTable_Column *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_Column_KeySet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_Column_KeySet)
#if !defined (_ComGoogleCommonCollectStandardTable_Column_KeySet_$1_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Column_KeySet_$1_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Column_KeySet_$1_

@protocol JavaUtilCollection;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonBasePredicate_RESTRICT 1
#define ComGoogleCommonBasePredicate_INCLUDE 1
#include "com/google/common/base/Predicate.h"


@interface ComGoogleCommonCollectStandardTable_Column_KeySet_$1 : NSObject < ComGoogleCommonBasePredicate > {
}

- (jboolean)applyWithId:(id<JavaUtilMap_Entry>)entry_;

- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)capture$0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_Column_KeySet_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_Column_KeySet_$1)
#if !defined (_ComGoogleCommonCollectStandardTable_Column_Values_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Column_Values_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Column_Values_

@class ComGoogleCommonCollectStandardTable_Column;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;

#define JavaUtilAbstractCollection_RESTRICT 1
#define JavaUtilAbstractCollection_INCLUDE 1
#include "java/util/AbstractCollection.h"


@interface ComGoogleCommonCollectStandardTable_Column_Values : JavaUtilAbstractCollection {
}

- (id<JavaUtilIterator>)iterator;

- (jint)size;

- (jboolean)isEmpty;

- (void)clear;

- (jboolean)removeWithId:(id)obj;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (instancetype)initWithComGoogleCommonCollectStandardTable_Column:(ComGoogleCommonCollectStandardTable_Column *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_Column_Values)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_Column_Values)
#if !defined (_ComGoogleCommonCollectStandardTable_Column_Values_$1_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Column_Values_$1_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Column_Values_$1_

@protocol JavaUtilCollection;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonBasePredicate_RESTRICT 1
#define ComGoogleCommonBasePredicate_INCLUDE 1
#include "com/google/common/base/Predicate.h"


@interface ComGoogleCommonCollectStandardTable_Column_Values_$1 : NSObject < ComGoogleCommonBasePredicate > {
}

- (jboolean)applyWithId:(id<JavaUtilMap_Entry>)entry_;

- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)capture$0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_Column_Values_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_Column_Values_$1)
#if !defined (_ComGoogleCommonCollectStandardTable_Column_Values_$2_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Column_Values_$2_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Column_Values_$2_

@protocol JavaUtilCollection;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonBasePredicate_RESTRICT 1
#define ComGoogleCommonBasePredicate_INCLUDE 1
#include "com/google/common/base/Predicate.h"


@interface ComGoogleCommonCollectStandardTable_Column_Values_$2 : NSObject < ComGoogleCommonBasePredicate > {
}

- (jboolean)applyWithId:(id<JavaUtilMap_Entry>)entry_;

- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)capture$0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_Column_Values_$2)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_Column_Values_$2)
#if !defined (_ComGoogleCommonCollectStandardTable_RowKeySet_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_RowKeySet_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_RowKeySet_

@class ComGoogleCommonCollectStandardTable;
@protocol JavaUtilIterator;


@interface ComGoogleCommonCollectStandardTable_RowKeySet : ComGoogleCommonCollectStandardTable_TableSet {
}

- (id<JavaUtilIterator>)iterator;

- (jint)size;

- (jboolean)containsWithId:(id)obj;

- (jboolean)removeWithId:(id)obj;

- (instancetype)initWithComGoogleCommonCollectStandardTable:(ComGoogleCommonCollectStandardTable *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_RowKeySet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_RowKeySet)
#if !defined (_ComGoogleCommonCollectStandardTable_ColumnKeySet_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_ColumnKeySet_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_ColumnKeySet_

@class ComGoogleCommonCollectStandardTable;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;


@interface ComGoogleCommonCollectStandardTable_ColumnKeySet : ComGoogleCommonCollectStandardTable_TableSet {
}

- (id<JavaUtilIterator>)iterator;

- (jint)size;

- (jboolean)removeWithId:(id)obj;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)containsWithId:(id)obj;

- (instancetype)initWithComGoogleCommonCollectStandardTable:(ComGoogleCommonCollectStandardTable *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_ColumnKeySet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_ColumnKeySet)
#if !defined (_ComGoogleCommonCollectStandardTable_ColumnKeyIterator_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_ColumnKeyIterator_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_ColumnKeyIterator_

@class ComGoogleCommonCollectStandardTable;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;

#define ComGoogleCommonCollectAbstractIterator_RESTRICT 1
#define ComGoogleCommonCollectAbstractIterator_INCLUDE 1
#include "com/google/common/collect/AbstractIterator.h"


@interface ComGoogleCommonCollectStandardTable_ColumnKeyIterator : ComGoogleCommonCollectAbstractIterator {
 @public
  id<JavaUtilMap> seen_;
  id<JavaUtilIterator> mapIterator_;
  id<JavaUtilIterator> entryIterator_;
}

- (id)computeNext;

- (instancetype)initWithComGoogleCommonCollectStandardTable:(ComGoogleCommonCollectStandardTable *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_ColumnKeyIterator)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable_ColumnKeyIterator, seen_, id<JavaUtilMap>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable_ColumnKeyIterator, mapIterator_, id<JavaUtilIterator>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable_ColumnKeyIterator, entryIterator_, id<JavaUtilIterator>)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_ColumnKeyIterator)
#if !defined (_ComGoogleCommonCollectStandardTable_TableCollection_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_TableCollection_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_TableCollection_

@class ComGoogleCommonCollectStandardTable;

#define JavaUtilAbstractCollection_RESTRICT 1
#define JavaUtilAbstractCollection_INCLUDE 1
#include "java/util/AbstractCollection.h"


@interface ComGoogleCommonCollectStandardTable_TableCollection : JavaUtilAbstractCollection {
}

- (jboolean)isEmpty;

- (void)clear;

- (instancetype)initWithComGoogleCommonCollectStandardTable:(ComGoogleCommonCollectStandardTable *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_TableCollection)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_TableCollection)
#if !defined (_ComGoogleCommonCollectStandardTable_Values_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Values_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Values_

@class ComGoogleCommonCollectStandardTable;
@protocol JavaUtilIterator;


@interface ComGoogleCommonCollectStandardTable_Values : ComGoogleCommonCollectStandardTable_TableCollection {
}

- (id<JavaUtilIterator>)iterator;

- (jint)size;

- (instancetype)initWithComGoogleCommonCollectStandardTable:(ComGoogleCommonCollectStandardTable *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_Values)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_Values)
#if !defined (_ComGoogleCommonCollectStandardTable_Values_$1_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Values_$1_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Values_$1_

@protocol ComGoogleCommonCollectTable_Cell;
@protocol JavaUtilIterator;

#define ComGoogleCommonCollectTransformedIterator_RESTRICT 1
#define ComGoogleCommonCollectTransformedIterator_INCLUDE 1
#include "com/google/common/collect/TransformedIterator.h"


@interface ComGoogleCommonCollectStandardTable_Values_$1 : ComGoogleCommonCollectTransformedIterator {
}

- (id)transformWithId:(id<ComGoogleCommonCollectTable_Cell>)cell;

- (instancetype)initWithJavaUtilIterator:(id<JavaUtilIterator>)arg$0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_Values_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_Values_$1)
#if !defined (_ComGoogleCommonCollectStandardTable_RowMap_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_RowMap_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_RowMap_

@class ComGoogleCommonCollectStandardTable;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_ImprovedAbstractMap_INCLUDE 1
#include "com/google/common/collect/Maps.h"


@interface ComGoogleCommonCollectStandardTable_RowMap : ComGoogleCommonCollectMaps_ImprovedAbstractMap {
}

- (jboolean)containsKeyWithId:(id)key;

- (id<JavaUtilMap>)getWithId:(id)key;

- (id<JavaUtilSet>)keySet;

- (id<JavaUtilMap>)removeWithId:(id)key;

- (id<JavaUtilSet>)createEntrySet;

- (instancetype)initWithComGoogleCommonCollectStandardTable:(ComGoogleCommonCollectStandardTable *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_RowMap)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_RowMap)
#if !defined (_ComGoogleCommonCollectStandardTable_RowMap_EntrySet_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_RowMap_EntrySet_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_RowMap_EntrySet_

@class ComGoogleCommonCollectStandardTable_RowMap;
@protocol JavaUtilIterator;


@interface ComGoogleCommonCollectStandardTable_RowMap_EntrySet : ComGoogleCommonCollectStandardTable_TableSet {
}

- (id<JavaUtilIterator>)iterator;

- (jint)size;

- (jboolean)containsWithId:(id)obj;

- (jboolean)removeWithId:(id)obj;

- (instancetype)initWithComGoogleCommonCollectStandardTable_RowMap:(ComGoogleCommonCollectStandardTable_RowMap *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_RowMap_EntrySet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_RowMap_EntrySet)
#if !defined (_ComGoogleCommonCollectStandardTable_RowMap_EntrySet_$1_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_RowMap_EntrySet_$1_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_RowMap_EntrySet_$1_

@class ComGoogleCommonCollectStandardTable_RowMap_EntrySet;
@protocol JavaUtilIterator;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectTransformedIterator_RESTRICT 1
#define ComGoogleCommonCollectTransformedIterator_INCLUDE 1
#include "com/google/common/collect/TransformedIterator.h"


@interface ComGoogleCommonCollectStandardTable_RowMap_EntrySet_$1 : ComGoogleCommonCollectTransformedIterator {
}

- (id<JavaUtilMap_Entry>)transformWithId:(id)rowKey;

- (instancetype)initWithComGoogleCommonCollectStandardTable_RowMap_EntrySet:(ComGoogleCommonCollectStandardTable_RowMap_EntrySet *)outer$
                                                       withJavaUtilIterator:(id<JavaUtilIterator>)arg$0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_RowMap_EntrySet_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_RowMap_EntrySet_$1)
#if !defined (_ComGoogleCommonCollectStandardTable_ColumnMap_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_ColumnMap_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_ColumnMap_

@class ComGoogleCommonCollectStandardTable;
@class ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapValues;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_ImprovedAbstractMap_INCLUDE 1
#include "com/google/common/collect/Maps.h"


@interface ComGoogleCommonCollectStandardTable_ColumnMap : ComGoogleCommonCollectMaps_ImprovedAbstractMap {
 @public
  ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapValues *columnMapValues_;
}

- (id<JavaUtilMap>)getWithId:(id)key;

- (jboolean)containsKeyWithId:(id)key;

- (id<JavaUtilMap>)removeWithId:(id)key;

- (id<JavaUtilSet>)createEntrySet;

- (id<JavaUtilSet>)keySet;

- (id<JavaUtilCollection>)values;

- (instancetype)initWithComGoogleCommonCollectStandardTable:(ComGoogleCommonCollectStandardTable *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_ColumnMap)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable_ColumnMap, columnMapValues_, ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapValues *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_ColumnMap)
#if !defined (_ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapEntrySet_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapEntrySet_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapEntrySet_

@class ComGoogleCommonCollectStandardTable_ColumnMap;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;


@interface ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapEntrySet : ComGoogleCommonCollectStandardTable_TableSet {
}

- (id<JavaUtilIterator>)iterator;

- (jint)size;

- (jboolean)containsWithId:(id)obj;

- (jboolean)removeWithId:(id)obj;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (instancetype)initWithComGoogleCommonCollectStandardTable_ColumnMap:(ComGoogleCommonCollectStandardTable_ColumnMap *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapEntrySet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapEntrySet)
#if !defined (_ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapEntrySet_$1_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapEntrySet_$1_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapEntrySet_$1_

@class ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapEntrySet;
@protocol JavaUtilIterator;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectTransformedIterator_RESTRICT 1
#define ComGoogleCommonCollectTransformedIterator_INCLUDE 1
#include "com/google/common/collect/TransformedIterator.h"


@interface ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapEntrySet_$1 : ComGoogleCommonCollectTransformedIterator {
}

- (id<JavaUtilMap_Entry>)transformWithId:(id)columnKey;

- (instancetype)initWithComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapEntrySet:(ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapEntrySet *)outer$
                                                                   withJavaUtilIterator:(id<JavaUtilIterator>)arg$0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapEntrySet_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapEntrySet_$1)
#if !defined (_ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapValues_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapValues_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapValues_

@class ComGoogleCommonCollectStandardTable_ColumnMap;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;


@interface ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapValues : ComGoogleCommonCollectStandardTable_TableCollection {
}

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)obj;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jint)size;

- (instancetype)initWithComGoogleCommonCollectStandardTable_ColumnMap:(ComGoogleCommonCollectStandardTable_ColumnMap *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapValues)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapValues)
