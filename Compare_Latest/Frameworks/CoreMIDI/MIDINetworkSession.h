/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MIDINetworkSession : NSObject
{
    struct _MIDINetworkSessionImpl *_impl;
}

+ (id)defaultSession;
- (void)updateFromEntity;
- (void)setStateToEntity;
- (void)refreshBonjourName;
- (id)init;
- (void)dealloc;
@property(nonatomic, getter=isEnabled) BOOL enabled;
@property(readonly, nonatomic) unsigned int networkPort;
@property(readonly, nonatomic) NSString *networkName;
@property(readonly, nonatomic) NSString *localName;
@property(nonatomic) unsigned int connectionPolicy;
- (id)connections;
- (BOOL)addOrRemoveConnection:(id)arg1 add:(BOOL)arg2;
- (BOOL)addConnection:(id)arg1;
- (BOOL)removeConnection:(id)arg1;
- (id)contacts;
- (BOOL)addContact:(id)arg1;
- (BOOL)removeContact:(id)arg1;
- (void)sessionChanged;
- (void)contactsChanged;
- (struct OpaqueMIDIEndpoint *)sourceEndpoint;
- (struct OpaqueMIDIEndpoint *)destinationEndpoint;

@end

