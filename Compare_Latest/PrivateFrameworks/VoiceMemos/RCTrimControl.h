/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIControl.h"

@class RCTrimBezel, RCTrimHUD, UIImageView;

@interface RCTrimControl : UIControl
{
    double _duration;
    double _durationWhileTrackingMiddle;
    double _minTrimmedDuration;
    double _maxTrimmedDuration;
    double _startTimeInterval;
    double _endTimeInterval;
    UIImageView *_scrubberKnob;
    BOOL _showsScrubberKnob;
    double _playingTimeInterval;
    BOOL _tracking;
    BOOL _trackingLeft;
    BOOL _trackingMiddle;
    BOOL _trackingRight;
    BOOL _trackingScrubber;
    struct CGPoint _trackingPoint;
    RCTrimBezel *_bezel;
    UIImageView *_trackView;
    RCTrimHUD *_trimHUD;
    RCTrimHUD *_trimHUDLong;
    id <RCTrimControlDelegate> _delegate;
}

@property(nonatomic) double playingTimeInterval; // @synthesize playingTimeInterval=_playingTimeInterval;
@property(nonatomic) BOOL showsScrubberKnob; // @synthesize showsScrubberKnob=_showsScrubberKnob;
@property(nonatomic) double endTimeInterval; // @synthesize endTimeInterval=_endTimeInterval;
@property(nonatomic) double startTimeInterval; // @synthesize startTimeInterval=_startTimeInterval;
@property(nonatomic) double maxTrimmedDuration; // @synthesize maxTrimmedDuration=_maxTrimmedDuration;
@property(nonatomic) double minTrimmedDuration; // @synthesize minTrimmedDuration=_minTrimmedDuration;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) __weak id <RCTrimControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateTrimHUD;
- (struct CGRect)_scrubberKnobHitRect;
- (struct CGRect)_rightHandleRect;
- (struct CGRect)_leftHandleRect;
- (struct CGRect)_enabledRect;
- (float)_widthForTotalDuration;
- (void)setPlayingTimeInterval:(double)arg1 animated:(BOOL)arg2;
- (void)setShowsScrubberKnob:(BOOL)arg1 animated:(BOOL)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithDuration:(double)arg1;

@end
