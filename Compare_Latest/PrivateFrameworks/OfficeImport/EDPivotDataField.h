/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface EDPivotDataField : NSObject
{
    int mBaseField;
    unsigned int mBaseItem;
    unsigned int mFieldId;
    unsigned int mNumFmtId;
    NSString *mName;
    int mFormat;
}

+ (id)pivotDataField;
- (id)init;
- (void)dealloc;
- (int)baseField;
- (void)setBaseField:(int)arg1;
- (unsigned int)baseItem;
- (void)setBaseItem:(unsigned int)arg1;
- (unsigned int)fieldId;
- (void)setFieldId:(unsigned int)arg1;
- (unsigned int)numFmtId;
- (void)setNumFmtId:(unsigned int)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (int)showDataAs;
- (void)setShowDataAs:(int)arg1;

@end

