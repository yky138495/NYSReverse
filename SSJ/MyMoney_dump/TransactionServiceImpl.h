//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TransactionService.h"

@class NSString;

@interface TransactionServiceImpl : NSObject <TransactionService>
{
}

- (_Bool)addLoanWithExpense:(id)arg1 forceCheckHiddenAccount:(_Bool)arg2 groupId:(id)arg3 error:(id *)arg4 log:(id)arg5;
- (id)addLoans:(id)arg1 groupIdsDict:(id)arg2 log:(id)arg3;
- (id)addBorrowLends:(id)arg1 intoAccountBook:(id)arg2 withLog:(id)arg3;
- (id)copyBorrowLends:(id)arg1 intoAccountBook:(id)arg2;
- (_Bool)addLoanWithExpense:(id)arg1 forceCheckHiddenAccount:(_Bool)arg2 groupId:(id)arg3 error:(id *)arg4;
- (_Bool)updateLoanAllowingHiddenAccountIfNotChanged:(id)arg1 from:(id)arg2 to:(id)arg3 error:(id *)arg4;
- (_Bool)updateTransferTransactionVoAllowingHiddenAccountIfNotChangedFrom:(id)arg1 to:(id)arg2 error:(id *)arg3;
- (_Bool)addTransferTransactionVoFromTemplate:(id)arg1 error:(id *)arg2;
- (_Bool)updateExpenseOrIncomeTransactionVoAllowingHiddenAccountIfNotChangedFrom:(id)arg1 to:(id)arg2 error:(id *)arg3;
- (_Bool)addExpenseOrIncomeTransactionVoFromTemplate:(id)arg1 error:(id *)arg2;
- (_Bool)updateLoan:(id)arg1 from:(id)arg2 to:(id)arg3 forceCheckHiddenAccount:(_Bool)arg4 error:(id *)arg5;
- (_Bool)updateLoan:(id)arg1 from:(id)arg2 to:(id)arg3 error:(id *)arg4;
- (_Bool)recoverLoanWithExpense:(id)arg1 groupId:(id)arg2 error:(id *)arg3 log:(id)arg4;
- (id)addAskDebts:(id)arg1 intoAccountBook:(id)arg2 withLog:(id)arg3;
- (id)copyAskDebts:(id)arg1 intoAccountBook:(id)arg2;
- (_Bool)recoverLoanWithExpense:(id)arg1 groupId:(id)arg2 error:(id *)arg3;
- (_Bool)lendTheSameCurrencyAccountsWithExpense:(id)arg1 error:(id *)arg2;
- (_Bool)lendWithExpense:(id)arg1 error:(id *)arg2;
- (_Bool)payDebtWithExpense:(id)arg1 groupId:(id)arg2 error:(id *)arg3 log:(id)arg4;
- (id)addPayDebts:(id)arg1 intoAccountBook:(id)arg2 withLog:(id)arg3;
- (id)copyPayDebts:(id)arg1 intoAccountBook:(id)arg2;
- (_Bool)payDebtWithExpense:(id)arg1 groupId:(id)arg2 error:(id *)arg3;
- (_Bool)borrowWithExpense:(id)arg1 error:(id *)arg2;
- (_Bool)addLoanWithExpense:(id)arg1 groupId:(id)arg2 error:(id *)arg3 log:(id)arg4;
- (_Bool)addLoanWithExpense:(id)arg1 groupId:(id)arg2 error:(id *)arg3;
- (void)orderRecentUsedIncomeCategory:(id)arg1;
- (void)orderRecentUsedExpenseCategory:(id)arg1;
- (void)orderRecentUsedAccount:(id)arg1;
- (void)orderRecentUsedCreditor:(id)arg1;
- (void)orderRecentUsedMember:(id)arg1;
- (void)orderRecentUsedProject:(id)arg1;
- (void)orderRecentUsedCorporation:(id)arg1;
- (void)updateRecentUsedItemForTransaction:(id)arg1;
- (_Bool)deletePhotoNamed:(id)arg1;
- (id)writeImageToFile:(id)arg1;
- (_Bool)savePhotoForExpense:(id)arg1 error:(id *)arg2;
- (_Bool)isOutdatedCategory:(id)arg1 error:(id *)arg2;
- (_Bool)hasOutdatedDataInTransactionVo:(id)arg1 error:(id *)arg2;
- (_Bool)isValidTransferTransactionVo:(id)arg1 originalTransferTransactionVo:(id)arg2 error:(id *)arg3;
- (_Bool)isValidLoanTransactionVo:(id)arg1 originalLoanTransactionVo:(id)arg2 error:(id *)arg3;
- (_Bool)isValidTransferTransactionVo:(id)arg1 forceCheckHiddenAccount:(_Bool)arg2 error:(id *)arg3;
- (_Bool)isValidExpenseOrIncomeTransactionVo:(id)arg1 forceCheckHiddenAccount:(_Bool)arg2 error:(id *)arg3;
- (_Bool)isValidTransferTransactionVo:(id)arg1 error:(id *)arg2;
- (_Bool)isValidLoanTransactionVo:(id)arg1 forceCheckHiddenAccount:(_Bool)arg2 error:(id *)arg3;
- (_Bool)isValidLoanTransactionVo:(id)arg1 error:(id *)arg2;
- (_Bool)isValidExpenseOrIncomeTransactionVo:(id)arg1 error:(id *)arg2;
- (id)addCorporationWithName:(id)arg1;
- (void)prepareExpenseVoForSavingToDatabase:(id)arg1;
- (id)photoImageNamed:(id)arg1;
- (_Bool)updateTransferTransactionVoFrom:(id)arg1 to:(id)arg2 forceCheckHiddenAccount:(_Bool)arg3 error:(id *)arg4;
- (_Bool)updateTransferTransactionVoFrom:(id)arg1 to:(id)arg2 error:(id *)arg3;
- (_Bool)updateExpenseOrIncomeTransactionVoFrom:(id)arg1 to:(id)arg2 forceCheckHiddenAccount:(_Bool)arg3 error:(id *)arg4;
- (_Bool)updateExpenseOrIncomeTransactionVoFrom:(id)arg1 to:(id)arg2 error:(id *)arg3;
- (_Bool)updateTransactionTypeToIncomeExpense:(id)arg1;
- (_Bool)updateTransactionTypeToTransfer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)addReimburseTransactionVo:(id)arg1 error:(id *)arg2;
- (_Bool)addTransferTransactionVo:(id)arg1 forceCheckHiddenAccount:(_Bool)arg2 error:(id *)arg3 log:(id)arg4;
- (id)insertTransfers:(id)arg1 intoAccountBook:(id)arg2 withLog:(id)arg3;
- (id)copyTransfers:(id)arg1 intoAccountBook:(id)arg2;
- (_Bool)addTransferTransactionVo:(id)arg1 forceCheckHiddenAccount:(_Bool)arg2 error:(id *)arg3;
- (_Bool)addTransferTransactionVo:(id)arg1 error:(id *)arg2;
- (_Bool)addRefundTransactionVo:(id)arg1 error:(id *)arg2;
- (_Bool)addExpenseOrIncomeTransactionVo:(id)arg1 forceCheckHiddenAccount:(_Bool)arg2 error:(id *)arg3 log:(id)arg4;
- (id)insertIncomePayouts:(id)arg1 intoAccountBook:(id)arg2 withLog:(id)arg3;
- (id)copyIncomePayouts:(id)arg1 intoAccountBook:(id)arg2;
- (id)logOfCopy;
- (_Bool)addExpenseOrIncomeTransactionVo:(id)arg1 forceCheckHiddenAccount:(_Bool)arg2 error:(id *)arg3;
- (_Bool)addExpenseOrIncomeTransactionVo:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

