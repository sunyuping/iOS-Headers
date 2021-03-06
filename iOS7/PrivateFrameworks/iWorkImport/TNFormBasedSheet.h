/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TNSheet.h>

@class NSString, TSTTableInfo;

// Not exported
@interface TNFormBasedSheet : TNSheet
{
    struct __CFUUID *mTableID;
    TSTTableInfo *mTableInfo;
    NSString *mImportedTargetName;
}

- (void)resolveImportedTargetNameInDocumentRoot:(id)arg1;
- (id)initWithContext:(id)arg1 importedTargetName:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)clearTableInfoCache;
@property(readonly) TSTTableInfo *tableInfo;
- (void)dealloc;
@property struct __CFUUID *tableID;
- (_Bool)isForm;
- (double)contentScale;

@end

