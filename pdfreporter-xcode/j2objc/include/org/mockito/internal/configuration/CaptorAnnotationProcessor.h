//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/configuration/CaptorAnnotationProcessor.java
//

#ifndef _OrgMockitoInternalConfigurationCaptorAnnotationProcessor_H_
#define _OrgMockitoInternalConfigurationCaptorAnnotationProcessor_H_

@class JavaLangReflectField;
@protocol OrgMockitoCaptor;

#include "J2ObjC_header.h"
#include "org/mockito/internal/configuration/FieldAnnotationProcessor.h"

@interface OrgMockitoInternalConfigurationCaptorAnnotationProcessor : NSObject < OrgMockitoInternalConfigurationFieldAnnotationProcessor > {
}

- (id)processWithJavaLangAnnotationAnnotation:(id<OrgMockitoCaptor>)annotation
                     withJavaLangReflectField:(JavaLangReflectField *)field;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationCaptorAnnotationProcessor)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationCaptorAnnotationProcessor)

#endif // _OrgMockitoInternalConfigurationCaptorAnnotationProcessor_H_
