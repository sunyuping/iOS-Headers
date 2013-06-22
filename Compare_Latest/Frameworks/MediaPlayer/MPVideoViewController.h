/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPViewController.h>

#import "MPSwipableViewDelegate-Protocol.h"
#import "MPVideoTransferViewController-Protocol.h"
#import "UIModalViewDelegate-Protocol.h"

@class MPClosedCaptionDisplay, MPImageCache, MPImageCacheRequest, MPSwipableView, MPTVOutWindow, MPVideoBackgroundView, MPVideoView, UIActivityIndicatorView, UIAlertView, UIColor, UIImage, UIView, UIView<MPVideoOverlay>;

@interface MPVideoViewController : MPViewController <MPSwipableViewDelegate, MPVideoTransferViewController, UIModalViewDelegate>
{
    MPVideoBackgroundView *_backgroundView;
    MPSwipableView *_backstopView;
    BOOL _batteryMonitoringWasEnabled;
    MPClosedCaptionDisplay *_captionView;
    unsigned int _desiredParts;
    unsigned int _disabledParts;
    unsigned int _visibleParts;
    unsigned int _tvOutEnabled:1;
    unsigned int _allowsTVOutInBackground:1;
    unsigned int _itemTypeOverride;
    unsigned int _scaleMode;
    unsigned int _scaleModeOverride;
    UIAlertView *_alertSheet;
    MPImageCache *_artworkImageCache;
    MPImageCacheRequest *_artworkImageRequest;
    UIColor *_backstopColor;
    UIActivityIndicatorView *_loadingIndicator;
    MPTVOutWindow *_tvOutWindow;
    int _extendedModeNotifyToken;
    int _artworkImageStyle;
    UIImage *_posterImage;
    unsigned int _canAnimateControlsOverlay:1;
    unsigned int _canShowControlsOverlay:1;
    unsigned int _disableControlsAutohide:1;
    unsigned int _ownsStatusBar:1;
    unsigned int _playAfterPop:1;
    unsigned int _scheduledLoadingIndicator:1;
    unsigned int _displayPlaybackErrorAlerts:1;
    unsigned int _allowsDetailScrubbing:1;
    unsigned int _attemptAutoPlayWhenControlsHidden:1;
    unsigned int _alwaysAllowHidingControlsOverlay:1;
    unsigned int _hasShownFirstVideoFrame:1;
    unsigned int _allowsWirelessPlayback:1;
    unsigned int _disableAutoRotation:1;
    unsigned int _inlinePlaybackUsesTVOut:1;
}

