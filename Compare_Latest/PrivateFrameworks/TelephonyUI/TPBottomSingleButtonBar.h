/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <TelephonyUI/TPBottomBar.h>

@class TPButton, UIImageView, UIView;

@interface TPBottomSingleButtonBar : TPBottomBar
{
    id _delegate;
    UIImageView *_backgroundView;
    UIView *_well;
    TPButton *_button;
}

+ (id)_backgroundImage;
- (void)addBackgroundAndWellIfNecessary;
- (id)initForIncomingCallWaitingWithFrame:(struct CGRect)arg1;
- (id)initForEndCallWithFrame:(struct CGRect)arg1;
- (id)initForEndVideoWithFrame:(struct CGRect)arg1;
- (id)initForTTYWithFrame:(struct CGRect)arg1;
- (id)initForVoiceControlWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)setButton:(id)arg1 andStyle:(BOOL)arg2;
- (id)button;

@end

