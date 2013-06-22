/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "EDImmutableObject-Protocol.h"
#import "NSCopying-Protocol.h"

@class EDProtection, EDResources;

@interface EDStyle : NSObject <NSCopying, EDImmutableObject>
{
    EDResources *mResources;
    unsigned int mParentIndex;
    unsigned int mContentFormatId;
    unsigned int mFontIndex;
    unsigned int mFillIndex;
    unsigned int mAlignmentInfoIndex;
    unsigned int mBordersIndex;
    EDProtection *mProtection;
    unsigned int mIndex;
    _Bool mContentFormatOverridden;
    _Bool mFontOverridden;
    _Bool mFillOverridden;
    _Bool mAlignmentInfoOverridden;
    _Bool mBordersOverridden;
    _Bool mProtectionOverridden;
    _Bool mDoNotModify;
}

+ (id)styleWithResources:(id)arg1;
- (id)initWithResources:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEquivalentToStyle:(id)arg1;
- (BOOL)isEqualToStyle:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (_Bool)isContentFormatOverridden;
- (void)setContentFormatOverridden:(_Bool)arg1;
- (id)contentFormat;
- (void)setContentFormat:(id)arg1;
- (_Bool)isFontOverridden;
- (void)setFontOverridden:(_Bool)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (_Bool)isFillOverridden;
- (void)setFillOverridden:(_Bool)arg1;
- (id)fill;
- (void)setFill:(id)arg1;
- (_Bool)isAlignmentInfoOverridden;
- (void)setAlignmentInfoOverridden:(_Bool)arg1;
- (id)alignmentInfo;
- (void)setAlignmentInfo:(id)arg1;
- (_Bool)isBordersOverridden;
- (void)setBordersOverridden:(_Bool)arg1;
- (id)borders;
- (void)setBorders:(id)arg1;
- (_Bool)isProtectionOverridden;
- (void)setProtectionOverridden:(_Bool)arg1;
- (id)protection;
- (void)setProtection:(id)arg1;
- (id)parent;
- (void)setParent:(id)arg1;
- (unsigned int)index;
- (void)setDoNotModify:(_Bool)arg1;

@end

