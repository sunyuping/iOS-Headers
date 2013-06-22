/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CAAnimationGroup, CALayer, MKAccuracyLayer, MKDotBounceAnimation, MKHoverAnimation, MKUserLocationAccuracyAnimation, MKUserLocationLayer, MKUserLocationPositionAnimation, MKUserLocationView;

@interface MKUserLocationViewInternal : NSObject
{
    id delegate;
    MKUserLocationView *view;
    MKUserLocationLayer *layer;
    CALayer *dotLayer;
    CALayer *bounceLayer;
    CALayer *userLayer;
    CALayer *headingLayer;
    CALayer *haloLayer;
    MKAccuracyLayer *accuracyLayer;
    unsigned int mapType;
    int zoomDirection;
    float accuracy;
    double headingAccuracy;
    MKUserLocationPositionAnimation *_positionAnimation;
    MKUserLocationAccuracyAnimation *_accuracyAnimation;
    MKDotBounceAnimation *_dotBounceAnimation;
    MKHoverAnimation *_hoverAnimation;
    CAAnimationGroup *_haloAnimation;
    struct {
        unsigned int animatedSublayers:1;
        unsigned int disableAccuracyDidUpdate:1;
        unsigned int enforceLowerBound:1;
        unsigned int shouldDisplayHalo:1;
        unsigned int shouldDisplayEffects:1;
        unsigned int effectsVisible:1;
        unsigned int shouldDisplayAccuracy:1;
        unsigned int shouldDisplayHeading:1;
        unsigned int stale:1;
        unsigned int delegateAccuracyDidUpdate:1;
        unsigned int delegateDidQuiesce:1;
        unsigned int delegateIsZooming:1;
        unsigned int willAnimateProperty:1;
    } flags;
}

+ (void)frameLayer:(id)arg1 initialAccuracy:(float *)arg2 restAccuracy:(float *)arg3;
+ (float)maxVisibleAccuracyDiameter;
+ (struct CADoubleRect)effectiveFrameWithFrame:(struct CADoubleRect)arg1;
+ (struct CGSize)effectsSize;
+ (id)haloImages;
+ (id)bounceImageRects;
+ (float)accuracyDiameter:(float)arg1 level:(unsigned int)arg2;
+ (id)headingAngleLargeImage;
+ (id)headingAngleMediumImage;
+ (id)headingAngleSmallImage;
+ (id)greyDotPressedImage;
+ (id)greyDotImage;
+ (id)dotPressedImage;
+ (id)dotImage;
+ (void)initialize;
@property(nonatomic) int zoomDirection; // @synthesize zoomDirection;
@property(nonatomic) unsigned int mapType; // @synthesize mapType;
@property(nonatomic) double headingAccuracy; // @synthesize headingAccuracy;
@property(nonatomic) id delegate; // @synthesize delegate;
- (void)resetAccuracy;
- (void)clampAccuracyValue:(float *)arg1;
- (void)userLocationAccuracyDidUpdate;
- (void)didEndZoom;
- (void)didBeginZoom;
- (void)removeSublayer:(id)arg1 animated:(BOOL)arg2;
- (void)insertSublayer:(id)arg1 animated:(BOOL)arg2;
- (void)insertSublayer:(id)arg1;
- (void)orderInLayer:(id)arg1 beginTime:(double)arg2;
- (void)orderInDotLayer;
- (id)dropTeleportingUserLocationAtPoint:(struct CGPoint)arg1;
- (void)terminateHoverAccuracy:(float)arg1 duration:(double)arg2;
- (void)removeHover;
- (void)stopHover;
- (unsigned int)indexForSubLayer:(id)arg1;
- (void)effectsVisibleDidChange;
- (void)shouldDisplayEffectsDidChange;
- (void)updateHover;
- (void)resumeHover;
- (void)pauseHover;
- (void)resumeHalo;
- (void)pauseHalo;
- (void)shouldDisplayHeadingDidChange;
- (void)updateHeading;
- (void)shouldDisplayAccuracyDidChange;
- (void)staleDidChange;
- (void)updateDot;
- (void)updateHalo;
@property(readonly, nonatomic) BOOL needsHalo;
@property(readonly, nonatomic) BOOL hasHalo;
@property(readonly, nonatomic) BOOL canHaloExcludingEffects;
@property(readonly, nonatomic) BOOL canHalo;
@property(readonly, nonatomic) BOOL canHaloExcludingAccuracy;
- (void)setZoomDirection:(int)arg1 deltaScale:(float)arg2;
@property(readonly, nonatomic) BOOL hasQuiesced;
- (BOOL)isAccuracyChanging;
@property(readonly, nonatomic, getter=isHovering) BOOL hovering;
- (BOOL)isDotTeleporting;
- (BOOL)isDotBouncing;
- (void)userLocationViewDidUpdate;
- (void)userLocationViewAccuracyDidUpdate;
- (id)headingImageForAccuracy:(double)arg1 anchorPoint:(struct CGPoint *)arg2;
@property(nonatomic) float accuracy; // @synthesize accuracy;
- (void)applyScale:(float)arg1 animated:(BOOL)arg2;
- (void)drawAccuracy:(float)arg1;
- (void)resetScale;
- (BOOL)sizeAccuracyLayerToFit:(float)arg1 animated:(BOOL)arg2;
@property(nonatomic) struct CADoublePoint position;
- (BOOL)isZooming;
@property(nonatomic) BOOL shouldDisplayHeading;
@property(nonatomic) BOOL shouldDisplayAccuracy;
@property(nonatomic) BOOL effectsVisible;
@property(nonatomic) BOOL shouldDisplayEffects;
@property(nonatomic) BOOL shouldDisplayHalo;
@property(nonatomic, getter=isStale) BOOL stale;
@property(nonatomic) BOOL disableAccuracyDidUpdate;
@property(nonatomic) BOOL animatedSublayers;
- (void)dealloc;
- (void)clearViewReferences;
- (void)removeSublayers;
- (void)setContentsScale:(float)arg1;
- (id)initWithView:(id)arg1;

@end

