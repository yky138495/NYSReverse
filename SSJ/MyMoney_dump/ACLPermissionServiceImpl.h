//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ACLPermissionService.h"

@class NSString;

@interface ACLPermissionServiceImpl : NSObject <ACLPermissionService>
{
}

- (id)deniedErrorWithPermissionName:(id)arg1;
- (_Bool)deleteAccount:(long long)arg1 error:(id *)arg2;
- (_Bool)deleteTemplate:(long long)arg1 error:(id *)arg2;
- (_Bool)changeTemplate:(id)arg1 withId:(long long)arg2 error:(id *)arg3;
- (_Bool)saveTemplate:(id)arg1 error:(id *)arg2;
- (long long)purchaseFund:(id)arg1 log:(id)arg2 error:(id *)arg3;
- (long long)openFundPosition:(id)arg1 error:(id *)arg2;
- (_Bool)deleteFundOnlyFundTransactionWithFID:(long long)arg1 error:(id *)arg2;
- (_Bool)deleteFundTransactionWithFID:(long long)arg1 error:(id *)arg2;
- (_Bool)updateFundTransaction:(id)arg1 oldAccountID:(long long)arg2 error:(id *)arg3;
- (long long)adjustFund:(id)arg1 error:(id *)arg2;
- (long long)bonusAndPurchaseFund:(id)arg1 error:(id *)arg2;
- (long long)bonusFund:(id)arg1 error:(id *)arg2;
- (long long)redeemFund:(id)arg1 error:(id *)arg2;
- (long long)purchaseFund:(id)arg1 error:(id *)arg2;
- (long long)buyStock:(id)arg1 log:(id)arg2 error:(id *)arg3;
- (long long)openStockPosition:(id)arg1 error:(id *)arg2;
- (_Bool)deleteStockOnlyStockTransactionWithFID:(long long)arg1 error:(id *)arg2;
- (_Bool)deleteStockTransactionWithFID:(long long)arg1 error:(id *)arg2;
- (_Bool)updateStockTransaction:(id)arg1 oldAccountID:(long long)arg2 error:(id *)arg3;
- (long long)bonusStock:(id)arg1 error:(id *)arg2;
- (long long)sellStock:(id)arg1 error:(id *)arg2;
- (long long)buyStock:(id)arg1 error:(id *)arg2;
- (_Bool)updateTransferTransactionVoAllowingHiddenAccountIfNotChangedFrom:(id)arg1 to:(id)arg2 error:(id *)arg3;
- (_Bool)updateTransactionTypeToTransfer:(id)arg1 error:(id *)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)updateExpenseOrIncomeTransactionVoAllowingHiddenAccountIfNotChangedFrom:(id)arg1 to:(id)arg2 error:(id *)arg3;
- (_Bool)updateTransactionTypeToIncomeExpense:(id)arg1 error:(id *)arg2;
- (_Bool)lendTheSameCurrencyAccountsWithExpense:(id)arg1 error:(id *)arg2;
- (_Bool)addReimburseTransactionVo:(id)arg1 error:(id *)arg2;
- (_Bool)addRefundTransactionVo:(id)arg1 error:(id *)arg2;
- (_Bool)updateLoanAllowingHiddenAccountIfNotChanged:(id)arg1 from:(id)arg2 to:(id)arg3 error:(id *)arg4;
- (_Bool)updateLoan:(id)arg1 from:(id)arg2 to:(id)arg3 error:(id *)arg4;
- (_Bool)recoverLoanWithExpense:(id)arg1 groupId:(id)arg2 error:(id *)arg3;
- (_Bool)payDebtWithExpense:(id)arg1 groupId:(id)arg2 error:(id *)arg3;
- (_Bool)borrowWithExpense:(id)arg1 error:(id *)arg2;
- (_Bool)lendWithExpense:(id)arg1 error:(id *)arg2;
- (_Bool)updateTransferTransactionVoFrom:(id)arg1 to:(id)arg2 error:(id *)arg3;
- (_Bool)addTransferTransactionVoFromTemplate:(id)arg1 error:(id *)arg2;
- (_Bool)addTransferTransactionVo:(id)arg1 error:(id *)arg2;
- (_Bool)deleteExpenseById:(long long)arg1 error:(id *)arg2;
- (_Bool)updateExpenseOrIncomeTransactionVoFrom:(id)arg1 to:(id)arg2 error:(id *)arg3;
- (_Bool)addExpenseOrIncomeTransactionVoFromTemplate:(id)arg1 error:(id *)arg2;
- (_Bool)addExpenseOrIncomeTransactionVo:(id)arg1 error:(id *)arg2;
- (_Bool)authorizedWithACLPermissionType:(long long)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

