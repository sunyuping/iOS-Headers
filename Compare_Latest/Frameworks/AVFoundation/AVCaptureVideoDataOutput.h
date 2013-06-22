/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureVideoDataOutputInternal, NSArray, NSDictionary;

@interface AVCaptureVideoDataOutput : AVCaptureOutput
{
    AVCaptureVideoDataOutputInternal *_internal;
}

+ (void)initialize;
- (id)init;
- (void)dealloc;
- (BOOL)isTheOnlyDataOutput;
- (void)setSession:(id)arg1;
- (void)setSampleBufferDelegate:(id)arg1 queue:(struct dispatch_queue_s *)arg2;
@property(readonly, nonatomic) id <AVCaptureVideoDataOutputSampleBufferDelegate> sampleBufferDelegate;
@property(readonly, nonatomic) struct dispatch_queue_s *sampleBufferCallbackQueue;
@property(readonly, nonatomic) NSArray *availableVideoCVPixelFormatTypes;
@property(readonly, nonatomic) NSArray *availableVideoCodecTypes;
@property(copy, nonatomic) NSDictionary *videoSettings;
@property(nonatomic) CDStruct_1b6d18a9 minFrameDuration;
@property(nonatomic) BOOL alwaysDiscardsLateVideoFrames;
- (id)connectionMediaTypes;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (id)_applyOverridesToCaptureOptions:(id)arg1;
- (void)handleEnabledChangedForConnection:(id)arg1;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (void)didStartForSession:(id)arg1;
- (void)_AVCaptureVideoDataOutput_VideoDataBecameReady;

@end

