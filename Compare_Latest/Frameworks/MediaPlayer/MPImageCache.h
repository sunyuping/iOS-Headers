/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MPImageRequestDelegate-Protocol.h"

@class CPLRUDictionary, NSOperationQueue;

@interface MPImageCache : NSObject <MPImageRequestDelegate>
{
    CPLRUDictionary *_cachedImages;
    struct dispatch_queue_s *_cachedImagesQueue;
    unsigned int _cacheSize;
    id <MPImageCacheDelegate> _delegate;
    NSOperationQueue *_operationQueue;
    int _retainCount;
}

+ (id)sharedImageCache;
@property(nonatomic) id <MPImageCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int cacheSize; // @synthesize cacheSize=_cacheSize;
- (id)imageForRequest:(id)arg1 fetchIfNecessary:(BOOL)arg2 waitUntilFetched:(BOOL)arg3;
- (id)imageForRequest:(id)arg1 fetchIfNecessary:(BOOL)arg2;
- (void)_zapCache;
- (void)_zapCachedPlaceholders;
- (void)_enqueueRequest:(id)arg1;
- (id)_cachedImageForKey:(id)arg1;
- (void)_cacheImage:(id)arg1 forKey:(id)arg2;
- (void)_didReceiveMemoryWarningNotification:(id)arg1;
- (void)_didEnterBackgroundNotification:(id)arg1;
- (void)imageRequest:(id)arg1 loadedImage:(id)arg2;
- (void)imageRequest:(id)arg1 failedWithError:(id)arg2;
- (void)cancelAllImageRequests;
@property(nonatomic) BOOL imageRequestsSuspended;
- (void)loadImageForRequest:(id)arg1 asynchronously:(BOOL)arg2 completionHandler:(id)arg3;
- (id)imageForRequest:(id)arg1 error:(id *)arg2;
- (id)_imageByApplyingModificationsForCachedImageForRequest:(id)arg1;
- (id)cachedImageForRequest:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;

@end

