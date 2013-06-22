/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface CXNamespace : NSObject
{
    char *mUri;
    struct _xmlDoc *mDocument;
    struct _xmlNs *mDocumentNamespace;
}

+ (BOOL)isNamespaceSupported:(const char *)arg1;
+ (BOOL)isPrefixSupportedFromNodeContext:(struct _xmlNode *)arg1 prefix:(const char *)arg2;
+ (BOOL)isPrefixSupportedFromStream:(struct _xmlTextReader *)arg1 prefix:(const char *)arg2;
+ (void)clearRegisteredNamespaces;
- (id)initWithUri:(const char *)arg1;
- (BOOL)containsNode:(struct _xmlNode *)arg1;
- (BOOL)containsAttribute:(struct _xmlAttr *)arg1;
- (const char *)uri;

@end

