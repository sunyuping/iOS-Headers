/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "TPBottomLockBar.h"

@class NSMutableDictionary, UIButton;

@interface SBAwayLockBar : TPBottomLockBar
{
    UIButton *_slideshowButton;
    UIButton *_cameraButton;
    NSMutableDictionary *_orientationToButtonImages;
}

- (void)dealloc;
- (void)setShowsSlideshowButton:(BOOL)arg1;
- (void)setSlideshowButtonSelected:(BOOL)arg1;
- (void)setShowsCameraButton:(BOOL)arg1;
- (void)setOrientation:(int)arg1;
- (id)_newButtonWithAction:(SEL)arg1 tag:(int)arg2 hasComposedImage:(BOOL)arg3;
- (id)_unselectedImageForButtonTag:(int)arg1 interfaceOrientation:(int)arg2;
- (id)_selectedImageForButtonTag:(int)arg1 interfaceOrientation:(int)arg2;
- (void)_setImagesForButton:(id)arg1 orientation:(int)arg2;
- (void)_setShowsButton:(BOOL)arg1 button:(id *)arg2 buttonTag:(int)arg3 hasComposedImage:(BOOL)arg4 action:(SEL)arg5 animated:(BOOL)arg6;
- (void)_slideshowButtonActivated:(id)arg1;
- (void)_cameraButtonHit:(id)arg1;

@end

