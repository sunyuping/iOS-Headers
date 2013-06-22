/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Message/MFDAMailAccountConsumer.h>

#import "DAMailboxRequestConsumer-Protocol.h"
#import "DAMailboxStreamingContentConsumer-Protocol.h"

@class ActivityMonitor, NSArray, NSMutableData, NSString;

@interface MFDAMailAccountSyncConsumer : MFDAMailAccountConsumer <DAMailboxRequestConsumer, DAMailboxStreamingContentConsumer>
{
    NSArray *_requests;
    NSArray *_consumers;
    NSString *_tag;
    NSString *_accountID;
    ActivityMonitor *_monitor;
    id _streamConsumer;
    NSMutableData *_bodyData;
    BOOL _moreAvailable;
    BOOL _receivedFirstItem;
    BOOL _firstSyncBatch;
    int _syncKeyResets;
    int _serverErrors;
}

- (id)initWithCurrentTag:(id)arg1 accountID:(id)arg2 requests:(id)arg3 consumers:(id)arg4;
- (void)dealloc;
- (void)reset;
- (void)_setTag:(id)arg1;
- (id)originalThreadMonitor;
- (id)actionsConsumer;
- (void)handleSyncResponses:(id)arg1;
- (void)partialResultsForMailbox:(id)arg1 actions:(id)arg2 responses:(id)arg3 percentComplete:(double)arg4 moreAvailable:(BOOL)arg5;
- (void)resultsForMailbox:(id)arg1 newTag:(id)arg2 actions:(id)arg3 responses:(id)arg4 percentComplete:(double)arg5 moreAvailable:(BOOL)arg6;
- (BOOL)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2;
- (void)consumeData:(char *)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4;
- (void)didEndStreamingForMailMessage:(id)arg1;
- (void)taskFailed:(id)arg1 withStatusCode:(int)arg2;
@property(readonly, nonatomic) BOOL moreAvailable; // @synthesize moreAvailable=_moreAvailable;
@property(retain, nonatomic) id streamConsumer; // @synthesize streamConsumer=_streamConsumer;
@property(readonly, nonatomic) NSString *tag; // @synthesize tag=_tag;

@end

