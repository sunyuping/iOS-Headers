/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class SUDOMElement;

@interface SUWebViewScrollRequest : NSObject
{
    BOOL _animated;
    id _completionHandler;
    SUDOMElement *_element;
}

@property(retain, nonatomic) SUDOMElement *element; // @synthesize element=_element;
@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) BOOL animated; // @synthesize animated=_animated;
- (void)dealloc;

@end

