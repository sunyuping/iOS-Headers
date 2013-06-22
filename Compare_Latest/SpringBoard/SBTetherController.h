/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SBTetherController : NSObject
{
    int _tetherState;
    int _lastOrientationCode;
    BOOL _orientationNotificationsDisabled;
}

+ (id)sharedInstance;
- (id)init;
- (void)_postDisplayPortNotificationCode:(int)arg1;
- (void)_setTetherState:(int)arg1;
- (BOOL)isTethered;
- (BOOL)usesDisplayPortTethering;
- (void)_handleDemoModeChanged;
- (void)noteInterfaceOrientationChanged;
- (void)setDitheringEnabled:(int)arg1;
- (BOOL)_serviceExists:(struct __CFString *)arg1;
- (BOOL)_reverseTetheringActive;
- (void)updatePreferencesIfNeeded;
- (void)dealloc;
@property(nonatomic, getter=isOrientationNotificationDisabled) BOOL orientationNotificationDisabled; // @synthesize orientationNotificationDisabled=_orientationNotificationsDisabled;

@end

