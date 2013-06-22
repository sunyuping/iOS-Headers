/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSMutableDictionary, NSURL;

@interface SUMessage : NSObject <NSCopying>
{
    struct dispatch_queue_s *_dispatchQueue;
    NSArray *_messageParts;
    NSURL *_postURL;
    NSMutableDictionary *_uploadURLs;
}

- (id)uploadURLForMIMEType:(id)arg1;
- (id)uploadURLForUTI:(id)arg1;
- (void)setUploadURL:(id)arg1 forUTI:(id)arg2;
@property(copy) NSURL *postURL;
@property(copy) NSArray *messageParts;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithMessageParts:(id)arg1;
- (id)init;
- (id)_initSUMessage;

@end

