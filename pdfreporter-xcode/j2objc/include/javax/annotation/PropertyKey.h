//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/jsr305/build_result/java/javax/annotation/PropertyKey.java
//

#ifndef _JavaxAnnotationPropertyKey_H_
#define _JavaxAnnotationPropertyKey_H_

@class JavaxAnnotationMetaWhenEnum;

#include "J2ObjC_header.h"
#include "java/lang/annotation/Annotation.h"

@protocol JavaxAnnotationPropertyKey < JavaLangAnnotationAnnotation >

@property (readonly) JavaxAnnotationMetaWhenEnum *when;

@end

@interface JavaxAnnotationPropertyKey : NSObject < JavaxAnnotationPropertyKey > {
 @private
  JavaxAnnotationMetaWhenEnum *when_;
}

- (instancetype)initWithWhen:(JavaxAnnotationMetaWhenEnum *)when__;

+ (JavaxAnnotationMetaWhenEnum *)whenDefault;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationPropertyKey)

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationPropertyKey)

#endif // _JavaxAnnotationPropertyKey_H_
