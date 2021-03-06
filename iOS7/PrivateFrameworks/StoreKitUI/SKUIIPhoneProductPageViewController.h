/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIViewController.h>

#import "SKStoreProductViewControllerDelegate-Protocol.h"
#import "SKUIMetricsViewController-Protocol.h"
#import "SKUINetworkErrorDelegate-Protocol.h"
#import "SKUIProductPageChildViewControllerDelegate-Protocol.h"
#import "SKUIProductPageHeaderViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class ACAccountStore, NSOperationQueue, NSURL, NSURLRequest, SKUIFacebookLikeStatus, SKUIIncompatibleAppViewController, SKUIItem, SKUILoadProductPageOperation, SKUIMetricsController, SKUINetworkErrorViewController, SKUIProductPage, SKUIProductPageDetailsViewController, SKUIProductPageHeaderViewController, SKUIProductPagePlaceholderViewController, SKUIProductPageReviewsViewController, SKUISwooshArrayViewController, SSMetricsPageEvent, UIViewController<SKUIProductPageChildViewController>;

@interface SKUIIPhoneProductPageViewController : SKUIViewController <SKUIMetricsViewController, SKUINetworkErrorDelegate, SKUIProductPageHeaderViewDelegate, SKUIProductPageChildViewControllerDelegate, UIScrollViewDelegate, SKStoreProductViewControllerDelegate>
{
    ACAccountStore *_accountStore;
    UIViewController<SKUIProductPageChildViewController> *_childViewController;
    id <SKUIIPhoneProductPageDelegate> _delegate;
    SKUIProductPageDetailsViewController *_detailsViewController;
    SKUINetworkErrorViewController *_errorViewController;
    SKUIFacebookLikeStatus *_facebookLikeStatus;
    SKUIProductPageHeaderViewController *_headerViewController;
    SKUIIncompatibleAppViewController *_incompatibleViewController;
    SKUIItem *_item;
    SSMetricsPageEvent *_lastPageEvent;
    SKUIProductPagePlaceholderViewController *_loadingViewController;
    SKUILoadProductPageOperation *_loadOperation;
    long long _lookupItemIdentifier;
    SKUIMetricsController *_metricsController;
    NSOperationQueue *_operationQueue;
    SKUIProductPagePlaceholderViewController *_relatedPlaceholderViewController;
    SKUIProductPage *_productPage;
    SKUISwooshArrayViewController *_relatedViewController;
    SKUIProductPageReviewsViewController *_reviewsViewController;
    long long _sectionIndex;
    NSURLRequest *_urlRequest;
    _Bool _wantsActivityViewController;
}

@property(readonly, nonatomic) SKUIProductPage *productPage; // @synthesize productPage=_productPage;
@property(readonly, nonatomic) SKUIItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <SKUIIPhoneProductPageDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_viewControllerForSectionIndex:(unsigned long long)arg1;
- (void)_showActivityViewController;
- (void)_showError:(id)arg1;
- (void)_setProductPage:(id)arg1 error:(id)arg2;
- (void)_setMetricsController:(id)arg1;
- (void)_setFacebookLikeStatus:(id)arg1;
- (void)_setHeaderPositionForChildViewController:(id)arg1;
- (void)_setContentInsetsForChildViewController:(id)arg1;
- (void)_reloadFacebookLikeStatus;
- (void)_reloadChildViewControllers;
- (void)_presentHTMLProductPage;
- (_Bool)_isIncompatibleItem;
- (void)_invalidateChildViewControllers;
- (id)_headerViewController;
- (void)_animateAddToWishlist;
- (id)_loadingViewController;
- (id)_relatedPlaceholderViewController;
- (id)_relatedViewController;
- (id)_reviewsViewController;
- (id)_detailsViewController;
- (void)_shareButtonAction:(id)arg1;
- (void)_metricsEnterEventNotification:(id)arg1;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (struct CGPoint)topContentOffset;
- (void)productPageChildViewControllerDidLoad:(id)arg1;
- (void)productPageChildViewControllerDidScroll:(id)arg1;
- (void)productPageChildViewControllerDidLoadScrollView:(id)arg1;
- (void)productPageChildOpenURL:(id)arg1 viewControllerBlock:(id)arg2;
- (void)productPageChildOpenItem:(id)arg1;
- (void)productPageHeaderView:(id)arg1 didSelectURL:(id)arg2;
- (void)productPageHeaderView:(id)arg1 didSelectSectionIndex:(long long)arg2;
- (id)metricsControllerForProductPageHeader:(id)arg1;
- (void)networkErrorViewControllerInvalidated:(id)arg1;
- (id)activeMetricsController;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)contentScrollView;
- (void)reloadData;
@property(readonly, nonatomic) NSURL *URL;
- (void)configureMetricsWithPageEvent:(id)arg1;
- (void)dealloc;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithProductPage:(id)arg1;
- (id)initWithItemIdentifier:(long long)arg1;
- (id)initWithItem:(id)arg1;
- (id)_initSKUIIPhoneProductPageViewController;

@end

