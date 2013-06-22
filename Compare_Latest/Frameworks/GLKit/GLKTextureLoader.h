/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EAGLContext, NSLock;

@interface GLKTextureLoader : NSObject
{
    EAGLContext *_eaglContext;
    NSLock *_nsLock;
}

+ (id)cubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)cubeMapWithContentsOfFile:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)cubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)textureWithCGImage:(struct CGImage *)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)textureWithContentsOfData:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)textureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)textureWithContentsOfFile:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)commonCubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 eaglContext:(id)arg5;
+ (id)commonCubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 eaglContext:(id)arg5;
+ (id)commonTextureWithCGImage:(struct CGImage *)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 eaglContext:(id)arg5;
+ (id)commonTextureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 eaglContext:(id)arg5;
+ (id)commonTextureWithContentsOfData:(id)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 eaglContext:(id)arg5;
+ (id)_textureWithTexture:(id)arg1 error:(id *)arg2;
+ (void)unlockAndRestoreContext:(id)arg1 eaglContext:(id)arg2;
+ (id)lockAndSwitchContext:(id)arg1 eaglContext:(id)arg2;
@property(retain) NSLock *nsLock; // @synthesize nsLock=_nsLock;
@property(retain) EAGLContext *eaglContext; // @synthesize eaglContext=_eaglContext;
- (void)cubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 queue:(struct dispatch_queue_s *)arg3 completionHandler:(id)arg4;
- (void)cubeMapWithContentsOfFile:(id)arg1 options:(id)arg2 queue:(struct dispatch_queue_s *)arg3 completionHandler:(id)arg4;
- (void)cubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 queue:(struct dispatch_queue_s *)arg3 completionHandler:(id)arg4;
- (void)textureWithCGImage:(struct CGImage *)arg1 options:(id)arg2 queue:(struct dispatch_queue_s *)arg3 completionHandler:(id)arg4;
- (void)textureWithContentsOfData:(id)arg1 options:(id)arg2 queue:(struct dispatch_queue_s *)arg3 completionHandler:(id)arg4;
- (void)textureWithContentsOfURL:(id)arg1 options:(id)arg2 queue:(struct dispatch_queue_s *)arg3 completionHandler:(id)arg4;
- (void)textureWithContentsOfFile:(id)arg1 options:(id)arg2 queue:(struct dispatch_queue_s *)arg3 completionHandler:(id)arg4;
- (void)dealloc;
- (id)initWithSharegroup:(id)arg1;

@end

