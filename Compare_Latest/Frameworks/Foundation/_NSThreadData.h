/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface _NSThreadData : NSObject
{
    id dict;
    id name;
    id target;
    SEL selector;
    id argument;
    int seqNum;
    unsigned char qstate;
    unsigned char ____;
    unsigned char cancel;
    unsigned char status;
    id performQ;
    NSMutableDictionary *performD;
    struct _opaque_pthread_attr_t {
        long __sig;
        char __opaque[36];
    } attr;
    struct _opaque_pthread_t {
        long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[596];
    } *tid;
}

@end

