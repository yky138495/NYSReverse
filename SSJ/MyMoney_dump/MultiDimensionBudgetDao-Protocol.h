//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BudgetEvent, NSArray, NSDate, NSDecimalNumber, NSString;

@protocol MultiDimensionBudgetDao <NSObject>
- (NSArray *)findOldBudgets;
- (long long)countOfBudget;
- (NSDecimalNumber *)sumBudgetItemByParentCategoryPOID:(long long)arg1 parentSourceKey:(NSString *)arg2 recurrenceType:(unsigned long long)arg3 eventStart:(NSDate *)arg4 eventEnd:(NSDate *)arg5;
- (_Bool)updateBudgetItem:(BudgetEvent *)arg1;
- (NSArray *)findBudgetEventsByCategoryId:(long long)arg1 tagId:(long long)arg2 accountId:(long long)arg3 tradingEntityId:(long long)arg4 recurrenceRuleId:(long long)arg5;
- (NSDecimalNumber *)findAllBudgetAmountOfCategoryByRecurrenceType:(unsigned long long)arg1 eventStart:(NSDate *)arg2 eventEnd:(NSDate *)arg3;
- (NSArray *)findOutOfDateBudgetAtDate:(NSDate *)arg1 recurrenceType:(unsigned long long)arg2;
- (NSArray *)findBudgetItemsUnderCategoryWithId:(long long)arg1 parentSourceKey:(NSString *)arg2 recurrenceType:(unsigned long long)arg3 eventStart:(NSDate *)arg4 eventEnd:(NSDate *)arg5;
- (NSArray *)findQuarterlyBudgetItemsUnderCategoryWithId:(long long)arg1 parentSourceKey:(NSString *)arg2 eventStart:(NSDate *)arg3 eventEnd:(NSDate *)arg4;
- (NSArray *)findDaylyBudgetItemsUnderCategoryWithId:(long long)arg1 parentSourceKey:(NSString *)arg2 eventStart:(NSDate *)arg3 eventEnd:(NSDate *)arg4;
- (NSArray *)findWeeklyBudgetItemsUnderCategoryWithId:(long long)arg1 parentSourceKey:(NSString *)arg2 eventStart:(NSDate *)arg3 eventEnd:(NSDate *)arg4;
- (NSArray *)findYearlyBudgetItemsUnderCategoryWithId:(long long)arg1 parentSourceKey:(NSString *)arg2 eventStart:(NSDate *)arg3 eventEnd:(NSDate *)arg4;
- (NSArray *)findMonthlyBudgetItemsUnderCategoryWithId:(long long)arg1 parentSourceKey:(NSString *)arg2 eventStart:(NSDate *)arg3 eventEnd:(NSDate *)arg4;
- (NSArray *)findBudgetEventsByCategoryId:(long long)arg1 recurrenceRulesArray:(NSArray *)arg2;
- (NSArray *)findBudgetEventsByRecurrenceRules:(NSArray *)arg1 atDate:(NSDate *)arg2;
- (NSArray *)findBudgetEventsByRecurrenceRules:(NSArray *)arg1;
- (NSArray *)findBudgetEventsByRecurrenceBudgetType:(unsigned long long)arg1 Rules:(NSArray *)arg2;
- (BudgetEvent *)findBudgetEventByCategoryId:(long long)arg1 sourceKey:(NSString *)arg2 recurrenceType:(unsigned long long)arg3 eventStart:(NSDate *)arg4 eventEnd:(NSDate *)arg5;
- (BudgetEvent *)findBudgetEventByCategoryId:(long long)arg1 recurrenceType:(unsigned long long)arg2 eventStart:(NSDate *)arg3 eventEnd:(NSDate *)arg4;
- (BudgetEvent *)findBudgetEventByEventId:(long long)arg1;
- (_Bool)deleteBudgetEventByCategoryId:(long long)arg1;
- (_Bool)deleteBudgetEventsByBudgetEvents:(NSArray *)arg1;
- (_Bool)deleteBudgetEventAndChildBudgetEventsByEventId:(long long)arg1;
- (long long)deleteBudgetEventByEventId:(long long)arg1;
- (_Bool)addBudgetEvents:(NSArray *)arg1 tableName:(NSString *)arg2;
- (long long)addBudgetEvent:(BudgetEvent *)arg1 tableName:(NSString *)arg2;
@end
