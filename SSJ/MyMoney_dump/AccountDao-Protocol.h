//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AccountInfoVo, KDAccount, NSArray, NSDate, NSDecimalNumber, NSDictionary, NSString;

@protocol AccountDao <NSObject>
- (long long)lastIdForTable:(NSString *)arg1;
- (void)updateAccountUDID:(NSDictionary *)arg1;
- (NSDictionary *)mapOfAccountUDID;
- (_Bool)mergedAccount:(long long)arg1 withMainAccount:(long long)arg2 action:(int)arg3 duplicateTransactions:(NSArray *)arg4;
- (NSDate *)lastestTradeTimeByAccountId:(long long)arg1;
- (NSDate *)oldestTradeTimeByAccountId:(long long)arg1;
- (NSArray *)accountsWithGrouptype:(int)arg1;
- (unsigned long long)countTransactionalAccountWithGroupType:(int)arg1 hidden:(_Bool)arg2;
- (NSArray *)transactionalAccountsWithSecondLevelAccountGroupId:(long long)arg1 hidden:(_Bool)arg2;
- (NSArray *)serializableTransactionalAccountsWithGrouptype:(int)arg1 hidden:(_Bool)arg2;
- (NSArray *)transactionalAccountsWithGrouptype:(int)arg1 hidden:(_Bool)arg2;
- (NSArray *)accountsWithGrouptype:(int)arg1 hidden:(_Bool)arg2;
- (NSArray *)listAccountWithBalanceAndAmount;
- (NSDecimalNumber *)calculateLiabillityAccountValueById:(long long)arg1;
- (NSDecimalNumber *)calculateCreditAccountValueById:(long long)arg1;
- (NSDecimalNumber *)calculateAssetAccountBalanceById:(long long)arg1;
- (NSArray *)currenyCodes;
- (_Bool)deleteTag:(long long)arg1:(long long)arg2;
- (_Bool)addTag:(long long)arg1:(long long)arg2;
- (NSArray *)listAccountByFinanceType:(int)arg1;
- (_Bool)addToDeleteTableWithId:(long long)arg1;
- (NSArray *)subAccountsOfAccount:(long long)arg1;
- (NSArray *)listAccountsImportFromMyCard;
- (NSArray *)listSerializableTransactionalAccountWithoutHidden;
- (NSArray *)listTransactionalAccountWithoutHiddenAndParent;
- (NSArray *)listTransactionalAccountWithoutHidden;
- (NSArray *)listAccountWithoutHiddenWithJCTAccountsSupported:(_Bool)arg1;
- (NSArray *)listAccountWithoutHidden;
- (NSArray *)listAccountInOrder;
- (NSArray *)listTransactionalAccount;
- (NSArray *)listTransactionalAccountOrderByLastUpdateTime;
- (NSArray *)listAccountWithoutSubAccountsOrderByLastUpdateTimeWithJCTAccountsSupported:(_Bool)arg1;
- (NSArray *)listAccountWithoutSubAccountsOrderByLastUpdateTime;
- (NSArray *)listAccountWithJCTAccountsSupported:(_Bool)arg1;
- (NSArray *)listAccount;
- (_Bool)deleteAccountById:(long long)arg1;
- (NSArray *)existBalanceChangeTransactionsWithAccountId:(long long)arg1;
- (_Bool)existTransactionWithAccountId:(long long)arg1;
- (_Bool)updateLiabilityAccountAmount:(long long)arg1 withAmount:(NSDecimalNumber *)arg2;
- (_Bool)updateLiabilityAccountAmount:(long long)arg1 withAmount:(NSDecimalNumber *)arg2 updateLastUpdateTime:(_Bool)arg3;
- (_Bool)updateCreditAccountAmount:(long long)arg1 withAmount:(NSDecimalNumber *)arg2;
- (_Bool)updateCreditAccountAmount:(long long)arg1 withAmount:(NSDecimalNumber *)arg2 updateLastUpdateTime:(_Bool)arg3;
- (_Bool)updateAccountBalances:(NSArray *)arg1 byAccountIds:(NSArray *)arg2;
- (_Bool)updateAccountBalance:(long long)arg1 withBalance:(NSDecimalNumber *)arg2;
- (_Bool)updateAccountBalance:(long long)arg1 withBalance:(NSDecimalNumber *)arg2 updateLastUpdateTime:(_Bool)arg3;
- (_Bool)updateAccount:(long long)arg1 withHidden:(_Bool)arg2;
- (_Bool)updateAccountsLastUpdateTime:(double)arg1 byAccountIds:(NSArray *)arg2;
- (_Bool)updateAccount:(long long)arg1 lastUpdateTime:(double)arg2;
- (_Bool)updateAccounts:(NSArray *)arg1;
- (_Bool)updateAccount:(KDAccount *)arg1;
- (_Bool)isExistAccountByName:(NSString *)arg1;
- (KDAccount *)accountByUUID:(NSString *)arg1;
- (KDAccount *)accountByName:(NSString *)arg1;
- (NSDictionary *)accountGroupIdsInAccountIds:(NSArray *)arg1;
- (KDAccount *)accountById:(long long)arg1 withJCTAccountsSupported:(_Bool)arg2;
- (NSDictionary *)accountsByIds:(NSArray *)arg1;
- (KDAccount *)accountById:(long long)arg1;
- (long long)accountGroupTypeByAccountId:(long long)arg1;
- (NSArray *)accountInfos;
- (AccountInfoVo *)accountInfoWithId:(long long)arg1;
- (_Bool)updateAccountInfos:(NSArray *)arg1;
- (_Bool)updateAccountInfo:(AccountInfoVo *)arg1;
- (NSArray *)addAccountInfos:(NSArray *)arg1;
- (long long)addAccountInfo:(AccountInfoVo *)arg1;
- (long long)addAccount:(KDAccount *)arg1;
@end
