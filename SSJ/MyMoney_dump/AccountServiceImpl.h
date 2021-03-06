//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AccountService.h"

@class NSString;

@interface AccountServiceImpl : NSObject <AccountService>
{
}

- (id)defaultTransferInAccountWithTransferOutAccount:(id)arg1;
- (_Bool)changeAccounts:(id)arg1 balancesToAmounts:(id)arg2 withMemos:(id)arg3 createTimes:(id)arg4 log:(id)arg5;
- (_Bool)changeBalanceToAmount:(id)arg1 inAccount:(id)arg2 withMemo:(id)arg3 createTime:(double)arg4 log:(id)arg5;
- (_Bool)copyBalances:(id)arg1 intoAccountBook:(id)arg2;
- (id)logOfCopy;
- (_Bool)changeBalanceToAmount:(id)arg1 inAccount:(id)arg2 withMemo:(id)arg3 createTime:(double)arg4;
- (_Bool)changeBalanceToAmount:(id)arg1 inAccount:(id)arg2 withMemo:(id)arg3;
- (void)adjustCreditcardAccountIndexFromAccountList:(id)arg1;
- (void)adjustTheIndexBetweenIndebtedAccountAndCreditcardAccountFromAccountList:(id)arg1;
- (id)serializationTransactionalAccountList:(id)arg1;
- (id)nameWithoutMycardSuffix:(id)arg1;
- (_Bool)renameAssociateAccountsWithoutMycardSuffix:(id)arg1;
- (_Bool)isExistAccountForAskDebt;
- (id)toAccountsForLoanAskDebt;
- (id)fromAccountsForLoanAskDebt;
- (_Bool)isExistAccountForLoanPayDebt;
- (id)toAccountsForLoanPayDebt;
- (id)fromAccountsForLoanPayDebt;
- (_Bool)isExistAccountForLoanLend;
- (id)toAccountsForLoanLend;
- (id)fromAccountsForLoanLend;
- (_Bool)isExistAccountForLoanBorrow;
- (id)toAccountsForLoanBorrow;
- (id)fromAccountsForLoanBorrow;
- (long long)lastLocalTransationId;
- (long long)addTransactionWhenTransfer:(long long)arg1 fromAccount:(id)arg2 toAccount:(id)arg3 withAmount:(id)arg4 currencyCode:(id)arg5 project:(id)arg6 memo:(id)arg7 relationStamp:(id)arg8 atDate:(double)arg9 photoName:(id)arg10 log:(id)arg11;
- (long long)addTransactionWhenTransfer:(long long)arg1 fromAccount:(id)arg2 toAccount:(id)arg3 withAmount:(id)arg4 currencyCode:(id)arg5 project:(id)arg6 memo:(id)arg7 relationStamp:(id)arg8 atDate:(double)arg9 photoName:(id)arg10;
- (long long)transferWithdraw:(id)arg1 fromAccount:(id)arg2 andDeposit:(id)arg3 toAccount:(id)arg4 atDate:(double)arg5 withProject:(id)arg6 memo:(id)arg7 photoName:(id)arg8 log:(id)arg9;
- (long long)transferWithdraw:(id)arg1 fromAccount:(id)arg2 andDeposit:(id)arg3 toAccount:(id)arg4 atDate:(double)arg5 withProject:(id)arg6 memo:(id)arg7 photoName:(id)arg8;
- (long long)withdraw:(id)arg1 fromAccount:(id)arg2 andDeposit:(id)arg3 toAccount:(id)arg4 atDate:(double)arg5 withProject:(id)arg6 memo:(id)arg7 photoName:(id)arg8 log:(id)arg9;
- (long long)withdraw:(id)arg1 fromAccount:(id)arg2 andDeposit:(id)arg3 toAccount:(id)arg4 atDate:(double)arg5 withProject:(id)arg6 memo:(id)arg7 photoName:(id)arg8;
- (_Bool)mergedAccount:(long long)arg1 withMainAccount:(long long)arg2 action:(int)arg3 duplicateTransactions:(id)arg4;
- (id)debtAccountBalance;
- (id)creditCardAccountBalance;
- (id)creditAccountBalance;
- (id)virtualAccountBalance;
- (id)financialAccountBalance;
- (id)cashAccountBalance;
- (id)savingAccountBalance;
- (id)serializationTransactionalAccountsByFirstLevelGroupId:(long long)arg1;
- (id)transactionalAccountsByFirstLevelGroupId:(long long)arg1;
- (id)accountsWithoutParentBySecondLevelGroupId:(long long)arg1;
- (id)accountsByFirstLevelGroupId:(long long)arg1;
- (id)liabillityAccountValueById:(long long)arg1;
- (id)creditAccountValueById:(long long)arg1;
- (id)assetAccountBalanceById:(long long)arg1;
- (id)accountValueById:(long long)arg1 withType:(long long)arg2;
- (id)accountBalanceById:(long long)arg1 withType:(long long)arg2;
- (id)accountAssetsAmountBetweenStart:(double)arg1 andEnd:(double)arg2 Id:(long long)arg3;
- (id)assetsAmountWithoutHiddenAccountBetweenStart:(double)arg1 andEnd:(double)arg2;
- (id)assetsAmountBetweenStart:(double)arg1 andEnd:(double)arg2;
- (id)liabilityAmountWithoutHiddenWithJCTAccountsSupported:(_Bool)arg1;
- (id)liabilityAmountWithJCTAccountsSupported:(_Bool)arg1;
- (id)liabilityAmount;
- (id)assetAmountWithoutHiddenWithJCTAccountsSupported:(_Bool)arg1;
- (id)assetAmountWithJCTAccountsSupported:(_Bool)arg1;
- (id)assetAmount;
- (id)issuingInstituteListFromPlistWithGroup:(int)arg1 isFavorate:(_Bool)arg2;
- (id)currencyCodes;
- (id)valueObjectWithoutHierarchyFromKDAccount:(id)arg1;
- (id)valueObjectFromKDAccount:(id)arg1;
- (_Bool)addTransactionWhenAccountBalanceChanged:(id)arg1 memo:(id)arg2;
- (void)changeBalancesOfAccounts:(id)arg1 memos:(id)arg2 createTimes:(id)arg3 log:(id)arg4;
- (_Bool)addTransactionWhenAccountBalanceChanged:(id)arg1 memo:(id)arg2 createTime:(double)arg3 log:(id)arg4;
- (_Bool)addTransactionWhenAccountBalanceChanged:(id)arg1 memo:(id)arg2 createTime:(double)arg3;
- (_Bool)addTransactionWhenAccountBalanceChanged:(id)arg1 newAccount:(_Bool)arg2;
- (void)changeBalancesOfAccounts:(id)arg1 createTimes:(id)arg2 log:(id)arg3;
- (_Bool)addTransactionWhenAccountBalanceChanged:(id)arg1 newAccount:(_Bool)arg2 createTime:(double)arg3 log:(id)arg4;
- (_Bool)addTransactionWhenAccountBalanceChanged:(id)arg1 newAccount:(_Bool)arg2 createTime:(double)arg3;
- (id)logOfOperationWithExpenseVoID:(long long)arg1;
- (_Bool)addTransactionWhenTransfer:(long long)arg1 fromAccount:(id)arg2 toAccount:(id)arg3 withAmount:(id)arg4 currencyCode:(id)arg5 project:(id)arg6 corporation:(id)arg7 member:(id)arg8 creditor:(id)arg9 memo:(id)arg10 relationStamp:(id)arg11 atDate:(double)arg12 photoName:(id)arg13 log:(id)arg14;
- (id)createTransactionWithTransferType:(unsigned long long)arg1 transfer:(id)arg2 relationStamp:(id)arg3;
- (id)addTransfers:(id)arg1 transferType:(unsigned long long)arg2 relationStamps:(id)arg3 log:(id)arg4;
- (_Bool)addTransactionWhenTransfer:(long long)arg1 fromAccount:(id)arg2 toAccount:(id)arg3 withAmount:(id)arg4 currencyCode:(id)arg5 project:(id)arg6 corporation:(id)arg7 member:(id)arg8 creditor:(id)arg9 memo:(id)arg10 relationStamp:(id)arg11 atDate:(double)arg12 photoName:(id)arg13;
- (_Bool)addTransactionWhenTransfer:(long long)arg1 fromAccount:(id)arg2 toAccount:(id)arg3 withAmount:(id)arg4 currencyCode:(id)arg5 project:(id)arg6 creditor:(id)arg7 memo:(id)arg8 relationStamp:(id)arg9 atDate:(double)arg10 photoName:(id)arg11;
- (_Bool)transferWithdraw:(id)arg1 fromAccount:(id)arg2 andDeposit:(id)arg3 toAccount:(id)arg4 atDate:(double)arg5 withProject:(id)arg6 corporation:(id)arg7 member:(id)arg8 creditor:(id)arg9 memo:(id)arg10 photoName:(id)arg11 log:(id)arg12;
- (id)relationStampsWithCount:(unsigned long long)arg1;
- (id)transferWithdraws:(id)arg1 withLog:(id)arg2;
- (_Bool)transferWithdraw:(id)arg1 fromAccount:(id)arg2 andDeposit:(id)arg3 toAccount:(id)arg4 atDate:(double)arg5 withProject:(id)arg6 corporation:(id)arg7 member:(id)arg8 creditor:(id)arg9 memo:(id)arg10 photoName:(id)arg11;
- (_Bool)transferWithdraw:(id)arg1 fromAccount:(id)arg2 andDeposit:(id)arg3 toAccount:(id)arg4 atDate:(double)arg5 withProject:(id)arg6 withCreditor:(id)arg7 memo:(id)arg8 photoName:(id)arg9;
- (_Bool)updateTransactionWithTransactionId:(long long)arg1 logOfOperation:(id)arg2;
- (_Bool)withdraw:(id)arg1 fromAccount:(id)arg2 andDeposit:(id)arg3 toAccount:(id)arg4 atDate:(double)arg5 withProject:(id)arg6 corporation:(id)arg7 member:(id)arg8 creditor:(id)arg9 memo:(id)arg10 photoName:(id)arg11 log:(id)arg12;
- (id)withdrawTransfers:(id)arg1 withLog:(id)arg2;
- (_Bool)withdraw:(id)arg1 fromAccount:(id)arg2 andDeposit:(id)arg3 toAccount:(id)arg4 atDate:(double)arg5 withProject:(id)arg6 corporation:(id)arg7 member:(id)arg8 creditor:(id)arg9 memo:(id)arg10 photoName:(id)arg11;
- (_Bool)withdraw:(id)arg1 fromAccount:(id)arg2 andDeposit:(id)arg3 toAccount:(id)arg4 atDate:(double)arg5 withProject:(id)arg6 withCreditor:(id)arg7 memo:(id)arg8 photoName:(id)arg9;
- (_Bool)transferAmount:(id)arg1 FromAccount:(id)arg2 toAccount:(id)arg3 atDate:(double)arg4 withProject:(id)arg5 corporation:(id)arg6 member:(id)arg7 creditor:(id)arg8 memo:(id)arg9 photoName:(id)arg10;
- (_Bool)transferAmount:(id)arg1 FromAccount:(id)arg2 toAccount:(id)arg3 atDate:(double)arg4 withProject:(id)arg5 withCreditor:(id)arg6 memo:(id)arg7 photoName:(id)arg8;
- (_Bool)transferAmount:(id)arg1 FromAccount:(id)arg2 toAccount:(id)arg3 atDate:(double)arg4 withProject:(id)arg5 memo:(id)arg6;
- (id)calculateBalanceByAccountId:(long long)arg1;
- (_Bool)setAccountValue:(id)arg1 withAccountId:(long long)arg2;
- (_Bool)setAccountValue:(id)arg1 withAccountId:(long long)arg2 updateLastUpdateTime:(_Bool)arg3;
- (_Bool)setAccountBalance:(id)arg1 withAccountId:(long long)arg2;
- (_Bool)setAccountBalance:(id)arg1 withAccountId:(long long)arg2 updateLastUpdateTime:(_Bool)arg3;
- (_Bool)setAccounts:(id)arg1 balances:(id)arg2;
- (id)accountGroupNameExceptCredit;
- (id)accountGroupNameExceptCreditAndLiability;
- (id)lastestTradeTimeByAccountId:(long long)arg1;
- (id)oldestTradeTimeByAccountId:(long long)arg1;
- (id)accountNames;
- (id)listAccountExceptCreditAndLiability;
- (_Bool)accountGroupExist:(int)arg1;
- (id)accountsWithGrouptype:(int)arg1;
- (id)transactionalAccountsWithSecondLevelAccountGroupId:(long long)arg1 hidden:(_Bool)arg2;
- (id)transactionalAccountsWithGrouptype:(int)arg1 hidden:(_Bool)arg2 includeCreditCard:(_Bool)arg3;
- (id)transactionalAccountsWithGrouptype:(int)arg1 hidden:(_Bool)arg2;
- (id)accountsWithGrouptype:(int)arg1 hidden:(_Bool)arg2;
- (id)allSerializableTransactionalAccountsWithoutHidden;
- (id)allTransactionalAccountsWithoutHidden;
- (id)visibleAccountsDictionary;
- (id)allAccountsWithoutHidden;
- (id)allAccountsInOrder;
- (id)allAccounts;
- (id)subAccountsOfAccount:(long long)arg1;
- (id)listAccountWithoutHiddenAndSubAccountsOrderByLastUpdateTimeWithJCTAccountsSupported:(_Bool)arg1;
- (id)listAccountWithoutHiddenAndSubAccountsOrderByLastUpdateTime;
- (id)listAccountWithoutHiddenAndSubAccountsWithJCTAccountsSupported:(_Bool)arg1;
- (id)listAccountWithoutHiddenAndSubAccounts;
- (id)listTransactionalAccountWithoutHiddenOrderByLastUpdateTime;
- (id)listTransactionalAccountOrderByLastUpdateTime;
- (id)listAccountWithoutSubAccountsOrderByLastUpdateTime;
- (id)listAccountWithoutSubAccounts;
- (id)listTransactionalAccountWithoutHidden;
- (id)listAccountWithoutHiddenWithJCTAccountsSupported:(_Bool)arg1;
- (id)listAccountWithoutHidden;
- (id)listTransactionalAccount;
- (id)listAccountWithJCTAccountsSupported:(_Bool)arg1;
- (id)listAccount;
- (id)accountInfoWithId:(long long)arg1;
- (id)accountWithId:(long long)arg1;
- (id)accountByUUID:(id)arg1;
- (id)accountByName:(id)arg1;
- (id)accountById:(long long)arg1 withJCTAccountsSupported:(_Bool)arg2;
- (id)accountsByIds:(id)arg1;
- (id)accountById:(long long)arg1;
- (_Bool)setAccount:(long long)arg1 withHidden:(_Bool)arg2;
- (_Bool)deleteAccount:(long long)arg1 error:(id *)arg2;
- (void)updateAccountOrders:(id)arg1;
- (_Bool)updateAccounts:(id)arg1;
- (_Bool)updateAccount:(id)arg1;
- (long long)addAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

