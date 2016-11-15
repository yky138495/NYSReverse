//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BudgetDimensionVo, BudgetEvent, BudgetEventVo, NSArray, NSDate, NSDecimalNumber, NSString, RecurrenceRuleVo;

@protocol MultiDimensionBudgetService <NSObject>
- (void)moveDataFromOldBudgetItemTable;
- (_Bool)needExcuteDataMoving;
- (NSDecimalNumber *)calculateExpenseWithCategoryLevel:(long long)arg1 CategoryIds:(NSArray *)arg2 memberIds:(NSArray *)arg3 startTime:(long long)arg4 endTime:(long long)arg5;
- (_Bool)updateBudgetItem:(BudgetEventVo *)arg1;
- (void)updateMonthBudgetEventStartAndEventEnd;
- (void)updateAllBudget:(NSDate *)arg1 recurrenceType:(unsigned long long)arg2;
- (NSDecimalNumber *)calculateExpenseAmountWithBeginDate:(NSDate *)arg1 endDate:(NSDate *)arg2;
- (NSDecimalNumber *)calculateExpenseAmountOfThisMonth;
- (NSDecimalNumber *)calculateBalanceWithBudgetEvent:(BudgetEventVo *)arg1 atDate:(NSDate *)arg2;
- (NSArray *)findBudgeEventsByRecurrenceType:(unsigned long long)arg1 budgetDimemsion:(BudgetDimensionVo *)arg2;
- (NSDecimalNumber *)calculateRootCategoriesBudgetEventAmountByCategoryType:(int)arg1 recurrenceType:(unsigned long long)arg2 eventStart:(NSDate *)arg3 eventEnd:(NSDate *)arg4;
- (NSDecimalNumber *)calculateChildCategoriesBudgetEventAmount:(long long)arg1 parentSourceKey:(NSString *)arg2 recurrenceType:(unsigned long long)arg3 eventStart:(NSDate *)arg4 eventEnd:(NSDate *)arg5;
- (NSArray *)findFirstCategoryBudgets:(int)arg1 freq:(unsigned long long)arg2 eventStart:(NSDate *)arg3 eventEnd:(NSDate *)arg4;
- (NSDecimalNumber *)findBudgetAmountOfThisMonthByBudgetDimensionType:(unsigned long long)arg1 recurrenceType:(unsigned long long)arg2 eventStart:(NSDate *)arg3 eventEnd:(NSDate *)arg4;
- (BudgetEvent *)findBudgetEventByCategoryId:(long long)arg1 recurrenceType:(unsigned long long)arg2 eventStart:(NSDate *)arg3 eventEnd:(NSDate *)arg4;
- (NSArray *)findBudgetItemsWithBalanceUnderCategoryWithId:(long long)arg1 parentSourceKey:(NSString *)arg2 recurrenceType:(unsigned long long)arg3 eventStart:(NSDate *)arg4 eventEnd:(NSDate *)arg5;
- (NSArray *)findMonthlyBudgetEvents;
- (BudgetEvent *)findBudgetEventVoByEventId:(long long)arg1;
- (_Bool)deleteBudgetEventAndChildBudgetEvents:(BudgetEventVo *)arg1;
- (long long)deleteEventWithEventId:(long long)arg1;
- (BudgetEventVo *)createBudget:(NSDecimalNumber *)arg1 withDimension:(BudgetDimensionVo *)arg2 recurrenceRule:(RecurrenceRuleVo *)arg3 eventStart:(NSDate *)arg4 eventEnd:(NSDate *)arg5;
@end
