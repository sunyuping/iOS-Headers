/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, PFUbiquityKnowledgeVector, PFUbiquityStoreMetadata, _PFUbiquityStack;

@interface PFUbiquityImportContext : NSObject
{
    _PFUbiquityStack *_stack;
    PFUbiquityStoreMetadata *_storeMetadata;
    PFUbiquityKnowledgeVector *_kv;
    PFUbiquityKnowledgeVector *_currentKnowledgeVector;
    NSString *_exportingPeerID;
}

- (id)initWithStoreName:(id)arg1 andUbiquityRootLocation:(id)arg2 withLocalPeerID:(id)arg3;
- (id)initWithStack:(id)arg1 andStoreMetadata:(id)arg2;
- (void)dealloc;
@property(retain, nonatomic) NSString *exportingPeerID; // @synthesize exportingPeerID=_exportingPeerID;
@property(retain, nonatomic) PFUbiquityKnowledgeVector *currentKnowledgeVector; // @synthesize currentKnowledgeVector=_currentKnowledgeVector;
@property(retain, nonatomic) PFUbiquityKnowledgeVector *knowledgeVector; // @synthesize knowledgeVector=_kv;
@property(readonly, nonatomic) PFUbiquityStoreMetadata *storeMetadata; // @synthesize storeMetadata=_storeMetadata;
@property(readonly, nonatomic) _PFUbiquityStack *stack; // @synthesize stack=_stack;

@end

