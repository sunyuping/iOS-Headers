/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLManagedAlbum.h>

@interface PLManagedAlbum (ContextChanges)
- (void)unregisterForChanges;
- (void)registerForChanges;
- (id)_keysToBeObserved;
- (void)_updateKeyAssetIfNeeded;
- (void)updateStackedImage;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@end

