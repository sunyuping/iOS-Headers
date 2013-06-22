/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADProperties.h>

#import "NSCopying-Protocol.h"

@class OADColor, OADDash, OADFill, OADLineEnd, OADLineJoin;

@interface OADStroke : OADProperties <NSCopying>
{
    OADColor *mColor;
    OADFill *mFill;
    OADDash *mDash;
    OADLineJoin *mJoin;
    OADLineEnd *mHead;
    OADLineEnd *mTail;
    float mWidth;
    unsigned char mCap;
    unsigned char mCompoundType;
    unsigned char mPenAlignment;
    unsigned int mIsColorOverridden:1;
    unsigned int mIsCompoundTypeOverridden:1;
    unsigned int mIsCapOverridden:1;
    unsigned int mIsWidthOverridden:1;
    unsigned int mIsJoinOverridden:1;
    unsigned int mIsDashOverridden:1;
    unsigned int mIsFillOverridden:1;
    unsigned int mIsPenAlignmentOverridden:1;
}

+ (id)nullStroke;
+ (id)blackStroke;
+ (id)defaultProperties;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDefaults;
- (void)setParent:(id)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (BOOL)isColorOverridden;
- (id)fill;
- (void)setFill:(id)arg1;
- (BOOL)isFillOverridden;
- (id)dash;
- (void)setDash:(id)arg1;
- (BOOL)isDashOverridden;
- (id)join;
- (void)setJoin:(id)arg1;
- (BOOL)isJoinOverridden;
@property(retain, nonatomic) OADLineEnd *head; // @synthesize head=mHead;
@property(retain, nonatomic) OADLineEnd *tail; // @synthesize tail=mTail;
- (float)width;
- (void)setWidth:(float)arg1;
- (BOOL)isWidthOverridden;
- (int)cap;
- (void)setCap:(int)arg1;
- (BOOL)isCapOverridden;
- (int)compoundType;
- (void)setCompoundType:(int)arg1;
- (BOOL)isCompoundTypeOverridden;
- (int)penAlignment;
- (void)setPenAlignment:(int)arg1;
- (BOOL)isPenAlignmentOverridden;
- (void)setStyleColor:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

