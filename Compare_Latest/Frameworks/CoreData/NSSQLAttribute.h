/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSSQLColumn.h>

@interface NSSQLAttribute : NSSQLColumn
{
}

- (unsigned int)_sqlTypeForAttributeType:(unsigned int)arg1 flags:(unsigned int)arg2;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)initForReadOnlyFetchWithExpression:(id)arg1;
- (id)attributeDescription;
- (BOOL)shouldIndex;

@end