+ (struct CGRect)calculateArtworkImageViewFrameInRect:(struct CGRect)arg1;
+ (BOOL)supportsFullscreenDisplay;
@property(retain, nonatomic) UIImage *posterImage; // @synthesize posterImage=_posterImage;
@property(nonatomic) int artworkImageStyle; // @synthesize artworkImageStyle=_artworkImageStyle;
@property(nonatomic) unsigned int itemTypeOverride; // @synthesize itemTypeOverride=_itemTypeOverride;
@property(retain, nonatomic) UIColor *backstopColor; // @synthesize backstopColor=_backstopColor;
@property(nonatomic) unsigned int visibleParts; // @synthesize visibleParts=_visibleParts;
@property(nonatomic) unsigned int disabledParts; // @synthesize disabledParts=_disabledParts;
@property(nonatomic) unsigned int desiredParts; // @synthesize desiredParts=_desiredParts;
- (BOOL)_canEnableAirPlayVideoRoutes;
- (void)_updateProgressControlForItem:(id)arg1;
- (BOOL)_showDestinationPlaceholder;
- (void)_hideLoadingIndicator;
- (void)_cancelArtworkImageRequest;
- (unsigned int)disabledPartsForProposedParts:(unsigned int)arg1;
- (void)backgroundViewDidUpdate;
- (id)createChapterFlipTransition;
- (id)newAlternateTracksTransition;
@property(nonatomic) BOOL alwaysAllowHidingControlsOverlay;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2;
@property(nonatomic) BOOL controlsOverlayVisible;
@property(nonatomic) BOOL canShowControlsOverlay;
@property(nonatomic) BOOL canAnimateControlsOverlay;
- (void)_scheduleLoadingIndicatorIfNeeded;
- (void)_showStillFrameIfNotAlreadyPlaying;
- (void)handleScaleModeChange;
- (void)displayVideoViewOnTV;
- (void)displayVideoViewOnScreen;
- (void)displayVideoView;
- (void)tearDownTVOutWindow;
- (void)_delayedShowLoading;
- (void)_delayedPopForTimeJump;
- (void)_itemDurationDidChange:(id)arg1;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
- (void)_popForTimeJump:(id)arg1;
- (void)bufferingStateChangedNotification:(id)arg1;
- (void)_updateBackgroundView:(BOOL)arg1;
- (void)_delayedUpdateBackgroundView;
- (void)videoView_firstVideoFrameDisplayedNotification:(id)arg1;
- (void)videoView_itemTypeAvailableNotification:(id)arg1;
- (void)_videoView_validityChangedNotification:(id)arg1;
- (void)_videoView_tvOutCapabilityDidChangeNotification:(id)arg1;
- (void)_videoView_timedImageMetadataAvailableNotification:(id)arg1;
- (void)_videoView_sizeChangedNotification:(id)arg1;
- (void)_videoView_scaleModeChangedNotification:(id)arg1;
- (void)_videoView_resumeEventsOnlyNotification:(id)arg1;
- (void)_videoView_playbackStateChangedNotification:(id)arg1;
- (void)_exitPlayerForPlaybackError;
- (void)_videoView_playbackErrorNotification:(id)arg1;
- (void)_videoView_isAirPlayVideoActiveDidChangeNotification:(id)arg1;
- (void)_videoView_effectiveScaleModeChangedNotification:(id)arg1;
- (void)_videoView_batteryStateDidChangeNotification:(id)arg1;
- (void)_videoView_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_videoView_applicationSuspendedNotification:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
@property(readonly, nonatomic) BOOL viewControllerWillRequestExit;
- (void)chapterListDidDisappear:(id)arg1;
- (void)chapterList:(id)arg1 selectedChapter:(unsigned int)arg2;
- (BOOL)infoOverlayShouldDisplayQueuePositionUI:(id)arg1;
@property(readonly, nonatomic) BOOL canShowQTAudioOnlyUI;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isFullscreen) BOOL fullscreen;
@property(readonly, nonatomic, getter=isTransitioningFromFullscreen) BOOL transitioningFromFullscreen;
@property(readonly, nonatomic, getter=isTransitioningToFullscreen) BOOL transitioningToFullscreen;
@property(nonatomic) BOOL displayPlaybackErrorAlerts;
@property(readonly, nonatomic) UIView<MPVideoOverlay> *videoOverlayViewIfLoaded;
@property(readonly, nonatomic) UIView<MPVideoOverlay> *videoOverlayView;
@property(readonly, nonatomic) MPVideoView *videoView;
@property(nonatomic) BOOL allowsTVOutInBackground;
@property(nonatomic) BOOL TVOutEnabled;
- (void)setPlayer:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)prepareToDisplayVideo;
- (void)removeChildViewController:(id)arg1;
- (void)noteIgnoredChangeTypes:(unsigned int)arg1;
- (void)viewDidUnload;
- (void)loadView;
@property(readonly, nonatomic) UIView *artworkImageView;
@property(readonly, nonatomic) BOOL showArtworkForTVOut;
- (void)setControlsNeedLayout;
@property(nonatomic) BOOL inlinePlaybackUsesTVOut;
@property(nonatomic) BOOL disableAutoRotation;
@property(nonatomic) BOOL attemptAutoPlayWhenControlsHidden;
@property(nonatomic) BOOL allowsWirelessPlayback;
@property(nonatomic) BOOL allowsDetailScrubbing;
- (void)toggleScaleMode:(BOOL)arg1;
- (unsigned int)visiblePartsForProposedParts:(unsigned int)arg1;
- (void)setVisibleParts:(unsigned int)arg1 animate:(BOOL)arg2;
- (void)setScaleModeOverride:(unsigned int)arg1 animated:(BOOL)arg2;
@property(nonatomic) unsigned int scaleMode; // @synthesize scaleMode=_scaleMode;
- (void)setScaleMode:(unsigned int)arg1 animated:(BOOL)arg2;
@property(nonatomic) BOOL ownsStatusBar;
@property(nonatomic) BOOL disableControlsAutohide;
- (void)setDesiredParts:(unsigned int)arg1 animate:(BOOL)arg2;
- (void)setItem:(id)arg1;
- (void)_updateAlwaysPlayWheneverPossible;
@property(readonly, nonatomic) BOOL canChangeScaleMode;
@property(readonly) struct CGRect backgroundViewSnapshotFrame;
@property(readonly, nonatomic) UIView *backgroundView;
- (void)_fixupViewHierarchyIfNecessary;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)enableAirPlayVideoRoutesIfNecessary;
- (void)reloadArtworkImageView;
- (id)newArtworkImageView;
- (void)setOrientation:(int)arg1 animate:(BOOL)arg2;
@property(readonly, nonatomic) BOOL showArtworkInImageView;
- (unsigned int)_itemTypeWithActualTypePreference;
- (struct CGRect)calculateArtworkImageViewFrame;
- (struct CGRect)calculateFullScreenArtworkImageViewFrame;
- (int)displayArtworkImageStyle;
- (BOOL)isFullscreenForLayoutPurposes;
- (void)crossedClosedCaptionTimeMarker:(id)arg1;
- (void)crossedArtworkTimeMarker:(id)arg1;
- (void)_updateIdleTimerDisabledFromPlaybackState:(unsigned int)arg1;
- (void)showChaptersController;
- (void)showChaptersControllerAndFadeViews:(id)arg1;
- (void)_updateClosedCaptionDisplay;
- (void)willChangeToInterfaceOrientation:(int)arg1;
- (void)showAlternateTracksController:(id)arg1;
- (BOOL)canHideOverlay:(BOOL)arg1;
- (void)setClosedCaptions:(id)arg1;
- (BOOL)isStatusBarHidden;
- (int)statusBarStyle;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(nonatomic) BOOL inhibitOverlay;

@end

