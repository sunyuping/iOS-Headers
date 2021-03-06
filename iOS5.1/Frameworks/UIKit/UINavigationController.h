/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIViewController.h>

@class NSArray, UINavigationBar, UINavigationTransitionView, UIToolbar, UIView;

@interface UINavigationController : UIViewController
{
    UIView *_containerView;
    UINavigationBar *_navigationBar;
    Class _navigationBarClass;
    UIToolbar *_toolbar;
    UIView *_navigationTransitionView;
    struct UIEdgeInsets _currentScrollContentInsetDelta;
    struct UIEdgeInsets _previousScrollContentInsetDelta;
    float _previousScrollContentOffsetDelta;
    float _bottomInsetDelta;
    UIViewController *_disappearingViewController;
    id <UINavigationControllerDelegate> _delegate;
    int _savedNavBarStyleBeforeSheet;
    int _savedToolBarStyleBeforeSheet;
    struct {
        unsigned int isAppearingAnimated:1;
        unsigned int isAlreadyPoppingNavigationItem:1;
        unsigned int isNavigationBarHidden:1;
        unsigned int isToolbarShown:1;
        unsigned int needsDeferredTransition:1;
        unsigned int isTransitioning:1;
        unsigned int lastOperation:4;
        unsigned int lastOperationAnimated:1;
        unsigned int deferredTransition:8;
        unsigned int didPreloadKeyboardAnimation:1;
        unsigned int didHideBottomBar:1;
        unsigned int isChangingOrientationForPop:1;
        unsigned int pretendNavBarHidden:1;
        unsigned int avoidMovingNavBarOffscreenBeforeUnhiding:1;
        unsigned int searchBarHidNavBar:1;
        unsigned int useSystemPopoverBarAppearance:1;
    } _navigationControllerFlags;
    Class _toolbarClass;
}

