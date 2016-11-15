//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CompositeTableViewDataSource.h"
#import "CompositeTableViewDelegate.h"

@class CompositeTableView, CurrencyFormatter, NSArray, NSDateFormatter, NSMutableArray, NSString, TransactionRecordViewModel, TreeRecord;

@interface CompositeTableViewController : UIViewController <CompositeTableViewDelegate, CompositeTableViewDataSource>
{
    NSString *_systemCurrencyCode;
    CurrencyFormatter *_currencyFormatter;
    NSDateFormatter *_dateFormatter;
    CompositeTableView *_compositeTableView;
    TreeRecord *_rootRecord;
    NSMutableArray *_traversalArray;
    NSDateFormatter *_tableDayFormatter;
    NSDateFormatter *_tableWeekFormatter;
    NSDateFormatter *_yyyyMMddDateFormatter;
    NSArray *_timeSpans;
    long long _selectedMonthIndex;
    _Bool _isNoRecord;
    NSMutableArray *_cacheOfHeaders;
    long long _timeSpanIndex;
    _Bool _shouldSummaryDailyTrans;
    double _minIncome;
    double _maxIncome;
    double _minExpense;
    double _maxExpense;
    double _minBalance;
    double _maxBalance;
    NSArray *_incomeAmounts;
    NSArray *_expenseAmounts;
    NSArray *_balanceAmounts;
    _Bool _extendedEmptyTips;
    TransactionRecordViewModel *_recordViewModel;
}

@property(retain, nonatomic) TransactionRecordViewModel *recordViewModel; // @synthesize recordViewModel=_recordViewModel;
@property(nonatomic) _Bool extendedEmptyTips; // @synthesize extendedEmptyTips=_extendedEmptyTips;
@property(retain, nonatomic) NSArray *balanceAmounts; // @synthesize balanceAmounts=_balanceAmounts;
@property(retain, nonatomic) NSArray *expenseAmounts; // @synthesize expenseAmounts=_expenseAmounts;
@property(retain, nonatomic) NSArray *incomeAmounts; // @synthesize incomeAmounts=_incomeAmounts;
@property(retain, nonatomic) NSMutableArray *traversalArray; // @synthesize traversalArray=_traversalArray;
@property(retain, nonatomic) TreeRecord *rootRecord; // @synthesize rootRecord=_rootRecord;
@property(retain, nonatomic) NSString *systemCurrencyCode; // @synthesize systemCurrencyCode=_systemCurrencyCode;
@property(retain, nonatomic) CurrencyFormatter *currencyFormatter; // @synthesize currencyFormatter=_currencyFormatter;
@property long long timeSpanIndex; // @synthesize timeSpanIndex=_timeSpanIndex;
@property(retain, nonatomic) NSArray *timeSpans; // @synthesize timeSpans=_timeSpans;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSDateFormatter *yyyyMMddDateFormatter; // @synthesize yyyyMMddDateFormatter=_yyyyMMddDateFormatter;
@property(retain, nonatomic) NSDateFormatter *tableWeekFormatter; // @synthesize tableWeekFormatter=_tableWeekFormatter;
@property(retain, nonatomic) NSDateFormatter *tableDayFormatter; // @synthesize tableDayFormatter=_tableDayFormatter;
@property(retain, nonatomic) NSMutableArray *cacheOfHeaders; // @synthesize cacheOfHeaders=_cacheOfHeaders;
@property(retain, nonatomic) CompositeTableView *compositeTableView; // @synthesize compositeTableView=_compositeTableView;
- (void).cxx_destruct;
- (_Bool)isNoRecord;
- (void)calculatePercent;
- (double)compositeTableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)compositeTableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)fillMonthNavHeader:(id)arg1 inSection:(long long)arg2;
- (id)compositeTableView:(id)arg1 viewForMonthTransactionHeaderInSection:(long long)arg2;
- (_Bool)isSummaryAtTraversalIndex:(unsigned long long)arg1;
- (id)dailyRecordsAtRow:(unsigned long long)arg1;
- (unsigned long long)numberOfDailyRecordAtRow:(unsigned long long)arg1;
- (id)dateInStringAtRow:(unsigned long long)arg1;
- (id)traversalTreeRecord:(id)arg1;
- (id)transactionsWithTimeSpan:(id)arg1;
- (void)loadTransactionsWithinTimeSpan:(id)arg1;
- (void)refreshStatisticsInSection:(long long)arg1 header:(id)arg2;
- (void)clickMonthAction:(id)arg1;
- (void)viewDidUnload;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)rightTableView:(id)arg1 didSelectSubRowAtIndexPath:(id)arg2;
- (double)compositeTableView:(id)arg1 heightForSubrow:(long long)arg2 atIndexPath:(id)arg3 rightTableIndexPath:(id)arg4;
- (void)updateSummaryAfterDeleteAtIndexPath:(id)arg1 inTable:(id)arg2;
- (void)removeSummaryVoAtIndexPath:(id)arg1;
- (_Bool)shouldRemoveSummaryIfBeforeDeleteAtIndexPath:(id)arg1;
- (id)indexPathForSummaryAtIndexPath:(id)arg1;
- (_Bool)deleteObjectAtIndexPath:(id)arg1 inTable:(id)arg2;
- (_Bool)compositeTableView:(id)arg1 canEditAtIndexPath:(id)arg2;
- (void)rightTableView:(id)arg1 commitEditingStyle:(long long)arg2 atIndexPath:(id)arg3 compositeIndexPath:(id)arg4;
- (_Bool)isLastRowInSection:(long long)arg1;
- (_Bool)isLastSection:(long long)arg1;
- (_Bool)isLastSectionLastRowAtRow:(unsigned long long)arg1 section:(unsigned long long)arg2;
- (id)subTableView:(id)arg1 cellForSubrow:(long long)arg2 atIndexPath:(id)arg3 rightTableIndexPath:(id)arg4;
- (id)mainTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)compositeTableView:(id)arg1 numberOfSubRowsAtIndexPath:(id)arg2 rightTableIndexPath:(id)arg3;
- (long long)compositeTableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInCompositeTableView:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
