/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVAssetExportSession.h>

@interface AVAssetExportSession (AVAssetExportSession_Local)
+ (id)_utTypesForPresets;
+ (id)_utTypesForAudioOnly;
+ (id)_settingForPreset:(id)arg1;
+ (id)_figRemakerNotificationNames;
+ (CDStruct_1b6d18a9)_maximumDurationForPreset:(id)arg1 fileSizeBytesLimit:(long long)arg2 properties:(id)arg3;
+ (long long)_estimatedOutputFileLengthForPreset:(id)arg1 duration:(CDStruct_1b6d18a9)arg2 properties:(id)arg3;
- (id)_actualSettingForPreset:(id)arg1;
- (void)_handleFigRemakerNotification:(id)arg1;
- (void)_handleFigRemakerNotificationAsync:(id)arg1;
- (id)_actualPresetName;
- (void)_transitionToStatus:(int)arg1 error:(id)arg2;
- (void)_removeListeners;
- (void)_addListeners;
- (struct CGSize)_getSourceDimension;
- (int)_getTrackCountOfType:(id)arg1 checkEnabled:(BOOL)arg2;
- (BOOL)_hasProtectedNonAudioVideoTracks;
- (BOOL)_totalSizeOfTracksIsWithinFileLengthLimit:(id)arg1 forSetting:(id)arg2;
- (BOOL)_canPassThroughAudio:(id)arg1 checkEnabled:(BOOL)arg2 checkProtected:(BOOL)arg3;
- (id)_settingForFigRemaker;
- (BOOL)_canPassThroughVideo:(id)arg1 checkEnabled:(BOOL)arg2 checkAll:(BOOL)arg3 checkProtected:(BOOL)arg4;
- (struct OpaqueFigRemaker *)_createFigRemaker;
@end

