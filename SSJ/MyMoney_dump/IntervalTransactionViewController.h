//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "DirtyDataDetectable.h"
#import "EGORefreshTableHeaderDelegate.h"
#import "FDRefreshTableFooterDelegate.h"
#import "FloatBackgroundHeaderViewDelegate.h"
#import "FloatBackgroundWallViewDelegate.h"
#import "PopupMenuViewDelegate.h"
#import "SingleTransactionOperationProtocol.h"
#import "TransactionMultipleSelectionViewControllerProtocol.h"
#import "TransactionSearchDisplayDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class BudgetBarView, CompositeTableView, CurrencyFormatter, EGORefreshTableHeaderView, FDRefreshTableFooterView, FilterViewController, FlatNavHeaderView, FloatBackgroundHeaderView, FloatBackgroundWallView, IntervalTransactionCompositeTableViewDelegateNormalHandler, KDDynamicButton, NSArray, NSDateFormatter, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, PopupMenuView, TransactionRecordViewModel, TransactionSearchDisplay, TreeRecord, UIButton, UIView;

@interface IntervalTransactionViewController : UIViewController <FloatBackgroundWallViewDelegate, FloatBackgroundHeaderViewDelegate, UIViewControllerTransitioningDelegate, TransactionMultipleSelectionViewControllerProtocol, TransactionSearchDisplayDelegate, EGORefreshTableHeaderDelegate, FDRefreshTableFooterDelegate, PopupMenuViewDelegate, SingleTransactionOperationProtocol, DirtyDataDetectable>
{
    NSObject<OS_dispatch_queue> *serialQueue;
    _Bool _reloading;
    _Bool _extendedEmptyTips;
    _Bool _isNoRecord;
    _Bool _shouldSummaryDailyTrans;
    _Bool _hasLoadedDataOnce;
    _Bool _isCopyToOtherAccountBook;
    _Bool _ignoreReloadTransactionLists;
    _Bool _userHasDeleteBill;
    int _reloadType;
    long long _timeSpanIndex;
    NSString *_systemCurrencyCode;
    CurrencyFormatter *_currencyFormatter;
    NSMutableArray *_cacheOfHeaders;
    NSArray *_timeSpans;
    long long _selectedMonthIndex;
    TreeRecord *_rootRecord;
    CompositeTableView *_compositeTableView;
    NSMutableArray *_traversalArray;
    long long _weekOffset;
    NSArray *_incomeAmounts;
    double _maxIncome;
    double _minIncome;
    NSArray *_expenseAmounts;
    double _maxExpense;
    double _minExpense;
    NSArray *_balanceAmounts;
    double _minBalance;
    double _maxBalance;
    NSMutableDictionary *_recordsToIndicator;
    FloatBackgroundHeaderView *_tableHeaderView;
    FloatBackgroundWallView *_floatWallView;
    EGORefreshTableHeaderView *_refreshHeaderView;
    FDRefreshTableFooterView *_refreshFooterView;
    FlatNavHeaderView *_monthStatisticsView;
    KDDynamicButton *_leftNavigationButton;
    TransactionRecordViewModel *_recordViewModel;
    IntervalTransactionCompositeTableViewDelegateNormalHandler *_normalHandler;
    TransactionSearchDisplay *_searchDisplay;
    BudgetBarView *_budgetBarView;
    double _startTimeInterval;
    double _endTimeInterval;
    long long _monthStart;
    double _currentMarkYear;
    FilterViewController *_filterViewCtrl;
    UIView *_maskView;
    UIView *_btnView;
    NSDateFormatter *_tableDayFormatter;
    NSDateFormatter *_tableWeekFormatter;
    NSDateFormatter *_yyyyMMddDateFormatter;
    NSDateFormatter *_dateFormatter;
    UIButton *_moreButton;
    PopupMenuView *_menu;
    unsigned long long _allcount;
}

