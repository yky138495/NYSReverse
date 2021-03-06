//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDao.h"

#import "AccountDao.h"

@class NSString;

@interface AccountDaoImpl : BaseDao <AccountDao>
{
}

- (long long)lastIdForTable:(id)arg1;
- (void)updateAccountUDID:(id)arg1;
- (id)mapOfAccountUDID;
- (_Bool)isSameKindOfAccount:(long long)arg1 withAnotherAccount:(long long)arg2;
- (_Bool)moveTransactionsFromAccount:(long long)arg1 toAccount:(long long)arg2;
- (_Bool)deleteDuplicateTransactions:(id)arg1;
- (_Bool)updateAccountBalance:(long long)arg1;
- (_Bool)deleteTransactionsByAccountId:(long long)arg1;
- (_Bool)updateRemainAccountMemo:(long long)arg1 withMergedAccount:(long long)arg2;
- (_Bool)execSql:(id)arg1;
- (_Bool)moveTransferTransFromAccount:(long long)arg1 toAccount:(long long)arg2;
- (_Bool)deleteTransferTransBetween:(long long)arg1 and:(long long)arg2;
- (_Bool)mergedAccount:(long long)arg1 withMainAccount:(long long)arg2 action:(int)arg3 duplicateTransactions:(id)arg4;
- (id)sumTransactionAmountSql;
- (id)calculateLiabillityAccountValueById:(long long)arg1;
- (id)calculateCreditAccountValueById:(long long)arg1;
- (id)calculateAssetAccountBalanceById:(long long)arg1;
- (id)currenyCodes;
- (_Bool)deleteTag:(long long)arg1:(long long)arg2;
- (_Bool)addTag:(long long)arg1:(long long)arg2;
- (id)listAccountByFinanceType:(int)arg1;
- (id)existBalanceChangeTransactionsWithAccountId:(long long)arg1;
- (_Bool)existTransactionWithAccountId:(long long)arg1;
- (id)lastestTradeTimeByAccountId:(long long)arg1;
- (id)oldestTradeTimeByAccountId:(long long)arg1;
- (_Bool)addToAccountInfoDeleteTableWithId:(long long)arg1;
- (_Bool)addToDeleteTableWithId:(long long)arg1;
- (id)accountsWithGrouptype:(int)arg1;
- (unsigned long long)countTransactionalAccountWithGroupType:(int)arg1 hidden:(_Bool)arg2;
- (id)transactionalAccountsWithSecondLevelAccountGroupId:(long long)arg1 hidden:(_Bool)arg2;
- (id)serializableTransactionalAccountsWithGrouptype:(int)arg1 hidden:(_Bool)arg2;
- (id)transactionalAccountsWithGrouptype:(int)arg1 hidden:(_Bool)arg2;
- (id)accountsWithGrouptype:(int)arg1 hidden:(_Bool)arg2;
- (id)listAccountWithBalanceAndAmount;
- (id)subAccountsOfAccount:(long long)arg1;
- (id)listTransactionalAccountWithoutHiddenAndParent;
- (id)listAccountsImportFromMyCard;
- (id)listSerializableTransactionalAccountWithoutHidden;
- (id)listTransactionalAccountWithoutHidden;
- (id)listAccountWithoutHiddenWithJCTAccountsSupported:(_Bool)arg1;
- (id)listAccountWithoutHidden;
- (id)listAccountInOrder;
- (id)listTransactionalAccountOrderByLastUpdateTime;
- (id)listTransactionalAccount;
- (id)listAccountWithoutSubAccountsOrderByLastUpdateTimeWithJCTAccountsSupported:(_Bool)arg1;
- (id)listAccountWithoutSubAccountsOrderByLastUpdateTime;
- (id)listAccountWithJCTAccountsSupported:(_Bool)arg1;
- (id)listAccount;
- (_Bool)deleteAccountById:(long long)arg1;
- (_Bool)updateLiabilityAccountAmount:(long long)arg1 withAmount:(id)arg2;
- (_Bool)updateLiabilityAccountAmount:(long long)arg1 withAmount:(id)arg2 updateLastUpdateTime:(_Bool)arg3;
- (_Bool)updateCreditAccountAmount:(long long)arg1 withAmount:(id)arg2;
- (_Bool)updateCreditAccountAmount:(long long)arg1 withAmount:(id)arg2 updateLastUpdateTime:(_Bool)arg3;
- (_Bool)updateAccountBalance:(long long)arg1 withBalance:(id)arg2;
- (_Bool)updateAccountBalance:(long long)arg1 withBalance:(id)arg2 updateLastUpdateTime:(_Bool)arg3;
- (_Bool)updateAccountBalances:(id)arg1 byAccountIds:(id)arg2;
- (_Bool)updateAccount:(long long)arg1 withHidden:(_Bool)arg2;
- (_Bool)updateAccount:(long long)arg1 lastUpdateTime:(double)arg2;
- (_Bool)updateAccountsLastUpdateTime:(double)arg1 byAccountIds:(id)arg2;
- (_Bool)updateAccount:(id)arg1;
- (id)createSQLForUpdateAccounts:(id)arg1;
- (_Bool)updateAccounts:(id)arg1;
- (_Bool)isExistAccountByName:(id)arg1;
- (id)accountByUUID:(id)arg1;
- (id)accountByName:(id)arg1;
- (id)accountById:(long long)arg1 withJCTAccountsSupported:(_Bool)arg2;
- (id)accountsByIds:(id)arg1;
- (id)accountGroupIdsInAccountIds:(id)arg1;
- (long long)accountGroupTypeByAccountId:(long long)arg1;
- (id)accountById:(long long)arg1;
- (long long)addAccount:(id)arg1;
- (id)accountInfoWithId:(long long)arg1;
- (id)accountInfos;
- (_Bool)updateAccountInfo:(id)arg1;
- (id)createSQLForUpdateAccountInfos:(id)arg1;
- (_Bool)updateAccountInfos:(id)arg1;
- (long long)addAccountInfoToDelete:(id)arg1;
- (long long)addAccountInfo:(id)arg1;
- (id)addAccountInfos:(id)arg1;
- (long long)insertAccountInfo:(id)arg1 intoTable:(id)arg2;
- (long long)insertAccount:(id)arg1 intoTable:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

