/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UIBarButtonItem, UIPopoverController, UIView;

@interface UISplitViewController : UIViewController
{
    id _delegate;
    UIBarButtonItem *_barButtonItem;
    NSString *_buttonTitle;
    UIPopoverController *_hiddenPopoverController;
    UIView *_rotationSnapshotView;
    float _masterColumnWidth;
    float _gutterWidth;
    float _cornerRadius;
    int _rotatingFromOrientation;
    int _lastPresentedOrientation;
    struct CGRect _rotatingFromMasterViewFrame;
    struct CGRect _rotatingToMasterViewFrame;
    NSArray *_cornerImageViews;
    UIView *_masterBackgroundView;
    struct {
        unsigned int hidesMasterViewInPortrait:1;
        unsigned int delegateImplementsShouldHide:1;
        unsigned int hidden:3;
        unsigned int delegateHandlesTogglingMaster:1;
        unsigned int delegateProvidesBackgroundView:1;
        unsigned int delegateWantsUnSlideCallback:1;
        unsigned int masterOnSlide:1;
        unsigned int delegateWantsWillShowCallback:1;
        unsigned int delegateWantsWillHideCallback:1;
    } _splitViewControllerFlags;
    unsigned int _slideTransitionCount;
}

+ (BOOL)_optsOutOfPopoverControllerHierarchyCheck;
@property(nonatomic) id <UISplitViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_getRotationContentSettings:(CDStruct_19ba41f1 *)arg1;
- (void)__viewWillLayoutSubviews;
- (void)_updateMasterViewControllerFrame;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)snapshotForRotationFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2;
- (void)snapshotAllViews;
- (void)snapshotMasterView;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)hidesMasterViewDuringRotationFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2;
- (BOOL)revealsMasterViewDuringRotationFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2;
- (BOOL)isRotating;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)purgeMemoryForReason:(int)arg1;
- (void)toggleMasterVisible:(id)arg1;
- (void)_toggleVisibilityOfViewController:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setGutterWidth:(float)arg1;
- (float)gutterWidth;
- (void)setMasterColumnWidth:(float)arg1;
- (float)masterColumnWidth;
- (void)setHidesMasterViewInPortrait:(BOOL)arg1;
- (BOOL)hidesMasterViewInLandscape;
- (BOOL)hidesMasterViewInPortrait;
- (id)detailViewController;
- (id)masterViewController;
@property(copy, nonatomic) NSArray *viewControllers;
- (void)_slideIn:(BOOL)arg1 viewController:(id)arg2 animated:(BOOL)arg3 totalDuration:(double)arg4 completion:(id)arg5;
- (BOOL)_canSlideMaster;
- (void)setLeftColumnWidth:(float)arg1;
- (float)leftColumnWidth;
- (void)_viewControllerHiding:(id)arg1;
- (void)_removeRoundedCorners;
- (void)_setupRoundedCorners;
- (struct CGRect)_detailViewFrame;
- (struct CGRect)_masterViewFrame;
- (BOOL)_masterViewShown;
- (void)unloadViewForced:(BOOL)arg1;
- (BOOL)_isLandscape;
- (void)loadView;
- (BOOL)_shouldPersistViewWhenCoding;
- (void)_loadNewSubviews:(id)arg1;
- (void)loadSubviews;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_commonInit;

@end