@property(nonatomic) _Bool userHasDeleteBill; // @synthesize userHasDeleteBill=_userHasDeleteBill;
@property(nonatomic) unsigned long long allcount; // @synthesize allcount=_allcount;
@property(nonatomic) _Bool ignoreReloadTransactionLists; // @synthesize ignoreReloadTransactionLists=_ignoreReloadTransactionLists;
@property(retain, nonatomic) PopupMenuView *menu; // @synthesize menu=_menu;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSDateFormatter *yyyyMMddDateFormatter; // @synthesize yyyyMMddDateFormatter=_yyyyMMddDateFormatter;
@property(retain, nonatomic) NSDateFormatter *tableWeekFormatter; // @synthesize tableWeekFormatter=_tableWeekFormatter;
@property(retain, nonatomic) NSDateFormatter *tableDayFormatter; // @synthesize tableDayFormatter=_tableDayFormatter;
@property(retain, nonatomic) UIView *btnView; // @synthesize btnView=_btnView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) FilterViewController *filterViewCtrl; // @synthesize filterViewCtrl=_filterViewCtrl;
@property(nonatomic) double currentMarkYear; // @synthesize currentMarkYear=_currentMarkYear;
@property(nonatomic) _Bool isCopyToOtherAccountBook; // @synthesize isCopyToOtherAccountBook=_isCopyToOtherAccountBook;
@property(nonatomic) _Bool hasLoadedDataOnce; // @synthesize hasLoadedDataOnce=_hasLoadedDataOnce;
@property(nonatomic) long long monthStart; // @synthesize monthStart=_monthStart;
@property(nonatomic) double endTimeInterval; // @synthesize endTimeInterval=_endTimeInterval;
@property(nonatomic) double startTimeInterval; // @synthesize startTimeInterval=_startTimeInterval;
@property(retain, nonatomic) BudgetBarView *budgetBarView; // @synthesize budgetBarView=_budgetBarView;
@property(retain, nonatomic) TransactionSearchDisplay *searchDisplay; // @synthesize searchDisplay=_searchDisplay;
@property(retain, nonatomic) IntervalTransactionCompositeTableViewDelegateNormalHandler *normalHandler; // @synthesize normalHandler=_normalHandler;
@property(retain, nonatomic) TransactionRecordViewModel *recordViewModel; // @synthesize recordViewModel=_recordViewModel;
@property(retain, nonatomic) KDDynamicButton *leftNavigationButton; // @synthesize leftNavigationButton=_leftNavigationButton;
@property(retain, nonatomic) FlatNavHeaderView *monthStatisticsView; // @synthesize monthStatisticsView=_monthStatisticsView;
@property(retain, nonatomic) FDRefreshTableFooterView *refreshFooterView; // @synthesize refreshFooterView=_refreshFooterView;
@property(retain, nonatomic) EGORefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(retain, nonatomic) FloatBackgroundWallView *floatWallView; // @synthesize floatWallView=_floatWallView;
@property(retain, nonatomic) FloatBackgroundHeaderView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) NSMutableDictionary *recordsToIndicator; // @synthesize recordsToIndicator=_recordsToIndicator;
@property(nonatomic) double maxBalance; // @synthesize maxBalance=_maxBalance;
@property(nonatomic) double minBalance; // @synthesize minBalance=_minBalance;
@property(retain, nonatomic) NSArray *balanceAmounts; // @synthesize balanceAmounts=_balanceAmounts;
@property(nonatomic) double minExpense; // @synthesize minExpense=_minExpense;
@property(nonatomic) double maxExpense; // @synthesize maxExpense=_maxExpense;
@property(retain, nonatomic) NSArray *expenseAmounts; // @synthesize expenseAmounts=_expenseAmounts;
@property(nonatomic) double minIncome; // @synthesize minIncome=_minIncome;
@property(nonatomic) double maxIncome; // @synthesize maxIncome=_maxIncome;
@property(retain, nonatomic) NSArray *incomeAmounts; // @synthesize incomeAmounts=_incomeAmounts;
@property(nonatomic) long long weekOffset; // @synthesize weekOffset=_weekOffset;
@property(nonatomic) _Bool shouldSummaryDailyTrans; // @synthesize shouldSummaryDailyTrans=_shouldSummaryDailyTrans;
@property(nonatomic) int reloadType; // @synthesize reloadType=_reloadType;
@property(retain, nonatomic) NSMutableArray *traversalArray; // @synthesize traversalArray=_traversalArray;
@property(retain, nonatomic) CompositeTableView *compositeTableView; // @synthesize compositeTableView=_compositeTableView;
@property(retain, nonatomic) TreeRecord *rootRecord; // @synthesize rootRecord=_rootRecord;
@property(nonatomic) long long selectedMonthIndex; // @synthesize selectedMonthIndex=_selectedMonthIndex;
@property(nonatomic) _Bool isNoRecord; // @synthesize isNoRecord=_isNoRecord;
@property(nonatomic) _Bool extendedEmptyTips; // @synthesize extendedEmptyTips=_extendedEmptyTips;
@property(retain, nonatomic) NSArray *timeSpans; // @synthesize timeSpans=_timeSpans;
@property(retain, nonatomic) NSMutableArray *cacheOfHeaders; // @synthesize cacheOfHeaders=_cacheOfHeaders;
@property(retain, nonatomic) CurrencyFormatter *currencyFormatter; // @synthesize currencyFormatter=_currencyFormatter;
@property(retain, nonatomic) NSString *systemCurrencyCode; // @synthesize systemCurrencyCode=_systemCurrencyCode;
@property(nonatomic) long long timeSpanIndex; // @synthesize timeSpanIndex=_timeSpanIndex;
- (void).cxx_destruct;
- (void)reload;
- (_Bool)containDirtyDataAfterSynced;
- (long long)validateMultipleSelectOperation;
- (void)updateAllCount;
- (id)popupMenuView;
- (void)setTitle:(id)arg1;
- (void)showMultipleSelectViews;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setTimeBetween:(double)arg1 and:(double)arg2;
- (void)openOrCloseMenu:(id)arg1;
- (void)filterAction;
- (void)editAction;
- (void)searchAction;
- (void)addExpenseAction;
- (void)addExpenseWithExpense:(id)arg1;
- (void)allowCropSubViewAlphaAnimate:(double)arg1;
- (void)needSetNavigationBarBackground:(id)arg1;
- (void)pushToBudgetViewController;
- (void)presentModalFilterViewController;
- (id)treeRecordInCurrentTimeRange;
- (void)updateTableHeaderInfo;
- (void)shouldReloadSearchControllerIfViewWillAppear;
- (void)calculatePercent;
- (void)popupMenuView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (_Bool)fdRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)fdRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)rightScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)rightScrollViewDidScroll:(id)arg1;
- (void)nextIntervalTransactions;
- (long long)currentMonth;
- (long long)currentYear;
- (void)previousIntervalTransactions;
- (double)currentMarDateForYear:(long long)arg1;
- (void)assignBudgetAndBalanceValue;
- (id)timeSpansUtilTime:(double)arg1;
- (void)updateUIAfterReloadData;
- (void)updateUIAfterReloadDataFromOriginTimeSpanRange:(struct _NSRange)arg1;
- (void)updateNavigatorBarTitle;
- (void)reloadCurrentDataMonthFromDatabase;
- (void)updateTotalIncomeAndPayoutInfo;
- (id)currentTimeIntervalAllRecords;
- (id)calculateTimeSpansAtStartTime:(double)arg1 endTime:(double)arg2;
- (_Bool)existVoByService:(id)arg1 between:(double)arg2 and:(double)arg3;
- (id)latestTradeTimeInCurrentYear;
- (void)loadTimeSpans;
- (void)handleNotification:(id)arg1;
- (void)addNotificationObserver;
- (id)addTransactionDate;
- (void)loadTransactions;
- (_Bool)isSummaryAtTraversalIndex:(unsigned long long)arg1;
- (id)dailyRecordsAtRow:(unsigned long long)arg1;
- (id)traversalTreeRecord:(id)arg1;
- (id)transactionsWithTimeSpan:(id)arg1;
- (void)loadTransactionsWithinTimeSpan:(id)arg1;
- (void)ITReloadData:(_Bool)arg1;
- (void)ITReloadDataIfNeeded;
- (void)viewWillAppear:(_Bool)arg1;
- (void)clearCellRedPoints;
- (void)hideAllRightButtons;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)observeNotification;
- (void)viewDidLoad;
- (void)backAction;
- (void)setupLeftNavigationButton;
- (void)loadView;
- (id)init;
- (void)transactionMultipleSelectionViewControllerWillBack:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

