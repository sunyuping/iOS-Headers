/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface CPDumpEnum : NSObject
{
    NSString *mTypeName;
    NSMutableDictionary *mValueToNameMap;
    NSMutableDictionary *mNameToValueMap;
}

- (id)nameForValue:(long)arg1;
- (id)valueForName:(id)arg1;
- (id)typeName;
- (void)dealloc;
- (id)initWithTypeName:(id)arg1 pairs:(struct CPDumpEnumPair *)arg2;

@end
