//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/primitives/Ints.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonPrimitivesInts_RESTRICT
#define ComGoogleCommonPrimitivesInts_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonPrimitivesInts_RESTRICT
#if !defined (_ComGoogleCommonPrimitivesInts_) && (ComGoogleCommonPrimitivesInts_INCLUDE_ALL || ComGoogleCommonPrimitivesInts_INCLUDE)
#define _ComGoogleCommonPrimitivesInts_

@class IOSByteArray;
@class IOSIntArray;
@class IOSObjectArray;
@class JavaLangInteger;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilList;


#define ComGoogleCommonPrimitivesInts_BYTES 4
#define ComGoogleCommonPrimitivesInts_MAX_POWER_OF_TWO 1073741824

@interface ComGoogleCommonPrimitivesInts : NSObject {
}

+ (jint)hashCodeWithInt:(jint)value;

+ (jint)checkedCastWithLong:(jlong)value;

+ (jint)saturatedCastWithLong:(jlong)value;

+ (jint)compareWithInt:(jint)a
               withInt:(jint)b;

+ (jboolean)containsWithIntArray:(IOSIntArray *)array
                         withInt:(jint)target;

+ (jint)indexOfWithIntArray:(IOSIntArray *)array
                    withInt:(jint)target;

+ (jint)indexOfWithIntArray:(IOSIntArray *)array
               withIntArray:(IOSIntArray *)target;

+ (jint)lastIndexOfWithIntArray:(IOSIntArray *)array
                        withInt:(jint)target;

+ (jint)minWithIntArray:(IOSIntArray *)array;

+ (jint)maxWithIntArray:(IOSIntArray *)array;

+ (IOSIntArray *)concatWithIntArray2:(IOSObjectArray *)arrays;

+ (IOSByteArray *)toByteArrayWithInt:(jint)value;

+ (jint)fromByteArrayWithByteArray:(IOSByteArray *)bytes;

+ (jint)fromBytesWithByte:(jbyte)b1
                 withByte:(jbyte)b2
                 withByte:(jbyte)b3
                 withByte:(jbyte)b4;

+ (IOSIntArray *)ensureCapacityWithIntArray:(IOSIntArray *)array
                                    withInt:(jint)minLength
                                    withInt:(jint)padding;

+ (NSString *)joinWithNSString:(NSString *)separator
                  withIntArray:(IOSIntArray *)array;

+ (id<JavaUtilComparator>)lexicographicalComparator;

+ (IOSIntArray *)toArrayWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

+ (id<JavaUtilList>)asListWithIntArray:(IOSIntArray *)backingArray;

