/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, NSMutableSet, NSString, SUMessage;

@interface SUScriptMessage : SUScriptObject
{
    NSMutableSet *_callbacks;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)_removeCallback:(id)arg1;
- (id)_newTextMessagePartWithObject:(id)arg1;
- (id)_newPlistMessagePartWithObject:(id)arg1;
- (id)_newJSONMessagePartWithObject:(id)arg1;
- (void)_addCallback:(id)arg1;
@property(copy) NSString *postURL;
@property(copy) NSArray *messageParts;
- (id)_className;
- (id)uploadURLForAttachmentType:(id)arg1;
- (void)setUploadURL:(id)arg1 forAttachmentType:(id)arg2;
- (void)sendWithCompletionHandler:(id)arg1;
- (id)makeMessagePartWithObject:(id)arg1 mimeType:(id)arg2;
- (id)makeMessagePartWithMediaObject:(id)arg1;
@property(retain, nonatomic) SUMessage *nativeMessage;
- (void)dealloc;
- (id)init;

@end

