/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIProgressView.h"

@class NSMutableArray, UIImage;

@interface TLVibrationRecorderProgressView : UIProgressView
{
    double _currentTimeInterval;
    double _maximumTimeInterval;
    UIImage *_resizableDotImage;
    struct CGSize _dotSize;
    struct CGSize _dotInsets;
    NSMutableArray *_dots;
    id _dotForCurrentVibrationComponent;
    double _currentVibrationComponentDidBeginTimeInterval;
    double _previousPauseDidBeginTimeInterval;
    unsigned int _roundedCornersCompensationDelayMode;
}

@property(nonatomic) unsigned int roundedCornersCompensationDelayMode; // @synthesize roundedCornersCompensationDelayMode=_roundedCornersCompensationDelayMode;
@property(nonatomic) double currentTimeInterval; // @synthesize currentTimeInterval=_currentTimeInterval;
- (struct CGRect)_frameForDotAtTimeInterval:(double)arg1 duration:(double)arg2;
- (double)_cappedValueForTimeInterval:(double)arg1;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)clearAllVibrationComponents;
- (void)vibrationComponentDidEnd;
- (void)vibrationComponentDidStart;
- (void)dealloc;
- (id)initWithProgressViewStyle:(int)arg1 maximumTimeInterval:(double)arg2;

@end

