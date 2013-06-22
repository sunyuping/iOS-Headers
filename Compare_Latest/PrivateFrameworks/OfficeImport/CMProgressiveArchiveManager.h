/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CMArchiveManager.h>

@class NSDate, NSMutableDictionary, NSMutableString;

@interface CMProgressiveArchiveManager : CMArchiveManager
{
    void *mClient;
    CDStruct_ba543347 *mCallBacks;
    NSMutableDictionary *mDataCache;
    NSMutableDictionary *mStyleCache;
    NSMutableString *mCssString;
    BOOL mMainDataInited;
    NSDate *mStartDate;
    NSDate *mLastCommitDate;
    NSMutableString *mHtmlLogString;
}

- (id)initWithClient:(const void *)arg1 andCallBacks:(CDStruct_ba543347 *)arg2;
- (void)dealloc;
- (BOOL)isProgressive;
- (id)createResourceWithName:(id)arg1;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (void)pushText:(id)arg1 toPath:(id)arg2;
- (void)commitDataAtPath:(id)arg1;
- (void)closeResourceAtPath:(id)arg1;
- (BOOL)isCancelled;
- (id)addCssStyle:(id)arg1;
- (void)addCssStyle:(id)arg1 withName:(id)arg2;
- (void)pushCssToPath:(id)arg1;
- (id)cssStylesheetString;

@end
