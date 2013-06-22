/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface SUSectionsResponse : NSObject
{
    BOOL _cacheable;
    NSDictionary *_rawResponseDictionary;
    int _responseType;
    NSMutableDictionary *_sectionsCache;
    NSNumber *_shouldResetUserOrdering;
    NSArray *_sections;
}

+ (void)setLastCachedVersionIdentifier:(id)arg1;
+ (id)sectionsCacheDirectory;
+ (id)lastCachedVersionIdentifier;
@property(readonly, nonatomic) int responseType; // @synthesize responseType=_responseType;
@property(readonly, nonatomic) NSDictionary *rawResponseDictionary; // @synthesize rawResponseDictionary=_rawResponseDictionary;
@property(nonatomic, getter=isCacheable) BOOL cacheable; // @synthesize cacheable=_cacheable;
- (void)_writeImage:(id)arg1 toCachePath:(id)arg2 forIdentifier:(id)arg3 variant:(id)arg4;
- (id)_newSectionsFromDictionary:(id)arg1;
- (id)_newImageForIdentifier:(id)arg1 variant:(id)arg2 cacheDirectory:(id)arg3;
- (BOOL)_loadArtworkForSections:(id)arg1 fromCacheDirectory:(id)arg2;
- (void)_applyDefaultSearchFieldConfigurationsToSections:(id)arg1;
- (BOOL)writeToCacheDirectory:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSString *versionString;
@property(nonatomic) BOOL shouldResetUserOrdering;
@property(readonly, nonatomic) NSDictionary *sectionsDictionary;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) NSString *moreListTitle;
@property(readonly, nonatomic) NSArray *allSections;
- (void)dealloc;
- (id)initWithSectionsDictionary:(id)arg1 responseType:(int)arg2;
- (id)initWithContentsOfCacheDirectory:(id)arg1;
- (id)init;

@end

