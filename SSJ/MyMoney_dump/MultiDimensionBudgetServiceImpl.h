//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MultiDimensionBudgetService.h"

@class NSString;

@interface MultiDimensionBudgetServiceImpl : NSObject <MultiDimensionBudgetService>
{
}

- (id)findAllCategoryName:(id)arg1;
- (id)checkBudgetEventData:(id)arg1;
- (_Bool)needExcuteDataMoving;
- (void)moveDataFromOldBudgetItemTable;
- (id)budgetEventsToBudgetTree:(id)arg1;
- (void)disableRecurrenceRule:(id)arg1;
- (void)updateMonthBudgetEventStartAndEventEnd;
- (id)calculateExpenseAmountWithBeginDate:(id)arg1 endDate:(id)arg2;
- (id)calculateExpenseAmountOfThisMonth;
- (void)updateBudgetItemData:(id)arg1;
- (_Bool)updateBudgetItem:(id)arg1;
- (id)createBudgetEventsOutOfDateWithBudget:(id)arg1 currentDate:(id)arg2;
- (id)calculateExpenseWithCategoryLevel:(long long)arg1 CategoryIds:(id)arg2 memberIds:(id)arg3 startTime:(long long)arg4 endTime:(long long)arg5;
- (id)updateSecondLevelBudget:(id)arg1 firstLevelBudgetArray:(id)arg2 currentDate:(id)arg3;
- (id)updateFirstLevelBudget:(id)arg1 array:(id)arg2 currentDate:(id)arg3;
- (id)updateRootBudget:(id)arg1 currentDate:(id)arg2;
- (void)updateAllBudget:(id)arg1 recurrenceType:(unsigned long long)arg2;
- (id)calculateBudgetEventAmountByBudgetType:(unsigned long long)arg1 RecurrenceRuleType:(unsigned long long)arg2;
- (id)calculateBudgetEventAmountByRecurrenceRuleType:(unsigned long long)arg1;
- (id)calculateRootCategoriesBudgetEventAmountByCategoryType:(int)arg1 recurrenceType:(unsigned long long)arg2 eventStart:(id)arg3 eventEnd:(id)arg4;
- (id)calculateChildCategoriesBudgetEventAmount:(long long)arg1 parentSourceKey:(id)arg2 recurrenceType:(unsigned long long)arg3 eventStart:(id)arg4 eventEnd:(id)arg5;
- (id)findBudgetEventByCategoryId:(long long)arg1 recurrenceType:(unsigned long long)arg2 eventStart:(id)arg3 eventEnd:(id)arg4;
- (id)findBudgeEventsByRecurrenceType:(unsigned long long)arg1 budgetDimemsion:(id)arg2;
- (id)calculateBalanceWithBudgetEvent:(id)arg1 atDate:(id)arg2 isAccumulation:(_Bool)arg3;
- (id)calculateBalanceWithBudgetEvent:(id)arg1 atDate:(id)arg2;
- (id)findActiveMonthlyBudgetEventsByaDate:(id)arg1;
- (id)findMonthlyBudgetEvents;
- (long long)saveSecondCategoryBudget:(id)arg1 recurrenceType:(unsigned long long)arg2 eventStart:(id)arg3 eventEnd:(id)arg4 amount:(id)arg5;
- (long long)saveFirstCategoryBudget:(id)arg1 recurrenceType:(unsigned long long)arg2 eventStart:(id)arg3 eventEnd:(id)arg4 amount:(id)arg5;
- (long long)saveRootCategoryBudget:(id)arg1 recurrenceType:(unsigned long long)arg2 eventStart:(id)arg3 eventEnd:(id)arg4 amount:(id)arg5;
- (id)findFirstCategoryBudgets:(int)arg1 freq:(unsigned long long)arg2 eventStart:(id)arg3 eventEnd:(id)arg4;
- (id)findBudgetAmountOfThisMonthByBudgetDimensionType:(unsigned long long)arg1 recurrenceType:(unsigned long long)arg2 eventStart:(id)arg3 eventEnd:(id)arg4;
- (id)findBudgetItemsWithBalanceUnderCategoryWithId:(long long)arg1 parentSourceKey:(id)arg2 recurrenceType:(unsigned long long)arg3 eventStart:(id)arg4 eventEnd:(id)arg5;
- (id)findBudgetEventsByCategoryId:(long long)arg1;
- (id)findBudgetEventVoByEventId:(long long)arg1;
- (_Bool)deleteBudgetEventAndChildBudgetEvents:(id)arg1;
- (long long)deleteEventWithEventId:(long long)arg1;
- (id)createBudget:(id)arg1 recurrenceRule:(id)arg2 eventStart:(id)arg3 eventEnd:(id)arg4;
- (id)createBudget:(id)arg1 withDimension:(id)arg2 recurrenceRule:(id)arg3 eventStart:(id)arg4 eventEnd:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

