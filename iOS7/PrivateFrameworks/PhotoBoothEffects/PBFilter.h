/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CIFilter;

@interface PBFilter : NSObject
{
    CIFilter *_ciFilter;
    CIFilter *_wrapMirrorFilter;
}

+ (id)filterWithName:(id)arg1;
+ (BOOL)needsDisplayForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
- (id)ciFilter;
- (id)description;
- (id)localizedName;
- (id)inputKeys;
- (void)applyParametersToCIFilter:(BOOL)arg1 extent:(struct CGRect)arg2;
- (void)resetInputImage;
- (id)createOutputImage:(id)arg1 mirrored:(BOOL)arg2 size:(struct CGSize)arg3;
- (void)setDefaults;
- (void)dealloc;
- (BOOL)needsWrapMirror;
- (id)name;
- (id)ciFilterName;
- (id)init;
- (void)renderWithContext:(id)arg1 inputSize:(struct CGSize)arg2 outputRect:(struct CGRect)arg3 mirrored:(BOOL)arg4;
- (id)_presentationName;
- (BOOL)allowAbsoluteGestures;
- (void)handleRotateGesture:(float)arg1 stateBegan:(BOOL)arg2 mirror:(BOOL)arg3;
- (void)handlePinchGesture:(float)arg1 stateBegan:(BOOL)arg2;
- (void)handlePanGesture:(struct CGPoint)arg1 viewSize:(struct CGSize)arg2 stateBegan:(BOOL)arg3 mirror:(BOOL)arg4;
- (void)handleGestureAtLocations:(struct CGPoint *)arg1 count:(int)arg2 translation:(struct CGPoint)arg3 viewSize:(struct CGSize)arg4 stateBegan:(BOOL)arg5 mirror:(BOOL)arg6;
- (void)handleTapGesture:(struct CGPoint)arg1 viewSize:(struct CGSize)arg2 mirror:(BOOL)arg3;
- (void)setPointValue:(struct CGPoint)arg1 forKeyIfSupported:(id)arg2;
- (struct CGPoint)pointValueForKeyIfSupported:(id)arg1;
- (void)setFloatValue:(float)arg1 forKeyIfSupported:(id)arg2;
- (float)floatValueForKeyIfSupported:(id)arg1;

@end
