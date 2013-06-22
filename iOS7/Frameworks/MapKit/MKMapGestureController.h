/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MKVariableDelayTapRecognizerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "_MKUserInteractionGestureRecognizerTouchObserver-Protocol.h"

@class MKBasicMapView, MKTiltGestureRecognizer, MKVariableDelayTapRecognizer, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer, _MKUserInteractionGestureRecognizer, _UIDynamicAnimationGroup, _UIDynamicValueAnimation;

@interface MKMapGestureController : NSObject <MKVariableDelayTapRecognizerDelegate, _MKUserInteractionGestureRecognizerTouchObserver, UIGestureRecognizerDelegate>
{
    MKBasicMapView *_mapView;
    id <MKMapGestureControllerDelegate> _delegate;
    MKVariableDelayTapRecognizer *_doubleTapGestureRecognizer;
    UITapGestureRecognizer *_twoFingerTapGestureRecognizer;
    UILongPressGestureRecognizer *_twoFingerLongPressGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _lastScale;
    _UIDynamicValueAnimation *_pinchDecelerationAnimation;
    _UIDynamicAnimationGroup *_panDecelerationAnimationGroup;
    int _gestureCount;
    BOOL _panWithMomentum;
    _MKUserInteractionGestureRecognizer *_touchGestureRecognizer;
    UIRotationGestureRecognizer *_rotationGestureRecognizer;
    _UIDynamicValueAnimation *_rotationDecelerationAnimation;
    MKTiltGestureRecognizer *_tiltGestureRecognizer;
    _UIDynamicValueAnimation *_tiltDecelerationAnimation;
}

@property(nonatomic) BOOL panWithMomentum; // @synthesize panWithMomentum=_panWithMomentum;
@property(readonly, nonatomic) MKBasicMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) id <MKMapGestureControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
@property(readonly, nonatomic) UILongPressGestureRecognizer *twoFingerLongPressGestureRecognizer; // @synthesize twoFingerLongPressGestureRecognizer=_twoFingerLongPressGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *twoFingerTapGestureRecognizer; // @synthesize twoFingerTapGestureRecognizer=_twoFingerTapGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (double)variableDelayTapRecognizer:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3;
- (void)gestureRecognizerTouchesCanceled:(id)arg1;
- (void)gestureRecognizerTouchesEnded:(id)arg1;
- (void)gestureRecognizerTouchesBegan:(id)arg1;
- (void)handleTouch:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)handlePinch:(id)arg1;
- (void)handleTwoFingerLongPress:(id)arg1;
- (void)handleTwoFingerTap:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handleRotation:(id)arg1;
- (void)handleTilt:(id)arg1;
- (void)stopUserInteractionFromExternalGesture;
- (void)startUserInteractionFromExternalGesture;
- (void)endGesturing;
- (void)beginGesturing;
- (void)stopDynamicAnimations;
@property(nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property(nonatomic, getter=isZoomEnabled) BOOL zoomEnabled;
- (void)dealloc;
@property(nonatomic, getter=isTiltEnabled) BOOL tiltEnabled;
@property(nonatomic, getter=isRotationEnabled) BOOL rotationEnabled;
- (id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2;
- (id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2 doubleTapTargetView:(id)arg3;

@end
