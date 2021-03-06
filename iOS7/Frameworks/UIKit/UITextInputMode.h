/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface UITextInputMode : NSObject <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)activeInputModes;
+ (id)currentInputMode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSString *primaryLanguage;

@end

