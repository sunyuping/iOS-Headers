/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SLWeeAppServiceHandler <NSObject>
- (id)vignetteImageForOrientation:(int)arg1 forPad:(BOOL)arg2;
- (struct CGRect)contentFrame;
- (struct CGPoint)iconOffset;
- (struct UIEdgeInsets)iconImageInsets;
- (id)iconImage;
- (id)shortLabelText;
- (id)labelText;
- (BOOL)canPost;
- (void)setKeyboardSuppressed:(BOOL)arg1;
- (void)hideKeyboardWithAnimationTime:(double)arg1;
- (void)showKeyboardWithAnimationTime:(double)arg1;
- (void)unloadUI;
- (id)createUIWithOrientation:(int)arg1 forPad:(BOOL)arg2 completionHandler:(id)arg3;
@end

