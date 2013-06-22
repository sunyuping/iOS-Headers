/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebCore/DOMObject.h>

@class DOMNode;

@interface DOMNodeIterator : DOMObject
{
}

- (void)dealloc;
- (void)finalize;
@property(readonly, retain) DOMNode *root;
@property(readonly) unsigned int whatToShow;
@property(readonly, retain) id <DOMNodeFilter> filter;
@property(readonly) BOOL expandEntityReferences;
@property(readonly, retain) DOMNode *referenceNode;
@property(readonly) BOOL pointerBeforeReferenceNode;
- (id)nextNode;
- (id)previousNode;
- (void)detach;

@end

