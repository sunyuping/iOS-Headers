/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIAutoRotatingWindow.h"

@class UIImageView;

@interface CKEffectsWindow : UIAutoRotatingWindow
{
    UIImageView *shadowImageView;
}

- (void)dealloc;
- (id)init;
- (BOOL)shadowHidden;
@property(nonatomic, getter=isShadowHidden) BOOL shadowHidden; // @dynamic shadowHidden;
- (void)didAddSubview:(id)arg1;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView;

@end

