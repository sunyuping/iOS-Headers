/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIActionSheetDelegate-Protocol.h"

@interface ABActionSheetDelegate : NSObject <UIActionSheetDelegate>
{
    id _target;
    SEL _action;
}

- (id)initWithActionSheetTarget:(id)arg1 action:(SEL)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;

@end

