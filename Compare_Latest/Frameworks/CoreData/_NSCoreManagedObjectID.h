/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSManagedObjectID.h>

@interface _NSCoreManagedObjectID : NSManagedObjectID
{
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (char *)generatedNameSuffix;
+ (void)initialize;
+ (Class)classWithStore:(id)arg1 andEntity:(id)arg2;
+ (unsigned int)allocateBatch:(id *)arg1 count:(unsigned int)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
+ (BOOL)accessInstanceVariablesDirectly;
+ (int)version;
+ (id)retain;
+ (id)_retain_1;
+ (void)release;
+ (void)_release_1;
+ (id)managedObjectIDFromUTF8String:(const char *)arg1 length:(unsigned int)arg2;
+ (id)managedObjectIDFromURIRepresentation:(id)arg1;
+ (void)setObjectStoreIdentifier:(id)arg1;
+ (void)_setStoreInfo1:(id)arg1;
+ (id)_storeInfo1;
+ (void)_storeDeallocated;
- (id)retain;
- (void)release;
- (void)finalize;
- (id)entity;
- (id)persistentStore;
- (BOOL)isTemporaryID;
- (id)_storeIdentifier;
- (id)_storeInfo1;
- (BOOL)_isPersistentStoreAlive;
- (unsigned int)retainCount;
- (id)URIRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

