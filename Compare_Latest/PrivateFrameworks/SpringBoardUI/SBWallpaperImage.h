/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIImage.h"

@class NSData;

@interface SBWallpaperImage : UIImage
{
    int _variant;
    NSData *_data;
}

+ (void)clearCachedWallpaper;
+ (id)cachedWallpaperDataForVariant:(int)arg1;
- (id)initWithVariant:(int)arg1;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) int variant; // @synthesize variant=_variant;

@end

