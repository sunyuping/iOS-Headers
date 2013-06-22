/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVCaptureInput.h>

@class AVCaptureDevice, AVCaptureDeviceInputInternal;

@interface AVCaptureDeviceInput : AVCaptureInput
{
    AVCaptureDeviceInputInternal *_internal;
}

+ (id)deviceInputWithDevice:(id)arg1 error:(id *)arg2;
- (id)initWithDevice:(id)arg1 error:(id *)arg2;
- (id)init;
- (void)dealloc;
- (id)description;
@property(readonly, nonatomic) AVCaptureDevice *device;
- (void)setDevice:(id)arg1;
- (void)_setDevice:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)notReadyError;
- (id)ports;
- (void)setSession:(id)arg1;
- (void)willStartForSession:(id)arg1;
- (void)didStartForSession:(id)arg1;
- (id)_applyOverridesToCaptureOptions:(id)arg1;
- (void)handleNotification:(id)arg1 payload:(id)arg2;

@end

