/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreServices/SSRequest.h>

#import "SSCoding-Protocol.h"

@class NSArray;

@interface SSPersonalizeOffersRequest : SSRequest <SSCoding>
{
    NSArray *_items;
}

- (void *)copyXPCEncoding;
- (id)copyPropertyListEncoding;
- (id)initWithXPCEncoding:(void *)arg1;
- (id)initWithPropertyListEncoding:(id)arg1;
- (void)_sendResponseToDelegate:(id)arg1;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)handleFinishResponse:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSArray *items;
- (void)dealloc;
- (id)initWithItems:(id)arg1;

// Remaining properties
@property(nonatomic) id <SSPersonalizeOffersDelegate> delegate; // @dynamic delegate;

@end

