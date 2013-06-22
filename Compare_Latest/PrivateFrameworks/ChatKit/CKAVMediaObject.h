/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKMediaObject.h>

@class AVRemaker, NSString;

@interface CKAVMediaObject : CKMediaObject
{
    AVRemaker *_remaker;
    BOOL _remakeSuccessful;
    BOOL _remakeDidEnd;
    NSString *_createdFilename;
    double _approximateDuration;
    BOOL _durationLoaded;
}

+ (void)initialize;
+ (double)maxMMSTrimDurationForMediaType:(int)arg1;
+ (id)transcodeOptionsWithMaxBytes:(int)arg1 forMediaType:(int)arg2;
+ (void)_dequeueNextTranscodeOnMainThread;
- (void)dealloc;
- (BOOL)shouldTranscodeForMMS;
- (Class)balloonPreviewClassWithPreviewData:(id)arg1;
- (void)prepareForTranscode;
- (id)transcodedFilename;
- (id)newTranscodingForMMSWithMaxByteLength:(int)arg1;
- (id)transcodedPathExtension;
- (void)cleanupAfterTranscode;
- (void)configureBalloon:(id)arg1 withPreviewData:(id)arg2;
- (id)transcodePath;
- (double)transcodeStartTime;
- (double)transcodeEndTime;
- (double)transcodeDuration;
- (id)transcodeMimeType;
- (id)effectiveExportedFilename;
- (id)fileForDataWithExtension:(id)arg1;
- (id)previewTitle;
- (void)_determineDurationOnMainThreadWithFile:(id)arg1;
- (void)_enqueueTranscodeOnMainThreadWithOptions:(id)arg1;
- (void)_beginRemakingOnMainThreadWithOptions:(id)arg1;
- (void)_remakeDidComplete:(id)arg1;
- (void)copyToPasteboard:(id)arg1;
- (void)setDuration:(double)arg1;
- (double)duration;
@property BOOL remakeDidEnd; // @synthesize remakeDidEnd=_remakeDidEnd;

@end

