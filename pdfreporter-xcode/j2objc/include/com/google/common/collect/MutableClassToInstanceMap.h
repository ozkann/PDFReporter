//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/collect/MutableClassToInstanceMap.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectMutableClassToInstanceMap_RESTRICT
#define ComGoogleCommonCollectMutableClassToInstanceMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectMutableClassToInstanceMap_RESTRICT
#if !defined (_ComGoogleCommonCollectMutableClassToInstanceMap_) && (ComGoogleCommonCollectMutableClassToInstanceMap_INCLUDE_ALL || ComGoogleCommonCollectMutableClassToInstanceMap_INCLUDE)
#define _ComGoogleCommonCollectMutableClassToInstanceMap_

@class IOSClass;
@protocol ComGoogleCommonCollectMapConstraint;
@protocol JavaUtilMap;

#define ComGoogleCommonCollectMapConstraints_RESTRICT 1
#define ComGoogleCommonCollectMapConstraints_ConstrainedMap_INCLUDE 1
#include "com/google/common/collect/MapConstraints.h"

#define ComGoogleCommonCollectClassToInstanceMap_RESTRICT 1
#define ComGoogleCommonCollectClassToInstanceMap_INCLUDE 1
#include "com/google/common/collect/ClassToInstanceMap.h"


#define ComGoogleCommonCollectMutableClassToInstanceMap_serialVersionUID 0LL

@interface ComGoogleCommonCollectMutableClassToInstanceMap : ComGoogleCommonCollectMapConstraints_ConstrainedMap < ComGoogleCommonCollectClassToInstanceMap > {
}

+ (ComGoogleCommonCollectMutableClassToInstanceMap *)create;

+ (ComGoogleCommonCollectMutableClassToInstanceMap *)createWithJavaUtilMap:(id<JavaUtilMap>)backingMap;

- (id)putInstanceWithIOSClass:(IOSClass *)type
                       withId:(id)value;

- (id)getInstanceWithIOSClass:(IOSClass *)type;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCollectMutableClassToInstanceMap_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCollectMutableClassToInstanceMap)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonCollectMutableClassToInstanceMap *ComGoogleCommonCollectMutableClassToInstanceMap_create();

FOUNDATION_EXPORT ComGoogleCommonCollectMutableClassToInstanceMap *ComGoogleCommonCollectMutableClassToInstanceMap_createWithJavaUtilMap_(id<JavaUtilMap> backingMap);

FOUNDATION_EXPORT id<ComGoogleCommonCollectMapConstraint> ComGoogleCommonCollectMutableClassToInstanceMap_VALUE_CAN_BE_CAST_TO_KEY_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectMutableClassToInstanceMap, VALUE_CAN_BE_CAST_TO_KEY_, id<ComGoogleCommonCollectMapConstraint>)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectMutableClassToInstanceMap, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMutableClassToInstanceMap)
#if !defined (_ComGoogleCommonCollectMutableClassToInstanceMap_$1_) && (ComGoogleCommonCollectMutableClassToInstanceMap_INCLUDE_ALL || ComGoogleCommonCollectMutableClassToInstanceMap_$1_INCLUDE)
#define _ComGoogleCommonCollectMutableClassToInstanceMap_$1_

@class IOSClass;

#define ComGoogleCommonCollectMapConstraint_RESTRICT 1
#define ComGoogleCommonCollectMapConstraint_INCLUDE 1
#include "com/google/common/collect/MapConstraint.h"


@interface ComGoogleCommonCollectMutableClassToInstanceMap_$1 : NSObject < ComGoogleCommonCollectMapConstraint > {
}

- (void)checkKeyValueWithId:(IOSClass *)key
                     withId:(id)value;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMutableClassToInstanceMap_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMutableClassToInstanceMap_$1)
