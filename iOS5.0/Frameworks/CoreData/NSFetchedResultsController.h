/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSFetchRequest, NSManagedObjectContext, NSString;

@interface NSFetchedResultsController : NSObject
{
    NSFetchRequest *_fetchRequest;
    NSManagedObjectContext *_managedObjectContext;
    NSString *_sectionNameKeyPath;
    NSString *_sectionNameKey;
    NSString *_cacheName;
    void *_cache;
    struct _fetchResultsControllerFlags {
        unsigned int _sendObjectChangeNotifications:1;
        unsigned int _sendSectionChangeNotifications:1;
        unsigned int _sendDidChangeContentNotifications:1;
        unsigned int _sendWillChangeContentNotifications:1;
        unsigned int _sendSectionIndexTitleForSectionName:1;
        unsigned int _changedResultsSinceLastSave:1;
        unsigned int _hasMutableFetchedResults:1;
        unsigned int _hasBatchedArrayResults:1;
        unsigned int _hasSections:1;
        unsigned int _usesNonpersistedProperties:1;
        unsigned int _includesSubentities:1;
        unsigned int _reservedFlags:21;
    } _flags;
    id _delegate;
    id _sortKeys;
    id _fetchedObjects;
    id _sections;
    id _sectionsByName;
    id _sectionIndexTitles;
    id _sectionIndexTitlesSections;
}

+ (void)_set__PF_LINKEDAFTERNORTHSTAR:(BOOL)arg1;
+ (void)_set__PF_LINKEDAFTERWILDCAT:(BOOL)arg1;
+ (void)_set__PF__SkipSimulatorAsserts:(BOOL)arg1;
+ (void)initialize;
+ (void)deleteCacheWithName:(id)arg1;
- (id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 sectionNameKeyPath:(id)arg3 cacheName:(id)arg4;
- (void)dealloc;
@property(nonatomic) id <NSFetchedResultsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)performFetch:(id *)arg1;
@property(readonly, nonatomic) NSArray *fetchedObjects;
- (id)objectAtIndexPath:(id)arg1;
- (id)indexPathForObject:(id)arg1;
- (id)sectionIndexTitleForSectionName:(id)arg1;
@property(readonly, nonatomic) NSArray *sectionIndexTitles;
@property(readonly, nonatomic) NSArray *sections;
- (int)sectionForSectionIndexTitle:(id)arg1 atIndex:(int)arg2;
@property(readonly, nonatomic) NSString *cacheName; // @synthesize cacheName=_cacheName;
@property(readonly, nonatomic) NSString *sectionNameKeyPath; // @synthesize sectionNameKeyPath=_sectionNameKeyPath;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(readonly, nonatomic) NSFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;

@end

