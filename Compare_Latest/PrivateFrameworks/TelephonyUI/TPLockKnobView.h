/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIImageView.h"

@class TPBottomLockBar, UIAlphaAnimation;

@interface TPLockKnobView : UIImageView
{
    TPBottomLockBar *_track;
    UIAlphaAnimation *_animation;
    float _centerDelta;
    BOOL _tracking;
}

- (id)initWithImage:(id)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setLockView:(id)arg1;
- (void)dealloc;
- (BOOL)shouldBeginTracking:(id)arg1;
- (void)beginTracking:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

@end