@property(retain, nonatomic) UIViewController *disappearingViewController; // @synthesize disappearingViewController=_disappearingViewController;
@property(nonatomic) id <UINavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setToolbarClass:) Class _toolbarClass; // @synthesize _toolbarClass;
- (id)moreListTableCell;
- (id)moreListSelectedImage;
- (id)moreListImage;
- (id)_moreListTitle;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_didBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (id)_viewForContentInPopover;
- (BOOL)isModalInPopover;
- (void)_prepareForPresentationInPopover:(id)arg1;
- (void)_prepareForDismissalInPopover:(id)arg1;
- (struct CGRect)_frameForContainerViewInSheetForBounds:(struct CGRect)arg1 displayingTopView:(BOOL)arg2 andBottomView:(BOOL)arg3;
- (struct CGSize)contentSizeForViewInPopover;
- (void)setContentSizeForViewInPopover:(struct CGSize)arg1;
- (struct CGSize)_adjustedContentSizeForPopover:(struct CGSize)arg1;
- (void)_layoutTopViewControllerOutOfSheet;
- (void)_layoutTopViewControllerInSheetWithPopoverView:(id)arg1;
- (void)_layoutTopViewControllerInSheet;
- (void)updateTabBarItemForViewController:(id)arg1;
- (id)tabBarItem;
- (id)defaultPNGName;
- (void)navigationBarDidChangeOpacity:(id)arg1;
- (void)navigationBarDidResizeForPrompt:(id)arg1;
- (void)navigationBar:(id)arg1 buttonClicked:(int)arg2;
- (BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (void)updateTitleForViewController:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_getRotationContentSettings:(CDStruct_19ba41f1 *)arg1;
- (BOOL)_shouldUseOnePartRotation;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)_doesTopViewControllerSupportInterfaceOrientation:(int)arg1;
- (BOOL)_allowsAutorotation;
- (void)makeModalViewControllerTopViewController;
- (id)popToViewControllerWithSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2;
- (id)popToViewController:(id)arg1 transition:(int)arg2;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popToRootViewControllerWithTransition:(int)arg1;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popViewControllerWithTransition:(int)arg1;
- (id)popViewControllerWithAnimationTransition:(int)arg1 duration:(double)arg2 curve:(int)arg3;
- (id)_popViewControllerWithTransition:(int)arg1 allowPoppingLast:(BOOL)arg2;
- (void)_popViewControllerAndUpdateInterfaceOrientationAnimated:(BOOL)arg1;
- (BOOL)_shouldPopFromLandscapeToPortraitOrientation;
- (id)_snapshotView;
- (void)_tabBarControllerDidFinishShowingTabBar:(id)arg1;
- (void)_hideOrShowBottomBarIfNeededWithTransition:(int)arg1;
- (void)_updateBottomBarHiddenState;
- (void)_resetBottomBarHiddenState;
- (BOOL)_shouldBottomBarBeHidden;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)pushViewController:(id)arg1 transition:(int)arg2;
- (void)pushViewController:(id)arg1 transition:(int)arg2 forceImmediate:(BOOL)arg3;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)__viewWillLayoutSubviews;
- (void)_clearLastOperation;
- (int)_deferredTransition;
- (void)_startDeferredTransitionIfNeeded;
- (void)_startTransition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (int)_navigationTransitionForUITransition:(int)arg1;
- (void)_layoutViewController:(id)arg1;
- (void)_computeAndApplyScrollContentInsetDeltaForViewController:(id)arg1;
- (float)_scrollViewBottomContentInset;
- (void)_layoutTopViewController;
- (struct CGRect)_frameForViewController:(id)arg1;
- (BOOL)_shouldChildViewControllerUseFullScreenLayout:(id)arg1;
- (BOOL)_shouldNavigationBarInsetViewController:(id)arg1;
- (BOOL)_isNavigationBarVisible;
- (BOOL)_hasTranslucentNavigationBarIncludingViewController:(id)arg1;
- (void)_restoreOriginalInsetAndOffsetToScrollView:(id)arg1;
- (void)_applyScrollContentOffsetDelta:(float)arg1 toScrollView:(id)arg2;
- (void)_applyScrollContentInsetDelta:(struct UIEdgeInsets)arg1 toScrollView:(id)arg2;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_updateBarsForCurrentInterfaceOrientation;
- (BOOL)wasLastOperationAnimated;
- (int)lastOperation;
@property(nonatomic) BOOL needsDeferredTransition;
- (void)setNeedsDeferredTransition;
- (double)navigationTransitionView:(id)arg1 durationForTransition:(int)arg2;
- (void)navigationTransitionView:(id)arg1 didEndTransition:(int)arg2 fromView:(id)arg3 toView:(id)arg4;
- (void)navigationTransitionView:(id)arg1 didStartTransition:(int)arg2;
- (BOOL)_isTransitioning;
- (void)didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)willShowViewController:(id)arg1 animated:(BOOL)arg2;
- (id)defaultFirstResponder;
- (BOOL)_reallyWantsFullScreenLayout;
- (void)_updateToolbarItemsFromViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)editing;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)viewDidUnload;
- (void)purgeMemoryForReason:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)isShown;
- (void)loadView;
- (void)_hideShowToolbarDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_setToolbarHidden:(BOOL)arg1 edge:(int)arg2 duration:(double)arg3;
- (void)_positionToolbarHidden:(BOOL)arg1 edge:(int)arg2;
- (void)_positionToolbarHidden:(BOOL)arg1;
- (void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isToolbarHidden) BOOL toolbarHidden;
@property(readonly, nonatomic) UIToolbar *toolbar;
- (void)setToolbar:(id)arg1;
- (void)_configureToolbar;
- (id)_existingToolbar;
- (void)_sendNavigationBarToBack;
@property(nonatomic) BOOL avoidMovingNavBarOffscreenBeforeUnhiding;
- (void)setSearchBarHidNavBar:(BOOL)arg1;
- (BOOL)searchBarHidNavBar;
@property(nonatomic) BOOL pretendNavBarHidden;
- (void)_hideShowNavigationBarDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_setNavigationBarHidden:(BOOL)arg1 edge:(int)arg2 duration:(double)arg3;
- (void)_positionNavigationBarHidden:(BOOL)arg1 edge:(int)arg2;
- (void)_positionNavigationBarHidden:(BOOL)arg1;
- (void)_setNavigationBarHidden:(BOOL)arg1 edgeIfNotNavigating:(int)arg2 duration:(double)arg3;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)_animationParametersForHidingNavigationBar:(BOOL)arg1 lastOperation:(int)arg2 edge:(int *)arg3 duration:(double *)arg4;
@property(nonatomic, getter=isNavigationBarHidden) BOOL navigationBarHidden;
- (void)setNavigationBar:(id)arg1;
@property(readonly, nonatomic) UINavigationBar *navigationBar;
- (void)setNavigationBarClass:(Class)arg1;
- (Class)navigationBarClass;
@property(readonly, nonatomic) UINavigationTransitionView *navigationTransitionView;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2;
- (id)_navigationItems;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (int)_transitionForOldViewControllers:(id)arg1 newViewControllers:(id)arg2;
@property(copy, nonatomic) NSArray *viewControllers;
- (BOOL)_isPresentationContextByDefault;
@property(readonly, nonatomic) UIViewController *bottomViewController;
@property(readonly, nonatomic) UIViewController *previousViewController;
@property(readonly, nonatomic) UIViewController *visibleViewController;
- (int)modalTransitionStyle;
@property(readonly, nonatomic) UIViewController *topViewController;
- (void)dealloc;
- (void)_releaseContainerViews;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)_shouldPersistViewWhenCoding;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithRootViewController:(id)arg1;

@end

