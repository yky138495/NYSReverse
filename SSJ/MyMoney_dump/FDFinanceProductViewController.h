//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "EGORefreshTableHeaderDelegate.h"
#import "FinanceProductTableViewActionDelegate.h"
#import "FinanceTableViewScrollDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CALayer, EGORefreshTableHeaderView, FinanceMarketProductHeaderView, FinanceMarketProductListNoticeModel, FinanceMarketProductScrollCell, HMSegmentedControl, NSArray, NSOperationQueue, NSString, NoNetworkCoverView, UIActivityIndicatorView, UIScrollView, UITableView, UIView;

@interface FDFinanceProductViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, EGORefreshTableHeaderDelegate, FinanceTableViewScrollDelegate, FinanceProductTableViewActionDelegate>
{
    _Bool _loading;
    _Bool _hasData;
    _Bool _needShowError;
    _Bool _isInitialRequestLoaded;
    _Bool _useOnlineURL;
    UITableView *_tableView;
    NSArray *_data;
    NSArray *_sectionTitles;
    NSArray *_segmentLinks;
    NSArray *_bottomData;
    FinanceMarketProductListNoticeModel *_notice;
    NSOperationQueue *_netWorkQueue;
    UITableView *_productTableView;
    UIScrollView *_scrollView;
    UIView *_contentView;
    FinanceMarketProductHeaderView *_headerView;
    HMSegmentedControl *_segmentedControl;
    FinanceMarketProductScrollCell *_cell;
    EGORefreshTableHeaderView *_refreshHeaderView;
    NoNetworkCoverView *_noNetworkCoverView;
    UIActivityIndicatorView *_indicator;
    long long _totalCount;
    unsigned long long _initialSegmentIndex;
    CALayer *_headerTopSeperator;
}

@property(nonatomic) __weak CALayer *headerTopSeperator; // @synthesize headerTopSeperator=_headerTopSeperator;
@property(nonatomic) unsigned long long initialSegmentIndex; // @synthesize initialSegmentIndex=_initialSegmentIndex;
@property(nonatomic) _Bool useOnlineURL; // @synthesize useOnlineURL=_useOnlineURL;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) _Bool isInitialRequestLoaded; // @synthesize isInitialRequestLoaded=_isInitialRequestLoaded;
@property(nonatomic) _Bool needShowError; // @synthesize needShowError=_needShowError;
@property(nonatomic) _Bool hasData; // @synthesize hasData=_hasData;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) NoNetworkCoverView *noNetworkCoverView; // @synthesize noNetworkCoverView=_noNetworkCoverView;
@property(retain, nonatomic) EGORefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(nonatomic) __weak FinanceMarketProductScrollCell *cell; // @synthesize cell=_cell;
@property(retain, nonatomic) HMSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) FinanceMarketProductHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UITableView *productTableView; // @synthesize productTableView=_productTableView;
@property(retain, nonatomic) NSOperationQueue *netWorkQueue; // @synthesize netWorkQueue=_netWorkQueue;
@property(retain, nonatomic) FinanceMarketProductListNoticeModel *notice; // @synthesize notice=_notice;
@property(retain, nonatomic) NSArray *bottomData; // @synthesize bottomData=_bottomData;
@property(retain, nonatomic) NSArray *segmentLinks; // @synthesize segmentLinks=_segmentLinks;
@property(retain, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)segmentDidSelected:(id)arg1;
- (void)updateRedPointState;
- (void)pushWebVCWithURLString:(id)arg1 webViewType:(unsigned long long)arg2;
- (void)reloadData;
- (void)tableViewDidSelectedBottomCell:(id)arg1;
- (void)tableViewDidSelectedProduct:(id)arg1;
- (void)tableViewDidSelectedNotice:(id)arg1;
- (void)scrollViewDidEndDraggingWithScrollType:(unsigned long long)arg1;
- (_Bool)needResetOffsetWhileTableViewDidScrollAtBottomWithValue:(double)arg1 ScrollType:(unsigned long long)arg2;
- (_Bool)needResetOffsetWhileTableViewDidScrollAtTopWithValue:(double)arg1 ScrollType:(unsigned long long)arg2;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)updateTopSeperator;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupView;
- (void)addNotification;
- (id)titlesFromSegmentModels:(id)arg1;
- (void)loadingFinish;
- (void)checkNetWorkState;
- (void)showNetworkErrorView;
- (void)refreshListData;
- (void)refreshData;
- (void)requestData;
- (void)loadNetworkCache;
- (void)didReceiveMemoryWarning;
- (void)loadInitialRequest;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 segmentIndex:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
