/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKDataRequest.h>

@class NSArray, NSData, NSString;

@interface GKSendGameInviteDataRequest : GKDataRequest
{
    NSArray *_players;
    NSString *_message;
    NSData *_connectionData;
    NSString *_rid;
    BOOL _hosted;
    NSData *_sessionToken;
}

@property(retain, nonatomic) NSData *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(nonatomic) BOOL hosted; // @synthesize hosted=_hosted;
@property(retain, nonatomic) NSString *rid; // @synthesize rid=_rid;
@property(retain, nonatomic) NSData *connectionData; // @synthesize connectionData=_connectionData;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSArray *players; // @synthesize players=_players;
- (void)handleResponseFromServer:(id)arg1;
- (id)request;
- (id)header;
- (id)key;
- (void)dealloc;

@end

