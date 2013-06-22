/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CKMessage, NSData;

@interface CKMessagePart : NSObject
{
    unsigned int _height;
    unsigned int _flags;
    int _rowID;
    int _outgoingBubbleColor;
    CKMessage *_parentMessage;
}

+ (id)_assembleTextPartFromRange:(id)arg1;
+ (id)_newPartsForNode:(id)arg1 resources:(id)arg2;
+ (id)copyDetachedMessageParts:(id)arg1;
+ (id)copyMessagePartsFromComposition:(id)arg1;
+ (id)_newPartForPartRepresentation:(id)arg1 previewPartRepresentation:(id)arg2;
+ (id)copyMessagePartsFromArrayRepresentation:(id)arg1;
+ (id)copyDeletedPart;
+ (id)copyUnknownPart;
- (BOOL)isEqual:(id)arg1;
- (id)mediaObject;
- (id)previewText;
- (BOOL)isDisplayable;
- (id)text;
- (id)imageData;
- (id)image;
@property(readonly, nonatomic) NSData *highlightData;
- (id)previewImage;
- (id)composeImages;
- (BOOL)usesColoredBalloon;
- (id)imageFilename;
- (id)detachedCopy;
- (void)getUIHeight:(unsigned int *)arg1 flags:(unsigned int *)arg2;
- (int)type;
- (void)_storePartFlagsSync;
- (void)setUIHeight:(unsigned long)arg1 flags:(unsigned long)arg2 store:(BOOL)arg3;
@property(nonatomic) int rowID; // @synthesize rowID=_rowID;
- (void)dealloc;
- (id)previewData;
- (id)composeData;
- (void)copyToPasteboard;
@property(nonatomic) int outgoingBubbleColor; // @synthesize outgoingBubbleColor=_outgoingBubbleColor;
@property(nonatomic) CKMessage *parentMessage; // @synthesize parentMessage=_parentMessage;

@end

