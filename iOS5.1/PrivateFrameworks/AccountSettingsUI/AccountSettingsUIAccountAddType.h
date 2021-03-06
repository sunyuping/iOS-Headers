/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString, PSSpecifier;

@interface AccountSettingsUIAccountAddType : NSObject
{
    PSSpecifier *_specifier;
    NSArray *_dataclasses;
    NSString *_otherDataclassHeader;
    BOOL _wantsToBeLast;
}

- (id)initWithSpecifier:(id)arg1 dataclasses:(id)arg2 otherDataclassHeader:(id)arg3;
- (id)initWithSpecifier:(id)arg1 dataclasses:(id)arg2;
- (void)dealloc;
@property BOOL wantsToBeLast; // @synthesize wantsToBeLast=_wantsToBeLast;
@property(retain) NSString *otherDataclassHeader; // @synthesize otherDataclassHeader=_otherDataclassHeader;
@property(retain) NSArray *dataclasses; // @synthesize dataclasses=_dataclasses;
@property(retain) PSSpecifier *specifier; // @synthesize specifier=_specifier;

@end

