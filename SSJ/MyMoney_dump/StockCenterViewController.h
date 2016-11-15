//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "GHContextOverlayViewDataSource.h"
#import "GHContextOverlayViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class GHContextMenuView, KDActivityIndicatorMessageView, KDStockChartView, NSMutableArray, NSString, StockSummaryChartData, UIButton, UIImageView, UILabel, UITableView, UIView;

@interface StockCenterViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, GHContextOverlayViewDataSource, GHContextOverlayViewDelegate>
{
    KDStockChartView *stockReportChartView;
    UITableView *stockListTableView;
    NSMutableArray *stockContentArray;
    StockSummaryChartData *chartData;
    _Bool hasRunChartAnimation;
    _Bool hasShowFullListTableView;
    UIView *rightBarView;
    UIButton *editBarButton;
    UIButton *middleExpandButton;
    UILabel *tableHeaderRightLabel;
    int currentShowProfitType;
    double totalMarketValue;
    double totalHoldingCostValue;
    _Bool hasViewDidAppear;
    _Bool hasFetchQuotesForStock;
    _Bool viewFirstDidAppear;
    UIImageView *noRecordImageView;
    UILabel *noRecordtipsLabel;
    double dayBeforeYesterDayMarketValue;
    double stockTradeCenterChartReportHeight;
    KDActivityIndicatorMessageView *requestIndicatorView;
    GHContextMenuView *contextMenu;
}

- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)arg1 forMenuAtPoint:(struct CGPoint)arg2;
- (id)imageForItemAtIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (void)createContextMenu;
- (void)showInvalidStockDatabaseAlert;
- (void)handleChartReportSwipeNotify:(id)arg1;
- (void)unregisterChartReportSwipeNotify;
- (void)registerChartReportSwipeNotify;
- (void)handleQuoteDateChangeNotify:(id)arg1;
- (void)unregisterQuoteDateChangeNotify;
- (void)registerQuoteDateChangeNotify;
- (void)loadStockHoldingData;
- (void)setupMockData;
- (void)adaptToScreenSize;
- (void)storeStocksRecordToDatabase:(id)arg1;
- (void)caculateStockChartData;
- (void)caculateAllStockProfitLoss;
- (void)caculateAllStockHoldingCost;
- (void)caculateStockReportData:(id)arg1;
- (void)caculateStockQuoteData:(id)arg1;
- (void)caculateYEBQuoteData:(id)arg1;
- (void)caculateStockDateRule:(id)arg1;
- (void)caculteAllStockMarketValue:(id)arg1;
- (void)showNetworkErrorToast;
- (void)handleFetchQuotesForStocksCallback:(id)arg1;
- (void)handleFetchAllStocksCallback:(id)arg1;
- (void)fetchQuoteForStocks:(id)arg1;
- (void)fetchAllStocks;
- (void)unregisterRemoteServiceCallback;
- (void)registerRemoteServiceCallback;
- (void)expandTableView:(id)arg1;
- (void)handleTableHeaderTap:(id)arg1;
- (void)setEditingAction;
- (void)switchProfitTypeInCell:(int)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)addAction;
- (void)createListContent:(id)arg1;
- (void)createRequestIndicatorView;
- (void)createStockListReport;
- (void)createStockReportChart;
- (void)setupNavigationBar;
- (void)loadView;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
