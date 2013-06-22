/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SPDaemonQueryDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSTimer, SPDaemonQueryToken, SPSearchResultDeserializer, UISearchBar, UISearchDisplayController;

@interface CKConversationSearcher : NSObject <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UISearchDisplayDelegate, SPDaemonQueryDelegate>
{
    id <CKConversationSearcherDelegate> _delegate;
    UISearchDisplayController *_searchController;
    UISearchBar *_searchBar;
    SPDaemonQueryToken *_queryToken;
    NSTimer *_resultProcessor;
    unsigned int _deserializerIndex;
    SPSearchResultDeserializer *_deserializer;
    struct _CKSpotlightSearchResultList _allSearchResults;
    struct _CKSpotlightSearchResultList _perConversationSearchResults;
    BOOL _shouldDisplayNoResults;
    BOOL _active;
    BOOL _showingSearchResults;
}

- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)_cancel;
- (void)_processSearchResults;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 didShowSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 didHideSearchResultsTableView:(id)arg2;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDaemonQuery:(id)arg1 addedResults:(id)arg2;
- (void)searchDaemonQuery:(id)arg1 encounteredError:(id)arg2;
- (void)searchDaemonQueryCompleted:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)searchBar;
@property(readonly, nonatomic, getter=isShowingSearchResults) BOOL showingSearchResults; // @synthesize showingSearchResults=_showingSearchResults;
@property(readonly, nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(readonly, nonatomic) UISearchDisplayController *searchController; // @synthesize searchController=_searchController;

@end

