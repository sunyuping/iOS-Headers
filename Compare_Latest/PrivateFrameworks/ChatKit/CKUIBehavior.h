/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class UIColor;

@interface CKUIBehavior : NSObject
{
}

+ (id)sharedBehaviors;
@property(readonly, nonatomic) BOOL splitViewEnabled; // @dynamic splitViewEnabled;
@property(readonly, nonatomic) BOOL lowClearanceInLandscape;
@property(readonly, nonatomic) float leftSplitPaneWidth;
@property(readonly, nonatomic) BOOL usesPopovers;
@property(readonly, nonatomic) BOOL showsDisclosureButtonForIncomingMedia;
@property(readonly, nonatomic) BOOL showTranscriptButtonsInNavigationBar;
@property(readonly, nonatomic) BOOL usesTexturedTranscriptBackground;
@property(readonly, nonatomic) BOOL shouldShowWaitingForDelivery;
@property(readonly, nonatomic) unsigned int defaultConversationViewingMessageCount;
@property(readonly, nonatomic) unsigned int defaultConversationSummaryMessageCount;
@property(readonly, nonatomic) BOOL overrideDefaultPNGAtSuspend;
- (BOOL)isSupportedInterfaceOrientation:(int)arg1;
@property(readonly, nonatomic) int madridRegistrationAppearanceStyle;
@property(readonly, nonatomic) BOOL madridRegistrationShowsSplashScreen;
@property(readonly, nonatomic) BOOL madridRegistrationShowsSplashScreenOnSignin;
@property(readonly, nonatomic) BOOL shouldShowSendProgressIndicator;
@property(readonly, nonatomic) BOOL returnKeySendsMessage;
@property(readonly, nonatomic) BOOL usesScrollGestureToHideKeyboard;
@property(readonly, nonatomic) BOOL usesDistanceToDetermineWhetherToHideKeyboard;
@property(readonly, nonatomic) BOOL usesVelocityDirectionToDetermineWhetherToHideKeyboard;
@property(readonly, nonatomic) float velocityThresholdForHidingKeyboard;
@property(readonly, nonatomic) float escapeVelocityForHidingKeyboard;
@property(readonly, nonatomic) float scrollToHideKeyboardGestureThreshold;
- (float)_transcriptAnimationScaleFactor;
- (float)fadeInBubbleAnimationDuration;
- (float)scrollInNewMessageAnimationDuration;
- (float)throwMessageAnimationDuration;
- (float)resizeMessageEntryViewAnimationDuration;
- (float)editingTransitionAnimationDuration;
- (float)updateTranscriptInsetsAnimationDuration;
@property(readonly, nonatomic) BOOL showPendingInConversationList;
@property(readonly, nonatomic) BOOL selectNewConversationOnStateRestore;
@property(readonly, nonatomic) BOOL selectNewConversationOnDeletion;
@property(readonly, nonatomic) BOOL usesPersistentConversationSelection;
@property(readonly, nonatomic) BOOL presentForwardingUIModally;
@property(readonly, nonatomic) BOOL usesFullWidthMessageEntryViewWhenKeyboardIsUndocked;
@property(readonly, nonatomic) BOOL floatingEntryFieldEnabled; // @dynamic floatingEntryFieldEnabled;
@property(readonly, nonatomic) BOOL shouldRoundBottomLeftCornerOfEntryField;
@property(readonly, nonatomic) struct CGRect inputFieldCoverStretchSpecs;
@property(readonly, nonatomic) struct CGRect entryFieldBackgroundStretchSpecs;
@property(readonly, nonatomic) float entryFieldBottomMargin;
@property(readonly, nonatomic) float entryFieldLeftMargin;
@property(readonly, nonatomic) float entryFieldRightMargin;
@property(readonly, nonatomic) float entryFieldToPhotoButtonSpacing;
@property(readonly, nonatomic) float entryFieldToSendButtonSpacing;
@property(readonly, nonatomic) float sendButtonHorizontalPadding;
- (float)conversationListRowHeight;
- (BOOL)shouldHomogenizeAtomsForPreferredService;
- (BOOL)shouldShowDisclosureChevronInRecipientAtoms;
- (float)collapsedRecipientListLeftPadding;
- (BOOL)shouldAutomaticallyCheckAvailabilityOfAlternateAddresses;
- (BOOL)shouldRefreshAlternateAddressesSheet;
- (float)recipientOverlaySingleLineContentHeight;
- (float)senderMarginLeftWithContactImage;
- (float)senderMarginLeft;
- (float)senderMarginTop;
- (float)senderMarginBottomPrecedingMessageOfContactImageHeight;
- (float)senderMarginBottom;
- (float)bubbleMarginOutside;
- (float)typingIndicatorMargin;
- (float)bubbleMarginTop;
- (float)bubbleMarginBottom;
- (float)messageStatusHeightFollowingMessageWithContactImage;
- (float)messageStatusHeight;
- (float)serviceNameHeight;
- (float)timestampHeight;
- (float)messageStatusTextOutsideMarginFollowingMessageWithContactImage;
- (float)messageStatusTextOutsideMargin;
- (float)paddingBeforeFirstTranscriptRow;
- (float)paddingAfterLastTranscriptRow;
- (float)maxImageBubbleHeightPortrait;
- (float)maxImageBubbleWidthLandscape;
- (float)videoBubbleWidth;
- (float)videoBubbleHeight;
@property(readonly, nonatomic) BOOL shouldShowContactPhotos;
@property(readonly, nonatomic) float contactPhotoSize;
@property(readonly, nonatomic) float contactPhotoBorderThickness;
@property(readonly, nonatomic) float contactPhotoOutsideMargin;
@property(readonly, nonatomic) float contactPhotoInsideMargin;
@property(readonly, nonatomic) float bubbleIndentationDuringEditMode;
@property(readonly, nonatomic) UIColor *toolbarLabelsTextColor;
@property(readonly, nonatomic) UIColor *toolbarLabelsShadowColor;
@property(readonly, nonatomic) struct CGSize toolbarLabelsShadowOffset;
- (BOOL)centersEditToolbarButtons;
- (float)spaceBetweenEditToolbarButtons;
- (id)etchedSeparatorShadowColor;
- (id)etchedSeparatorHighlightColor;
- (float)messageStatusTextSize;
- (float)serviceTextSize;
- (float)timestampTextSize;
- (id)messageStatusPrimaryTextColor;
- (id)messageStatusSecondaryTextColor;
- (id)serviceTextColor;
- (id)timestampTextColor;
- (id)messageStatusTextShadowColor;
- (id)serviceTextShadowColor;
- (id)timestampTextShadowColor;
- (id)balloonTextFont;
- (float)balloonTextFontSize;
- (float)balloonTextLineHeight;
- (struct CGSize)balloonTextShadowOffset;
- (id)grayBalloonTextShadowColor;
- (id)greenBalloonTextShadowColor;
- (id)blueBalloonTextShadowColor;
- (id)highlightedBalloonTextShadowColor;
- (float)balloonImageWidth;
- (float)balloonImageLeftCapWidth;
- (float)balloonImageRightCapWidth;
- (float)balloonImageHeight;
- (float)balloonImageTopCapHeight;
- (float)balloonImageBottomCapHeight;
- (BOOL)shouldDimTranscript;
- (BOOL)dimsTranscriptWhileEditingConversations;
- (id)dimmingViewBackgroundColor;
- (unsigned int)conversationCacheSize;

@end

