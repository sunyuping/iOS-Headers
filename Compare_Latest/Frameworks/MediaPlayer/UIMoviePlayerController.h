/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MPAVController, MPAVItem, MPMovieAccessLog, MPMovieErrorLog, MPSystemNowPlayingController, MPTransitionController, MPVideoView, MPVideoViewController, NSArray, NSDate, NSString, UIImage, UIMovieSnapshotView, UINavigationController, UIView, UIViewController;

@interface UIMoviePlayerController : NSObject
{
    id _delegate;
    MPAVItem *_item;
    NSString *_moviePath;
    MPAVController *_player;
    UIImage *_posterImage;
    NSString *_youTubeVideoID;
    UIViewController *_topViewController;
    MPVideoViewController *_activeVideoController;
    MPVideoView *_videoView;
    MPTransitionController *_transitionController;
    int _transitionCount;
    UINavigationController *_portraitNavigationController;
    struct __CFBag *_ignoredChangeTypes;
    int _pendingInterfaceOrientation;
    MPAVItem *_pendingItem;
    MPAVItem *_pendingItemWithDifferentType;
    struct CGRect _layoutRect;
    int _lastSetUIInterfaceOrientation;
    int _interfaceOrientation;
    int _interfaceOrientationFromDevice;
    NSString *_playbackErrorDescription;
    unsigned int _autoRotationMask;
    unsigned int _displayableParts;
    unsigned int _unmodifiedDisplayableParts;
    unsigned int _desiredParts;
    unsigned int _audioControlsStyle;
    unsigned int _playableContentTypeOverride;
    double _timeWhenResignedActive;
    double _timeToSnapshot;
    UIMovieSnapshotView *_snapshotView;
    NSArray *_closedCaptionData;
    MPSystemNowPlayingController *_nowPlayingController;
    struct {
        unsigned int canShowControlsOverlay:1;
        unsigned int wantsControlsOverlayVis:1;
        unsigned int wantsControlsOverlayAnim:1;
        unsigned int wantsControlsOverlayDisableAutohide:1;
        unsigned int wantsFullscreen:1;
        unsigned int alwaysFullscreen:1;
        unsigned int canAnimateControlsOverlay:1;
        unsigned int autoplayWhenLikelyToKeepUp:1;
        unsigned int externalSourceManagesStatusBar:1;
        unsigned int disallowsVideoOut:1;
        unsigned int exited:1;
        unsigned int generatingOrientationNotifications:1;
        unsigned int forStreaming:1;
        unsigned int isExternalTransformationActive:1;
        unsigned int controlsVisibleBeforeExternalTransformation:1;
        unsigned int isActive:1;
        unsigned int resigningActive:1;
        unsigned int didResignActive:1;
        unsigned int uiPrepared:1;
        unsigned int useLegacyControls:1;
        unsigned int isChangingMoviePath:1;
        unsigned int alwaysAllowHidingControlsOverlay:1;
        unsigned int schedulePortraitLoadingIndicator:1;
        unsigned int clientClearedMoviePath:1;
        unsigned int canCommitStatusBarAndOverlayChanges:1;
        unsigned int videoFrameDisplayOnResumeDisabled:1;
        unsigned int usingDebugTestPath:1;
        unsigned int allowsWirelessPlayback:1;
    } _mpcBitfield;
}

