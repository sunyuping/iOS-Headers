/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface NSJoin : NSObject <NSCoding, NSCopying>
{
    NSString *_sourceAttributeName;
    NSString *_destinationAttributeName;
}

+ (id)joinWithSourceAttributeName:(id)arg1 destinationAttributeName:(id)arg2;
- (id)initWithSourceAttributeName:(id)arg1 destinationAttributeName:(id)arg2;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)sourceAttributeName;
- (id)destinationAttributeName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

