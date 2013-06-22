/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface IMServiceAgent : NSObject
{
    NSDictionary *_currentAVChatInfo;
}

+ (id)notificationCenter;
+ (void)forgetStatusImageAppearance;
+ (id)imageNameForStatus:(unsigned int)arg1;
+ (id)imageURLForStatus:(unsigned int)arg1;
+ (id)sharedAgent;
+ (int)serviceAgentCapabilities;
+ (void)setServiceAgentCapabilities:(int)arg1;
- (id)myPictureData;
- (void)launchIfNecessary;
@property(readonly, nonatomic) unsigned long long vcCapabilities;
- (unsigned int)requestVideoStillForPerson:(id)arg1;
@property(readonly, nonatomic) unsigned int requestAudioReflectorStop;
@property(readonly, nonatomic) unsigned int requestAudioReflectorStart;
@property(readonly, nonatomic) NSDictionary *currentAVChatInfo;
@property(retain, nonatomic) NSArray *myAwayMessages;
@property(retain, nonatomic) NSArray *myAvailableMessages;
- (void)setMyStatus:(unsigned int)arg1 message:(id)arg2;
- (id)notificationCenter;
- (id)serviceWithNameNonBlocking:(id)arg1;
- (id)serviceWithName:(id)arg1;

@end
