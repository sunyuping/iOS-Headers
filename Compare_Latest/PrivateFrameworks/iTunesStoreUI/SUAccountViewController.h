/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUStorePageViewController.h>

@interface SUAccountViewController : SUStorePageViewController
{
    BOOL _failed;
    int _style;
}

@property(nonatomic) int style; // @synthesize style=_style;
- (id)_bagKeyForStyle:(int)arg1;
- (id)_authenticationQueryParametersForStyle:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)handleFailureWithError:(id)arg1;
- (id)newViewControllerForPage:(id)arg1 ofType:(int)arg2 returningError:(id *)arg3;
- (id)newFetchOperation;
- (id)init;

@end

