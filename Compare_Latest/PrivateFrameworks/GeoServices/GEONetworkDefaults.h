/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface GEONetworkDefaults : NSObject
{
    NSMutableArray *_completionHandlers;
    BOOL _isRegistering;
    NSString *_cacheFilePath;
}

+ (id)sharedNetworkDefaults;
- (void)registerNetworkDefaults:(id)arg1;
- (BOOL)needsUpdate;
- (void)dealloc;
- (id)init;
- (void)_registrationComplete;

@end