+ (JavaLangInteger *)tryParseWithNSString:(NSString *)string;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesInts)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesInts_hashCodeWithInt_(jint value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesInts_checkedCastWithLong_(jlong value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesInts_saturatedCastWithLong_(jlong value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesInts_compareWithInt_withInt_(jint a, jint b);

FOUNDATION_EXPORT jboolean ComGoogleCommonPrimitivesInts_containsWithIntArray_withInt_(IOSIntArray *array, jint target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesInts_indexOfWithIntArray_withInt_(IOSIntArray *array, jint target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesInts_indexOfWithIntArray_withIntArray_(IOSIntArray *array, IOSIntArray *target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesInts_lastIndexOfWithIntArray_withInt_(IOSIntArray *array, jint target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesInts_minWithIntArray_(IOSIntArray *array);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesInts_maxWithIntArray_(IOSIntArray *array);

FOUNDATION_EXPORT IOSIntArray *ComGoogleCommonPrimitivesInts_concatWithIntArray2_(IOSObjectArray *arrays);

FOUNDATION_EXPORT IOSByteArray *ComGoogleCommonPrimitivesInts_toByteArrayWithInt_(jint value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesInts_fromByteArrayWithByteArray_(IOSByteArray *bytes);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesInts_fromBytesWithByte_withByte_withByte_withByte_(jbyte b1, jbyte b2, jbyte b3, jbyte b4);

FOUNDATION_EXPORT IOSIntArray *ComGoogleCommonPrimitivesInts_ensureCapacityWithIntArray_withInt_withInt_(IOSIntArray *array, jint minLength, jint padding);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesInts_joinWithNSString_withIntArray_(NSString *separator, IOSIntArray *array);

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesInts_lexicographicalComparator();

FOUNDATION_EXPORT IOSIntArray *ComGoogleCommonPrimitivesInts_toArrayWithJavaUtilCollection_(id<JavaUtilCollection> collection);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonPrimitivesInts_asListWithIntArray_(IOSIntArray *backingArray);

FOUNDATION_EXPORT JavaLangInteger *ComGoogleCommonPrimitivesInts_tryParseWithNSString_(NSString *string);

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesInts, BYTES, jint)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesInts, MAX_POWER_OF_TWO, jint)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesInts)
#if !defined (_ComGoogleCommonPrimitivesInts_LexicographicalComparatorEnum_) && (ComGoogleCommonPrimitivesInts_INCLUDE_ALL || ComGoogleCommonPrimitivesInts_LexicographicalComparatorEnum_INCLUDE)
#define _ComGoogleCommonPrimitivesInts_LexicographicalComparatorEnum_

@class IOSIntArray;

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"

#define JavaUtilComparator_RESTRICT 1
#define JavaUtilComparator_INCLUDE 1
#include "java/util/Comparator.h"


typedef NS_ENUM(NSUInteger, ComGoogleCommonPrimitivesInts_LexicographicalComparator) {
  ComGoogleCommonPrimitivesInts_LexicographicalComparator_INSTANCE = 0,
};

@interface ComGoogleCommonPrimitivesInts_LexicographicalComparatorEnum : JavaLangEnum < NSCopying, JavaUtilComparator > {
}

- (jint)compareWithId:(IOSIntArray *)left
               withId:(IOSIntArray *)right;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonPrimitivesInts_LexicographicalComparatorEnum_values();

+ (ComGoogleCommonPrimitivesInts_LexicographicalComparatorEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT ComGoogleCommonPrimitivesInts_LexicographicalComparatorEnum *ComGoogleCommonPrimitivesInts_LexicographicalComparatorEnum_valueOfWithNSString_(NSString *name);
- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonPrimitivesInts_LexicographicalComparatorEnum_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonPrimitivesInts_LexicographicalComparatorEnum)

FOUNDATION_EXPORT ComGoogleCommonPrimitivesInts_LexicographicalComparatorEnum *ComGoogleCommonPrimitivesInts_LexicographicalComparatorEnum_values_[];

#define ComGoogleCommonPrimitivesInts_LexicographicalComparatorEnum_INSTANCE ComGoogleCommonPrimitivesInts_LexicographicalComparatorEnum_values_[ComGoogleCommonPrimitivesInts_LexicographicalComparator_INSTANCE]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonPrimitivesInts_LexicographicalComparatorEnum, INSTANCE)
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesInts_LexicographicalComparatorEnum)
#if !defined (_ComGoogleCommonPrimitivesInts_IntArrayAsList_) && (ComGoogleCommonPrimitivesInts_INCLUDE_ALL || ComGoogleCommonPrimitivesInts_IntArrayAsList_INCLUDE)
#define _ComGoogleCommonPrimitivesInts_IntArrayAsList_

@class IOSIntArray;
@class JavaLangInteger;
@protocol JavaUtilList;

#define JavaUtilAbstractList_RESTRICT 1
#define JavaUtilAbstractList_INCLUDE 1
#include "java/util/AbstractList.h"

#define JavaUtilRandomAccess_RESTRICT 1
#define JavaUtilRandomAccess_INCLUDE 1
#include "java/util/RandomAccess.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonPrimitivesInts_IntArrayAsList_serialVersionUID 0LL

@interface ComGoogleCommonPrimitivesInts_IntArrayAsList : JavaUtilAbstractList < JavaUtilRandomAccess, JavaIoSerializable > {
 @public
  IOSIntArray *array_;
  jint start_;
  jint end_;
}

- (instancetype)initWithIntArray:(IOSIntArray *)array;

- (instancetype)initWithIntArray:(IOSIntArray *)array
                         withInt:(jint)start
                         withInt:(jint)end;

- (jint)size;

- (jboolean)isEmpty;

- (JavaLangInteger *)getWithInt:(jint)index;

- (jboolean)containsWithId:(id)target;

- (jint)indexOfWithId:(id)target;

- (jint)lastIndexOfWithId:(id)target;

- (JavaLangInteger *)setWithInt:(jint)index
                         withId:(JavaLangInteger *)element;

- (id<JavaUtilList>)subListWithInt:(jint)fromIndex
                           withInt:(jint)toIndex;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (NSString *)description;

- (IOSIntArray *)toIntArray;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesInts_IntArrayAsList)

J2OBJC_FIELD_SETTER(ComGoogleCommonPrimitivesInts_IntArrayAsList, array_, IOSIntArray *)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesInts_IntArrayAsList, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesInts_IntArrayAsList)
