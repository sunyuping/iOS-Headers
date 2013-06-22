/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface OABReaderState : NSObject
{
    Class mClient;
    NSMutableDictionary *mShapeIdMap;
    NSMutableDictionary *mEshContentIdMap;
    id <OADColorPalette> mColorPalette;
    NSMutableDictionary *mBlipIdMap;
}

- (id)init;
- (id)initWithClient:(Class)arg1;
- (void)dealloc;
- (Class)client;
- (id)drawableForShapeId:(int)arg1;
- (void)setDrawable:(id)arg1 forShapeId:(int)arg2;
- (struct EshContent *)eshContentForId:(int)arg1;
- (void)setEshContent:(struct EshContent *)arg1 forId:(int)arg2;
- (id)colorPalette;
- (void)setColorPalette:(id)arg1;
- (id)drawableForBlipId:(int)arg1;
- (void)setDrawable:(id)arg1 forBlipId:(int)arg2;

@end

