//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AllTransactionLoader, NSDateFormatter, NSLock, Transaction;

@interface ABDTransactionFormatter : NSObject
{
    _Bool _showPastEmptySection;
    _Bool _hasLoadTodayTransactions;
    _Bool _hasFinishedLoadTransactions;
    _Bool _isLoading;
    double _endTimeIntervalOfToday;
    double _constraintCellWidth;
    AllTransactionLoader *_transactionLoader;
    Transaction *_lastPastTransaction;
    NSDateFormatter *_sectionHeaderDateFormatter;
    NSDateFormatter *_dayStringDateFormatter;
    NSDateFormatter *_weekStringDateFormatter;
    NSLock *_lock;
}

+ (_Bool)isLastTransactionOverOneDay:(double)arg1 afterTransactionTradeTime:(double)arg2;
+ (_Bool)isFirstTransactionOverOneMonth:(double)arg1 beforeTransactionTradeTime:(double)arg2;
+ (_Bool)isFirstTransactionOverOneDay:(double)arg1 beforeTransactionTradeTime:(double)arg2;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSDateFormatter *weekStringDateFormatter; // @synthesize weekStringDateFormatter=_weekStringDateFormatter;
@property(retain, nonatomic) NSDateFormatter *dayStringDateFormatter; // @synthesize dayStringDateFormatter=_dayStringDateFormatter;
@property(retain, nonatomic) NSDateFormatter *sectionHeaderDateFormatter; // @synthesize sectionHeaderDateFormatter=_sectionHeaderDateFormatter;
@property(retain, nonatomic) Transaction *lastPastTransaction; // @synthesize lastPastTransaction=_lastPastTransaction;
@property(nonatomic) _Bool hasFinishedLoadTransactions; // @synthesize hasFinishedLoadTransactions=_hasFinishedLoadTransactions;
@property(nonatomic) _Bool hasLoadTodayTransactions; // @synthesize hasLoadTodayTransactions=_hasLoadTodayTransactions;
@property(retain, nonatomic) AllTransactionLoader *transactionLoader; // @synthesize transactionLoader=_transactionLoader;
@property(nonatomic) _Bool showPastEmptySection; // @synthesize showPastEmptySection=_showPastEmptySection;
@property(nonatomic) double constraintCellWidth; // @synthesize constraintCellWidth=_constraintCellWidth;
@property(nonatomic) double endTimeIntervalOfToday; // @synthesize endTimeIntervalOfToday=_endTimeIntervalOfToday;
- (void).cxx_destruct;
- (id)weekStringWithTradeTimeInterval:(double)arg1;
- (id)dayStringWithTradeTimeInterval:(double)arg1;
- (id)sectionHeaderWithTimeIntervalOfMonth:(double)arg1;
- (id)transactionSummary:(id)arg1 beforeTransactionTradeTime:(double)arg2 afterTransactionTradeTime:(double)arg3 isTodayTransaction:(_Bool)arg4;
- (id)transactionSummary:(id)arg1 beforeTransaction:(id)arg2 afterTransaction:(id)arg3 isTodayTransaction:(_Bool)arg4;
- (id)formatSortedTransactionsToSections:(id)arg1 beforeTransaction:(id)arg2 afterTransaction:(id)arg3 isTodayTransaction:(_Bool)arg4;
- (id)loadSectionsOfPastTransactionsByPage;
- (id)loadSectionOfTodayTransactions;
- (id)loadPageOfTransactionsGroupedInSections;
- (void)resetFormatter;
- (id)init;

@end

