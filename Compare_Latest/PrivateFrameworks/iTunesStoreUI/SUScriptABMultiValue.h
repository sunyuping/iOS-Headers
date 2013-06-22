/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray;

@interface SUScriptABMultiValue : SUScriptObject
{
    void *_multiValue;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) NSArray *values;
@property(readonly) unsigned int propertyType;
@property(readonly) long length;
- (id)_className;
- (id)valueAtIndex:(long)arg1;
- (id)labelAtIndex:(long)arg1;
- (long)indexForIdentifier:(int)arg1;
- (int)identifierAtIndex:(long)arg1;
- (long)firstIndexOfValue:(id)arg1;
@property(readonly) void *multiValue;
- (id)initWithMultiValue:(void *)arg1;

@end

