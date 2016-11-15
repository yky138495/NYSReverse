//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ExpenseService.h"

@class NSString;

@interface ExpenseServiceImpl : NSObject <ExpenseService>
{
}

- (long long)businessTypeWithTransaction:(id)arg1;
- (id)photoImageWithTransaction:(id)arg1;
- (id)accountWithTransaction:(id)arg1;
- (id)anotherAccountWithTransaction:(id)arg1;
- (id)costWithTransaction:(id)arg1;
- (id)corporationWithTransaction:(id)arg1;
- (id)creditorWithTransaction:(id)arg1 creditors:(id)arg2 transactionDebt:(id)arg3;
- (id)projectWithTransaction:(id)arg1;
- (id)memberWithTransaction:(id)arg1;
- (int)loanTypeWithTransaction:(id)arg1;
- (_Bool)isJCTWithTransactionId:(long long)arg1;
- (_Bool)isJCTAccountGroupId:(long long)arg1;
- (id)jctIdsInTransIds:(id)arg1;
- (id)listExpenseWithStartTimeForSuperTransactionWithTransactionType:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 accounts:(id)arg4 categorys:(id)arg5 corporations:(id)arg6 projects:(id)arg7 members:(id)arg8 memo:(id)arg9;
- (id)listExpenseWithStartTimeForSuperTransaction:(double)arg1 endTime:(double)arg2 accounts:(id)arg3 categorys:(id)arg4 corporations:(id)arg5 projects:(id)arg6 members:(id)arg7 memo:(id)arg8;
- (id)transactionsForTodayWidgetSummaryWithStartTime:(double)arg1 andEndTime:(double)arg2;
- (_Bool)hasWrongDataInTransactionExtraTableCausedByIncrementallySync;
- (_Bool)modifyPhotoName:(id)arg1 toNewPhotoName:(id)arg2;
- (unsigned long long)countOfTransactionsRelatedToAccountId:(long long)arg1 between:(double)arg2 andEndTime:(double)arg3;
- (unsigned long long)countOfTransactionsBetweenStartTime:(double)arg1 andEndTime:(double)arg2;
- (long long)countOfAllTransactions;
- (id)duplicateTransactionBetweenAccount:(long long)arg1 andAnotherAccount:(long long)arg2;
- (_Bool)isValidateAccount:(id)arg1;
- (_Bool)isValidateCategory:(id)arg1;
- (id)latestTradeTimeBetween:(double)arg1 and:(double)arg2;
- (id)oldestTradeTimeBetween:(double)arg1 and:(double)arg2;
- (void)updateOldestExpenseTimeOfAllAccountBooks;
- (void)setOldestExpenseTimeOfAllAccountBooks:(id)arg1 account:(id)arg2;
- (id)oldestExpenseTimeOfAllAccountBooksWithAccount;
- (id)oldestExpenseTimeOfAllAccountBooksCompatiableWithAccount;
- (id)oldestExpenseTimeOfAllAccountBooksWithAccount:(id)arg1;
- (_Bool)shouldCalcOldestExpenseTimeOfAllAccountBooks;
- (id)oldestExpenseTimeOfAllAccountBooks;
- (id)oldestExpenseTime;
- (id)lastCreatedTransaction;
- (id)lastExpenseTime;
- (id)calculateCorporation:(long long)arg1 expenseAmountBetweenStart:(double)arg2 andEnd:(double)arg3;
- (id)calculateCorporation:(long long)arg1 incomeAmountBetweenStart:(double)arg2 andEnd:(double)arg3;
- (id)calculateTag:(long long)arg1 incomeAmountBetweenStart:(double)arg2 andEnd:(double)arg3;
- (id)calculateTag:(long long)arg1 expenseAmountBetweenStart:(double)arg2 andEnd:(double)arg3;
- (id)calculateAccount:(long long)arg1 incomeAmountBetweenStart:(double)arg2 andEnd:(double)arg3;
- (id)calculateAccount:(long long)arg1 expenseAmountBetweenStart:(double)arg2 andEnd:(double)arg3;
- (id)calculateIncomeAmountBetweenStart:(double)arg1 andEnd:(double)arg2;
- (id)calculateExpenseAmountBetweenStart:(double)arg1 andEnd:(double)arg2;
- (void)translateTransaction:(id)arg1 intoVo:(id)arg2;
- (id)extractTransactionListToExpenseList:(id)arg1;
- (id)digestIdsFromVos:(id)arg1;
- (id)listAllByTradeTimeDescreaseOrderWithStartTime:(double)arg1 endTime:(double)arg2;
- (id)listAllByTradeTimeDescreaseOrderWithTypes:(id)arg1 startTime:(double)arg2 endTime:(double)arg3;
- (id)listAllByTradeTimeDescreaseOrderWithTypes:(id)arg1 andOffset:(unsigned long long)arg2 andLimit:(unsigned long long)arg3;
- (id)listAllByTradeTimeDescreaseOrderWithOffset:(unsigned long long)arg1 andLimit:(unsigned long long)arg2;
- (id)listAllTransactionsSinceDay:(double)arg1 byTradeTimeDescreaseOrderedWithTypes:(id)arg2 andOffset:(unsigned long long)arg3 andLimit:(unsigned long long)arg4;
- (id)listAllTransactionsSinceDay:(double)arg1 byTradeTimeDescreaseOrderedWithOffset:(unsigned long long)arg2 andLimit:(unsigned long long)arg3;
- (id)listMontIncomeWithStartTime:(double)arg1 endTime:(double)arg2;
- (id)listMonthExpenseWithStartTime:(double)arg1 endTime:(double)arg2;
- (id)listMemberIncomeWithMemberId:(long long)arg1 startTime:(double)arg2 endTime:(double)arg3 accounts:(id)arg4 categorys:(id)arg5 corporations:(id)arg6 projects:(id)arg7 memo:(id)arg8 minAmount:(id)arg9 maxAmount:(id)arg10 unSelectedSecondCategorys:(id)arg11;
- (id)listProjectIncomeWithProjectId:(long long)arg1 startTime:(double)arg2 endTime:(double)arg3 accounts:(id)arg4 corporations:(id)arg5 categorys:(id)arg6 members:(id)arg7 memo:(id)arg8 minAmount:(id)arg9 maxAmount:(id)arg10 unSelectedSecondCategorys:(id)arg11;
- (id)listProjectIncomeWithProjectId:(long long)arg1 startTime:(double)arg2 endTime:(double)arg3 accounts:(id)arg4 corporations:(id)arg5 categorys:(id)arg6 memo:(id)arg7;
- (id)listAccountIncomeWithAccountId:(long long)arg1 startTime:(double)arg2 endTime:(double)arg3 categorys:(id)arg4 corporations:(id)arg5 projects:(id)arg6 members:(id)arg7 memo:(id)arg8 minAmount:(id)arg9 maxAmount:(id)arg10 unSelectedSecondCategorys:(id)arg11;
- (id)listAccountIncomeWithAccountId:(long long)arg1 startTime:(double)arg2 endTime:(double)arg3 categorys:(id)arg4 corporations:(id)arg5 projects:(id)arg6 memo:(id)arg7;
- (id)listCategoryIncomeWithCategoryId:(long long)arg1 startTime:(double)arg2 endTime:(double)arg3 accounts:(id)arg4 corporations:(id)arg5 projects:(id)arg6 members:(id)arg7 memo:(id)arg8 minAmount:(id)arg9 maxAmount:(id)arg10 unSelectedSecondCategorys:(id)arg11;
- (id)listCategoryIncomeWithCategoryId:(long long)arg1 startTime:(double)arg2 endTime:(double)arg3 accounts:(id)arg4 corporations:(id)arg5 projects:(id)arg6 memo:(id)arg7;
- (id)secondLevelListCategoryIncomeWithCategoryId:(long long)arg1 startTime:(double)arg2 endTime:(double)arg3 accounts:(id)arg4 corporations:(id)arg5 projects:(id)arg6 members:(id)arg7 memo:(id)arg8 minAmount:(id)arg9 maxAmount:(id)arg10 unSelectedSecondCategorys:(id)arg11;
- (id)secondLevelListCategoryIncomeWithCategoryId:(long long)arg1 startTime:(double)arg2 endTime:(double)arg3 accounts:(id)arg4 corporations:(id)arg5 projects:(id)arg6 memo:(id)arg7;
- (id)listMemberExpenseWithMemberId:(long long)arg1 startTime:(double)arg2 endTime:(double)arg3 accounts:(id)arg4 categorys:(id)arg5 corporations:(id)arg6 projects:(id)arg7 memo:(id)arg8 minAmount:(id)arg9 maxAmount:(id)arg10 unSelectedSecondCategorys:(id)arg11;
- (id)listProjectExpenseWithProjectId:(long long)arg1 startTime:(double)arg2 endTime:(double)arg3 accounts:(id)arg4 categorys:(id)arg5 corporations:(id)arg6 members:(id)arg7 memo:(id)arg8 minAmount:(id)arg9 maxAmount:(id)arg10 unSelectedSecondCategorys:(id)arg11;
- (id)listProjectExpenseWithProjectId:(long long)arg1 startTime:(double)arg2 endTime:(double)arg3 accounts:(id)arg4 categorys:(id)arg5 corporations:(id)arg6 memo:(id)arg7;
- (id)listProjectWithProjectId:(long long)arg1 startTime:(double)arg2 endTime:(double)arg3 accounts:(id)arg4 categorys:(id)arg5 corporations:(id)arg6 memo:(id)arg7;
- (id)listCorporationExpenseWithCorporationId:(long long)arg1 startTime:(double)arg2 endTime:(double)arg3 accounts:(id)arg4 categorys:(id)arg5 projects:(id)arg6 members:(id)arg7 memo:(id)arg8 minAmount:(id)arg9 maxAmount:(id)arg10 unSelectedSecondCategorys:(id)arg11;
- (id)listCorporationExpenseWithCorporationId:(long long)arg1 startTime:(double)arg2 endTime:(double)arg3 accounts:(id)arg4 categorys:(id)arg5 projects:(id)arg6 memo:(id)arg7;
- (id)listAccountExpenseWithAccountId:(long long)arg1 startTime:(double)arg2 endTime:(double)arg3 categorys:(id)arg4 corporations:(id)arg5 projects:(id)arg6 members:(id)arg7 memo:(id)arg8 minAmount:(id)arg9 maxAmount:(id)arg10 unSelectedSecondCategorys:(id)arg11;
- (id)listAccountExpenseWithAccountId:(long long)arg1 startTime:(double)arg2 endTime:(double)arg3 categorys:(id)arg4 corporations:(id)arg5 projects:(id)arg6 memo:(id)arg7;
- (id)secondLevelListCategoryExpenseWithCategoryId:(long long)arg1 startTime:(double)arg2 endTime:(double)arg3 accounts:(id)arg4 corporations:(id)arg5 projects:(id)arg6 members:(id)arg7 memo:(id)arg8 minAmount:(id)arg9 maxAmount:(id)arg10 unSelectedSecondCategorys:(id)arg11;
- (id)secondLevelListCategoryExpenseWithCategoryId:(long long)arg1 startTime:(double)arg2 endTime:(double)arg3 accounts:(id)arg4 corporations:(id)arg5 projects:(id)arg6 memo:(id)arg7;
- (id)listCategoryExpenseWithCategoryId:(long long)arg1 startTime:(double)arg2 endTime:(double)arg3 accounts:(id)arg4 corporations:(id)arg5 projects:(id)arg6 members:(id)arg7 memo:(id)arg8 minAmount:(id)arg9 maxAmount:(id)arg10 unSelectedSecondCategorys:(id)arg11;
- (id)listCategoryExpenseWithCategoryId:(long long)arg1 startTime:(double)arg2 endTime:(double)arg3 accounts:(id)arg4 corporations:(id)arg5 projects:(id)arg6 memo:(id)arg7;
- (id)listTransactionWithStartTime:(double)arg1 endTime:(double)arg2 accounts:(id)arg3 categorys:(id)arg4 corporations:(id)arg5 projects:(id)arg6 members:(id)arg7 memo:(id)arg8;
- (id)listExpenseWithSecondLevelCategory:(id)arg1;
- (id)listNotJCTExpenseWithStartTime:(double)arg1 endTime:(double)arg2 accounts:(id)arg3 categorys:(id)arg4 corporations:(id)arg5 projects:(id)arg6 members:(id)arg7 memo:(id)arg8;
- (id)listExpenseWithStartTime:(double)arg1 endTime:(double)arg2 accounts:(id)arg3 categorys:(id)arg4 corporations:(id)arg5 projects:(id)arg6 members:(id)arg7 memo:(id)arg8;
- (id)listExpenseWithStartTime:(double)arg1 endTime:(double)arg2 accounts:(id)arg3 categorys:(id)arg4 corporations:(id)arg5 projects:(id)arg6 memo:(id)arg7;
- (id)transactionFromExpenseVo:(id)arg1;
- (_Bool)calculateAndUpdateBalanceById:(long long)arg1 withType:(long long)arg2;
- (_Bool)calculateAndUpdateBalanceById:(long long)arg1 withType:(long long)arg2 andUpdateLastUpdateTime:(_Bool)arg3;
- (_Bool)calculateAndUpdateBalanceOfAccounts:(id)arg1;
- (_Bool)updateIncomeRecordWithExpenseVo:(id)arg1 fromOldExpense:(id)arg2;
- (_Bool)updateTransferWithExpenseVo:(id)arg1 fromOldExpense:(id)arg2 relationStamp:(id)arg3 buyerMoney:(id)arg4 sellerMoney:(id)arg5;
- (_Bool)updateExpenseRecordWithExpenseVo:(id)arg1 fromOldExpense:(id)arg2 relationStamp:(id)arg3;
- (id)transferInMoneyFromExpenseVo:(id)arg1;
- (_Bool)updateLoanExpense:(id)arg1 fromOldExpense:(id)arg2 withBuyerMoney:(id)arg3 sellerMoney:(id)arg4;
- (_Bool)updateTransferExpense:(id)arg1 fromOldExpense:(id)arg2 withBuyerMoney:(id)arg3 sellerMoney:(id)arg4;
- (_Bool)updateExpense:(id)arg1 fromOldExpense:(id)arg2;
- (_Bool)deleteExpenseById:(long long)arg1 keepPhoto:(_Bool)arg2;
- (_Bool)deleteExpenseById:(long long)arg1;
- (_Bool)deleteLoanDebtAndGroupByTransactionId:(long long)arg1;
- (_Bool)deleteDebtRecordExpenseVo:(id)arg1;
- (_Bool)markPhotoIsNeedUpload:(_Bool)arg1 expenseId:(long long)arg2 expenseRelation:(id)arg3;
- (_Bool)markPhotoIsNeedUpload:(_Bool)arg1 photoName:(id)arg2;
- (void)markPhotoNamesToUpload:(id)arg1;
- (_Bool)deleteExpensePhotoNamed:(id)arg1;
- (_Bool)addExpenseTransaction:(long long)arg1 withExpenseVo:(id)arg2 relationStamp:(id)arg3 log:(id)arg4;
- (id)createTransactionWithTransactionType:(unsigned long long)arg1 expense:(id)arg2 relationStamp:(id)arg3;
- (id)addExpenses:(id)arg1 transactionType:(unsigned long long)arg2 relationStamp:(id)arg3 log:(id)arg4;
- (_Bool)addExpenseTransaction:(long long)arg1 withExpenseVo:(id)arg2 relationStamp:(id)arg3;
- (_Bool)addNewExpense:(id)arg1 log:(id)arg2;
- (id)addExpenses:(id)arg1 withLog:(id)arg2;
- (_Bool)addNewExpense:(id)arg1;
- (_Bool)invalidExpense:(id)arg1;
- (id)recordsByCreditorId:(long long)arg1;
- (_Bool)existRecordWithCorporationId:(long long)arg1 between:(double)arg2 and:(double)arg3;
- (id)recordsByCorporationId:(long long)arg1 between:(double)arg2 and:(double)arg3;
- (_Bool)existRecordWithProjectId:(long long)arg1 between:(double)arg2 and:(double)arg3;
- (id)recordsByProjectId:(long long)arg1 between:(double)arg2 and:(double)arg3;
- (_Bool)existRecordWithAccountId:(long long)arg1 between:(double)arg2 and:(double)arg3;
- (id)recordsByAccountId:(long long)arg1 between:(double)arg2 and:(double)arg3;
- (id)recordById:(long long)arg1;
- (_Bool)existRecordBetween:(double)arg1 and:(double)arg2;
- (id)recordsBetweenStart:(double)arg1 andEnd:(double)arg2;
- (_Bool)deleteAccountBookImportExpenseByCreatedTime:(double)arg1;
- (_Bool)deleteCardImportExpenseByCreatedTime:(double)arg1;
- (id)accountBookImportExpensesByCreatedTime:(double)arg1;
- (id)myCardImportExpensesByCreatedTime:(double)arg1;
- (id)expensesByTradeTime:(double)arg1;
- (id)recordsAtDay:(double)arg1 accounts:(id)arg2 categorys:(id)arg3 corporations:(id)arg4 projects:(id)arg5 memo:(id)arg6;
- (id)recordsAtDay:(double)arg1 accounts:(id)arg2 categorys:(id)arg3 corporations:(id)arg4 projects:(id)arg5 members:(id)arg6 memo:(id)arg7;
- (id)recordsAtDay:(double)arg1;
- (id)expenseByTransferOutId:(long long)arg1;
- (id)expenseByTransferInId:(long long)arg1;
- (id)rootCategorysMapWithTransactions:(id)arg1;
- (id)transferInCostByIds:(id)arg1;
- (id)transferOutCostByIds:(id)arg1;
- (id)transferCostsByIds:(id)arg1 transferType:(unsigned long long)arg2;
- (id)anotherCostMapWithTransactions:(id)arg1;
- (id)expensesByIds:(id)arg1;
- (id)expenseById:(long long)arg1;
- (id)transactionById:(long long)arg1;
- (_Bool)isJCTrecordWithId:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

