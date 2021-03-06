//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AccountBookVo, ExpenseVo, LoanTransactionVo, NSArray, NSString, UIImage;

@protocol TransactionService <NSObject>
- (NSArray *)copyPayDebts:(NSArray *)arg1 intoAccountBook:(AccountBookVo *)arg2;
- (NSArray *)copyAskDebts:(NSArray *)arg1 intoAccountBook:(AccountBookVo *)arg2;
- (NSArray *)copyBorrowLends:(NSArray *)arg1 intoAccountBook:(AccountBookVo *)arg2;
- (NSArray *)copyTransfers:(NSArray *)arg1 intoAccountBook:(AccountBookVo *)arg2;
- (NSArray *)copyIncomePayouts:(NSArray *)arg1 intoAccountBook:(AccountBookVo *)arg2;
- (_Bool)addTransferTransactionVo:(ExpenseVo *)arg1 forceCheckHiddenAccount:(_Bool)arg2 error:(id *)arg3;
- (_Bool)addExpenseOrIncomeTransactionVo:(ExpenseVo *)arg1 forceCheckHiddenAccount:(_Bool)arg2 error:(id *)arg3;
- (_Bool)addLoanWithExpense:(ExpenseVo *)arg1 groupId:(NSString *)arg2 error:(id *)arg3;
- (_Bool)updateLoanAllowingHiddenAccountIfNotChanged:(LoanTransactionVo *)arg1 from:(ExpenseVo *)arg2 to:(ExpenseVo *)arg3 error:(id *)arg4;
- (_Bool)updateTransferTransactionVoAllowingHiddenAccountIfNotChangedFrom:(ExpenseVo *)arg1 to:(ExpenseVo *)arg2 error:(id *)arg3;
- (_Bool)addTransferTransactionVoFromTemplate:(ExpenseVo *)arg1 error:(id *)arg2;
- (_Bool)updateExpenseOrIncomeTransactionVoAllowingHiddenAccountIfNotChangedFrom:(ExpenseVo *)arg1 to:(ExpenseVo *)arg2 error:(id *)arg3;
- (_Bool)addExpenseOrIncomeTransactionVoFromTemplate:(ExpenseVo *)arg1 error:(id *)arg2;
- (_Bool)updateLoan:(LoanTransactionVo *)arg1 from:(ExpenseVo *)arg2 to:(ExpenseVo *)arg3 error:(id *)arg4;
- (_Bool)recoverLoanWithExpense:(ExpenseVo *)arg1 groupId:(NSString *)arg2 error:(id *)arg3;
- (_Bool)lendTheSameCurrencyAccountsWithExpense:(ExpenseVo *)arg1 error:(id *)arg2;
- (_Bool)lendWithExpense:(ExpenseVo *)arg1 error:(id *)arg2;
- (_Bool)payDebtWithExpense:(ExpenseVo *)arg1 groupId:(NSString *)arg2 error:(id *)arg3;
- (_Bool)borrowWithExpense:(ExpenseVo *)arg1 error:(id *)arg2;
- (_Bool)updateTransferTransactionVoFrom:(ExpenseVo *)arg1 to:(ExpenseVo *)arg2 error:(id *)arg3;
- (_Bool)addReimburseTransactionVo:(ExpenseVo *)arg1 error:(id *)arg2;
- (_Bool)addLoanWithExpense:(ExpenseVo *)arg1 forceCheckHiddenAccount:(_Bool)arg2 groupId:(NSString *)arg3 error:(id *)arg4;
- (_Bool)addTransferTransactionVo:(ExpenseVo *)arg1 error:(id *)arg2;
- (UIImage *)photoImageNamed:(NSString *)arg1;
- (_Bool)updateTransferTransactionVoFrom:(ExpenseVo *)arg1 to:(ExpenseVo *)arg2 forceCheckHiddenAccount:(_Bool)arg3 error:(id *)arg4;
- (_Bool)isValidTransferTransactionVo:(ExpenseVo *)arg1 error:(id *)arg2;
- (_Bool)isValidLoanTransactionVo:(ExpenseVo *)arg1 error:(id *)arg2;
- (_Bool)isValidExpenseOrIncomeTransactionVo:(ExpenseVo *)arg1 forceCheckHiddenAccount:(_Bool)arg2 error:(id *)arg3;
- (_Bool)isValidExpenseOrIncomeTransactionVo:(ExpenseVo *)arg1 error:(id *)arg2;
- (_Bool)addRefundTransactionVo:(ExpenseVo *)arg1 error:(id *)arg2;
- (_Bool)updateExpenseOrIncomeTransactionVoFrom:(ExpenseVo *)arg1 to:(ExpenseVo *)arg2 error:(id *)arg3;
- (_Bool)addExpenseOrIncomeTransactionVo:(ExpenseVo *)arg1 error:(id *)arg2;
- (_Bool)updateExpenseOrIncomeTransactionVoFrom:(ExpenseVo *)arg1 to:(ExpenseVo *)arg2 forceCheckHiddenAccount:(_Bool)arg3 error:(id *)arg4;
- (_Bool)updateTransactionTypeToIncomeExpense:(ExpenseVo *)arg1;
- (_Bool)updateTransactionTypeToTransfer:(ExpenseVo *)arg1 completion:(void (^)(ExpenseVo *, ExpenseVo *))arg2;
@end

