/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, OCPPackagePart;

@interface OAVShapeManager : NSObject
{
    struct _xmlNode *mShape;
    unsigned short mType;
    OCPPackagePart *mPackagePart;
    NSDictionary *mShapeStyle;
    NSDictionary *mTextBoxStyle;
}

- (id)initWithShape:(struct _xmlNode *)arg1 type:(unsigned short)arg2 packagePart:(id)arg3;
- (void)dealloc;
- (unsigned short)type;
- (struct _xmlNode *)shape;
- (id)packagePart;
- (id)path;
- (id)limo;
- (id)textBodyRects;
- (id)imageRelId;
- (id)movieRelId;
- (BOOL)isImage;
- (BOOL)isWordArt;
- (BOOL)isFillOK;
- (BOOL)isFilled;
- (id)fillType;
- (id)fillFgColor;
- (float)fillFgAlpha;
- (id)fillBgColor;
- (float)fillBgAlpha;
- (float)fillAngle;
- (float)fillFocus;
- (id)fillGradientColors;
- (id)imageFillId;
- (id)imageFillTitle;
- (BOOL)isStrokeOK;
- (BOOL)isStroked;
- (id)strokeFgColor;
- (id)strokeBgColor;
- (id)strokeFillType;
- (float)strokeFgAlpha;
- (float)strokeWidth;
- (float)strokeMiterLimit;
- (id)strokeCompoundType;
- (id)strokeDashStyle;
- (id)strokeCapStyle;
- (id)strokeJoinStyle;
- (id)strokeStartArrowType;
- (id)strokeStartArrowWidth;
- (id)strokeStartArrowLength;
- (id)strokeEndArrowType;
- (id)strokeEndArrowWidth;
- (id)strokeEndArrowLength;
- (BOOL)isShadowOK;
- (BOOL)isShadowed;
- (id)shadowType;
- (id)shadowColor;
- (float)shadowAlpha;
- (struct CGPoint)shadowOffsets;
- (id)textWrapStyle;
- (id)textAnchor;
- (BOOL)autoInsets;
- (id)textLayoutFlow;
- (id)textAltLayoutFlow;
- (id)textRotation;
- (BOOL)fitShapeToText;
- (struct OAVTextBoxInsets)textInsets;

@end

