/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSTask.h>

@class NSMutableDictionary, NSPort;

@interface NSConcreteTask : NSTask
{
    NSMutableDictionary *_dictionary;
    BOOL _hasExeced;
    BOOL _isRunning;
    BOOL _hasPostedDeathNotification;
    BOOL _terminationRun;
    int _suspendCount;
    id _terminationHandler;
    int _pid;
    int _platformExitInfo;
    struct dispatch_source_s *_dsrc;
    NSPort *_tmpPort;
}

- (void)setStartsNewProcessGroup:(BOOL)arg1;
- (int)processIdentifier;
- (int)_procid;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)standardError;
- (id)standardOutput;
- (id)standardInput;
- (void)setStandardError:(id)arg1;
- (void)setStandardOutput:(id)arg1;
- (void)setStandardInput:(id)arg1;
- (int)suspendCount;
- (BOOL)resume;
- (BOOL)suspend;
- (void)terminateTask;
- (void)terminate;
- (void)interrupt;
- (id)taskDictionary;
- (void)setTaskDictionary:(id)arg1;
- (id)currentDirectoryPath;
- (id)preferredArchitectures;
- (id)arguments;
- (id)environment;
- (id)launchPath;
- (void)setLaunchPath:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setCurrentDirectoryPath:(id)arg1;
- (void)setPreferredArchitectures:(id)arg1;
- (void)setArguments:(id)arg1;
- (void)waitUntilExit;
- (void)launchWithDictionary:(id)arg1;
- (void)launch;
- (BOOL)isRunning;
- (int)terminationReason;
- (int)_platformExitInformation;
- (int)terminationStatus;
- (void)setTerminationHandler:(id)arg1;
- (id)terminationHandler;

@end

