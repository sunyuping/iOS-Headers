/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSManagedObjectModel.h>

@interface NSManagedObjectModel (_NSInternalMethods)
+ (void)_deepCollectEntitiesInArray:(id)arg1 entity:(id)arg2;
+ (id)_modelPathsFromBundles:(id)arg1;
- (id)_initWithEntities:(id)arg1;
- (BOOL)isEditable;
- (void)_flattenProperties;
- (void)_createCachesAndOptimizeState;
- (BOOL)_isOptimizedForEncoding;
- (BOOL)_hasPrecomputedKeyOrder;
- (id)_precomputedKeysForEntity:(id)arg1;
- (void)_setIsEditable:(BOOL)arg1 optimizationStyle:(unsigned int)arg2;
- (void)_setIsEditable:(BOOL)arg1;
- (void)_throwIfNotEditable;
- (id)_entityForName:(id)arg1;
- (void)_removeEntityNamed:(id)arg1;
- (void)_removeEntity:(id)arg1;
- (id)_configurationsByName;
- (void)_addEntities:(id)arg1 toConfiguration:(id)arg2;
- (void)_removeEntities:(id)arg1 fromConfiguration:(id)arg2;
- (id)_localizationPolicy;
- (void)_setLocalizationPolicy:(id)arg1;
- (id)_sortedEntitiesForConfiguration:(id)arg1;
- (void)_addVersionIdentifiers:(id)arg1;
- (id)_entitiesByVersionHash;
- (void)_stripForMigration;
- (void)_restoreValidation;
- (id)_versionIdentifiersAsArray;
@end

