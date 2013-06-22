/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FTServices/FTFaceTimeMessage.h>

#import "NSCopying-Protocol.h"

@class NSData, NSNumber, NSString;

@interface FTRelayInitateMessage : FTFaceTimeMessage <NSCopying>
{
    NSData *_selfPushToken;
    NSNumber *_selfNatType;
    NSNumber *_selfNATIP;
    NSString *_peerID;
    NSData *_peerPushToken;
    NSNumber *_peerNatType;
    NSNumber *_peerNATIP;
    NSNumber *_relayType;
    NSData *_relayConnectionId;
    NSData *_relayTransactionIdAlloc;
    NSData *_relayTokenAllocReq;
    NSData *_selfRelayIP;
    NSNumber *_selfRelayPort;
    NSData *_peerRelayIP;
    NSNumber *_peerRelayPort;
}

@property(copy) NSNumber *peerRelayPort; // @synthesize peerRelayPort=_peerRelayPort;
@property(copy) NSData *peerRelayIP; // @synthesize peerRelayIP=_peerRelayIP;
@property(copy) NSNumber *selfRelayPort; // @synthesize selfRelayPort=_selfRelayPort;
@property(copy) NSData *selfRelayIP; // @synthesize selfRelayIP=_selfRelayIP;
@property(copy) NSData *relayTokenAllocReq; // @synthesize relayTokenAllocReq=_relayTokenAllocReq;
@property(copy) NSData *relayTransactionIdAlloc; // @synthesize relayTransactionIdAlloc=_relayTransactionIdAlloc;
@property(copy) NSData *relayConnectionId; // @synthesize relayConnectionId=_relayConnectionId;
@property(copy) NSNumber *relayType; // @synthesize relayType=_relayType;
@property(copy) NSNumber *peerNATIP; // @synthesize peerNATIP=_peerNATIP;
@property(copy) NSNumber *peerNatType; // @synthesize peerNatType=_peerNatType;
@property(copy) NSData *peerPushToken; // @synthesize peerPushToken=_peerPushToken;
@property(copy) NSString *peerID; // @synthesize peerID=_peerID;
@property(copy) NSNumber *selfNATIP; // @synthesize selfNATIP=_selfNATIP;
@property(copy) NSNumber *selfNatType; // @synthesize selfNatType=_selfNatType;
@property(copy) NSData *selfPushToken; // @synthesize selfPushToken=_selfPushToken;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

