/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MSStreamsProtocolDelegate-Protocol.h"

@protocol MSSubscribeStreamsProtocolDelegate <MSStreamsProtocolDelegate>
- (void)subscribeStreamsProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)subscribeStreamsProtocol:(id)arg1 didFinishError:(id)arg2;
- (void)subscribeStreamsProtocol:(id)arg1 didFindShareState:(id)arg2;
- (void)subscribeStreamsProtocol:(id)arg1 difFindTemporarilyUnavailableSubscriptionForPersonID:(id)arg2;
- (void)subscribeStreamsProtocol:(id)arg1 didFindDisappearedSubscriptionForPersonID:(id)arg2;
- (void)subscribeStreamsProtocol:(id)arg1 didFinishReceivingUpdatesForPersonID:(id)arg2 ctag:(id)arg3;
- (void)subscribeStreamsProtocol:(id)arg1 didReceiveAssetCollections:(id)arg2 forPersonID:(id)arg3;
- (void)subscribeStreamsProtocol:(id)arg1 willReceiveUpdatesForPersonID:(id)arg2 wasReset:(BOOL)arg3 metadata:(id)arg4;
@end

