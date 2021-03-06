//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class BudgetItem, NSArray, NSDecimalNumber, NSString;

@protocol BudgetDao
- (NSDecimalNumber *)sumBudgetItemByParentCategoryPOID:(long long)arg1;
- (NSArray *)monthlyBudgetItemsUnderCategoryWithId:(long long)arg1;
- (NSArray *)allMonthlyBudgetItem;
- (BudgetItem *)budgetItemByCategoryName:(NSString *)arg1;
- (BudgetItem *)budgetItemByCategoryId:(long long)arg1;
- (BudgetItem *)budgetItemById:(long long)arg1;
- (_Bool)updateAmountBudgetBycategoryPOID:(BudgetItem *)arg1;
- (_Bool)updateBudgetItem:(BudgetItem *)arg1;
- (_Bool)deleteAllBudgetItems;
- (_Bool)deleteBudgetItemByCategoryId:(long long)arg1;
- (_Bool)deleteBudgetItemById:(long long)arg1;
- (long long)addBudgetItem:(BudgetItem *)arg1;
@end