+ (void)allInstancesResignActive;
+ (struct CGSize)fillSizeForMovieBounds:(struct CGRect)arg1 movieNaturalSize:(struct CGSize)arg2 interfaceOrientation:(int)arg3 destinationTVOut:(BOOL)arg4;
@property(copy, nonatomic) NSString *youTubeVideoID; // @synthesize youTubeVideoID=_youTubeVideoID;
@property(copy, nonatomic) NSString *playbackErrorDescription; // @synthesize playbackErrorDescription=_playbackErrorDescription;
@property(retain, nonatomic) MPAVItem *item; // @synthesize item=_item;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int audioControlsStyle; // @synthesize audioControlsStyle=_audioControlsStyle;
- (void)_setTVOutEnabled:(BOOL)arg1;
- (void)_updateForStreamingOptions;
- (id)_backgroundPlaceholderView;
- (void)_updatePlayableContentTypeOverride;
- (void)_autoRotateToInterfaceOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_autoRotateToCurrentOrientationAnimated:(BOOL)arg1;
- (BOOL)_canAutoRotateToInterfaceOrientation:(int)arg1;
- (void)_endDeviceOrientationNotifications;
- (void)_beginDeviceOrientationNotifications;
- (void)_updateEnabledParts;
- (int)_exitReasonForMPViewControllerExitReason:(int)arg1;
- (void)_exitPlayer:(int)arg1;
- (unsigned int)_convertedVisiblePartsMask:(unsigned int)arg1;
- (unsigned int)_convertedPartsMask:(unsigned int)arg1;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (void)_willEnterForegroundNotification:(id)arg1;
- (void)_didEnterBackgroundNotification:(id)arg1;
- (void)_moviePlayerDidBecomeActiveNotification:(id)arg1;
- (void)_moviePlayerWillBecomeActiveNotification:(id)arg1;
- (void)_removeSnapshotView;
- (void)_addSnapshotViewForTime:(double)arg1;
- (void)_ensureActive;
- (void)_videoViewPathWillChangeNotification:(id)arg1;
- (void)_mutedDidChangeNotification:(id)arg1;
- (void)_volumeDidChangeNotification:(id)arg1;
- (void)_tickNotification:(id)arg1;
- (void)_timedMetadataAvailableNotification:(id)arg1;
- (void)_itemPlaybackDidEndNotification:(id)arg1;
- (void)_timeDidJumpNotification:(id)arg1;
- (void)_itemDurationAvailableNotification:(id)arg1;
- (void)_itemReadyToPlayNotification:(id)arg1;
- (void)_rateDidChangeNotification:(id)arg1;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)_tvOutCapabilityChanged:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)_validityChangedNotification:(id)arg1;
- (void)_serverDeathNotification:(id)arg1;
- (void)_itemChangedNotification:(id)arg1;
- (void)_movieTypeAvailableNotification:(id)arg1;
- (void)_bufferingStateChangedNotification:(id)arg1;
- (void)_simpleRemoteNotification:(id)arg1;
- (void)_willResignNotification:(id)arg1;
- (void)_willBeginSuspendAnimationNotification:(id)arg1;
- (void)_willSuspendNotification:(id)arg1;
- (void)_pausePlaybackForNotification:(id)arg1;
- (void)snapshotViewWasTapped:(id)arg1;
- (struct CGRect)videoControllerFrameAfterFullscreenExit:(id)arg1;
- (void)videoControllerDidCreateFullscreenView:(id)arg1;
- (void)videoControllerDidHideOverlay:(id)arg1;
- (void)videoControllerWillHideOverlay:(id)arg1;
- (void)videoControllerDidShowOverlay:(id)arg1;
- (void)videoControllerWillShowOverlay:(id)arg1;
- (void)videoControllerDidExitFullscreen:(id)arg1;
- (void)videoControllerWillExitFullscreen:(id)arg1 reason:(int)arg2;
- (void)videoControllerDidEnterFullscreen:(id)arg1;
- (void)videoControllerWillEnterFullscreen:(id)arg1;
- (BOOL)videoControllerShouldShowPositionInQueueUI:(id)arg1;
- (BOOL)videoControllerShouldAutohide:(id)arg1;
- (void)viewControllerFailedToPlay:(id)arg1 withError:(id)arg2;
- (BOOL)videoController:(id)arg1 tappedButtonPart:(unsigned int)arg2;
- (void)viewControllerRequestsExit:(id)arg1 reason:(int)arg2;
- (void)resignActive;
@property(nonatomic) BOOL videoFrameDisplayOnResumeDisabled;
@property(nonatomic) BOOL alwaysAllowHidingControlsOverlay;
@property(nonatomic) BOOL useLegacyControls;
@property(readonly, nonatomic) MPMovieErrorLog *errorLog;
@property(readonly, nonatomic) MPMovieAccessLog *accessLog;
- (void)setInlinePlaybackUsesTVOut:(BOOL)arg1;
@property(readonly, nonatomic) UIView *fullscreenView;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isFullscreen) BOOL fullscreen;
- (void)endExternalTransformation;
- (void)beginExternalTransformation;
@property(retain, nonatomic) UIImage *posterImage;
@property(retain, nonatomic) UIImage *backgroundPlaceholderImage;
- (id)backgroundView;
- (void)tearDownUI;
- (void)prepareAndSetupUI;
- (void)_prepareAndSetupUIForClient;
- (void)_prepareAndSetupUI;
- (struct CGRect)moviePlaceholderImageRectForMovieWithAspectRatio:(float)arg1;
@property(readonly, nonatomic) struct CGSize naturalSize;
- (void)layoutUIInRect:(struct CGRect)arg1;
- (void)setAllowsWirelessPlayback:(BOOL)arg1;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (void)setControlsOverlayVisible:(BOOL)arg1 disableAutohide:(BOOL)arg2 animate:(BOOL)arg3;
- (void)setCanShowControlsOverlay:(BOOL)arg1;
- (void)setCanAnimateControlsOverlay:(BOOL)arg1;
- (void)setDisplayable:(BOOL)arg1 movieParts:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)setDisplayableMovieParts:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setDesiredMovieParts:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setAutoRotationMask:(unsigned int)arg1;
- (unsigned int)autoRotationMask;
- (BOOL)setInterfaceOrientation:(int)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3;
- (BOOL)setOrientation:(int)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3;
- (int)interfaceOrientation;
- (void)_reloadForTransitionFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2 animated:(BOOL)arg3;
- (void)_performTransition:(id)arg1 toController:(id)arg2;
- (void)performTransition:(id)arg1;
- (void)viewController:(id)arg1 endIgnoringChangeType:(unsigned int)arg2;
- (void)viewController:(id)arg1 beginIgnoringChangeTypes:(unsigned int)arg2;
- (void)_transitionFinished:(id)arg1;
- (void)endTransition;
- (void)beginTransition;
- (void)endIgnoringChangeTypes:(unsigned int)arg1;
- (BOOL)_shouldIgnoreChangeType:(unsigned int)arg1;
- (BOOL)_noteStoppedIgnoringChangeType:(unsigned int)arg1;
- (void)beginIgnoringChangeTypes:(unsigned int)arg1;
- (void)_videoViewScaleModeDidChangeNotification:(id)arg1;
- (void)crossedChapterTimeMarker:(id)arg1;
- (void)_reconfigurePortraitNavigationBarNowIfNecessary;
- (void)_schedulePortraitLoadingIndicatorIfNeeded;
- (void)_hideLoadingForStateChange:(id)arg1;
- (void)_setPortraitLoadingShowing:(BOOL)arg1;
- (void)_delayedShowPortraitLoading;
- (void)_reconfigurePortraitNavigationItem:(id)arg1 time:(double)arg2 animate:(BOOL)arg3;
- (id)_portraitNavigationControllerTitleView;
- (id)_titlesViewForNavigationItem:(id)arg1;
- (id)_titlesForPortraitNavigationBarAtTime:(double)arg1;
- (BOOL)shouldDisplayTitles;
- (id)_portraitNavigationRootController:(BOOL)arg1;
- (void)_tearDownPortraitViewControllerContainers;
- (void)_preparePortraitViewControllerContainers;
- (id)_portraitNavigationController:(BOOL)arg1;
- (void)portraitScaleButtonAction:(id)arg1;
- (void)portraitDoneButtonAction:(id)arg1;
- (void)_finishInitializeActiveViewController:(id)arg1 forTransition:(BOOL)arg2;
- (void)_commitFinishInitializeActiveViewController:(id)arg1 animate:(BOOL)arg2;
- (void)_tearDownContainersForSwitchFromViewController:(id)arg1;
- (void)_prepareContainersForSwitchToActiveController:(id)arg1;
- (id)_parentViewControllerForController:(id)arg1;
- (void)_initializeVideoViewController:(id)arg1 orientation:(int)arg2;
- (id)createViewControllerForItem:(id)arg1 interfaceOrientation:(int)arg2 reusingController:(id)arg3;
- (id)createTransitionControllerForChangeToInterfaceOrientation:(int)arg1 fromInterfaceOrientation:(int)arg2;
- (id)_activeVideoController;
- (void)_setActiveViewController:(id)arg1 forTransition:(BOOL)arg2;
- (id)_topViewController;
@property(readonly, nonatomic) unsigned int bufferingState;
@property(readonly, nonatomic) BOOL areClosedCaptionsAvailable;
@property(readonly, nonatomic) float volume;
@property(readonly, nonatomic) BOOL muted;
@property(nonatomic) BOOL stopAtEnd;
- (BOOL)seekToDate:(id)arg1;
@property(readonly, nonatomic) NSDate *currentDate;
- (void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned int)arg2;
@property(nonatomic) double currentTime;
@property(readonly, nonatomic) double seekableEndTime;
@property(readonly, nonatomic) double seekableStartTime;
@property(readonly, nonatomic) double playableEndTime;
@property(readonly, nonatomic) double playableStartTime;
@property(readonly, nonatomic) double playableDuration;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) unsigned int playbackState;
@property(readonly, nonatomic) float playbackRate;
- (void)stop;
- (void)pause;
- (void)play;
- (void)prepareForPlayback;
@property(readonly, nonatomic) BOOL isPreparedForPlayback;
@property(nonatomic) unsigned int playableContentType;
@property(nonatomic) BOOL closedCaptioningEnabled;
- (void)setClosedCaptions:(id)arg1;
- (void)setAttemptAutoPlayWhenControlsHidden:(BOOL)arg1;
@property(readonly, nonatomic) BOOL videoOutActive;
- (void)setManagesStatusBar:(BOOL)arg1;
@property(nonatomic) BOOL disallowsVideoOut;
@property(readonly, nonatomic) long long fileSize;
- (void)setAutoPlayWhenLikelyToKeepUp:(BOOL)arg1;
@property(readonly, nonatomic) UIView *view;
@property(readonly, nonatomic) MPVideoView *movieView;
@property(copy, nonatomic) NSString *movieTitle;
@property(copy, nonatomic) NSString *movieSubtitle;
@property(copy, nonatomic) NSString *moviePath;
- (void)setItem:(id)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) BOOL canContinuePlayingWhenLocked;
@property(readonly, nonatomic) BOOL canContinuePlayingInBackground;
- (void)unlockMoviePlaybackResources;
@property(nonatomic) unsigned int options;
- (void)dealloc;
- (id)initWithPlayerSize:(struct CGSize)arg1;
- (id)initWithPlayerSize:(struct CGSize)arg1 options:(unsigned int)arg2;
- (void)debugSetup;
- (void)delayedDebugSetup;

@end

