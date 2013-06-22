/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADShade.h>

@class OADRelativeRect;

@interface OADPathShade : OADShade
{
    OADRelativeRect *mFillToRect;
    BOOL mIsFillToRectOverridden;
    int mType;
    BOOL mIsTypeOverridden;
}

+ (id)defaultProperties;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDefaults;
- (id)fillToRect;
- (void)setFillToRect:(id)arg1;
- (BOOL)isFillToRectOverridden;
- (int)type;
- (void)setType:(int)arg1;
- (BOOL)isTypeOverridden;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

