//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AccountBookService.h"

@class NSString;

@interface AccountBookServiceImpl : NSObject <AccountBookService>
{
}

- (id)currentFinanceMarketUserID;
- (void)setCurrentFinanceMarketUserID:(id)arg1;
- (unsigned long long)validateName:(id)arg1;
- (id)renameExistAccountBookNameWithName:(id)arg1 isRemoteAccountBook:(_Bool)arg2;
- (_Bool)isRemoteByKey:(id)arg1;
- (void)uploadShareImage:(id)arg1 withAccountBookId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)dictionaryFromAccountBookVo:(id)arg1;
- (id)accountBookVoFromDict:(id)arg1;
- (id)firstRemoteAccountBookVo;
- (id)firstLocalAccountBookVo;
- (id)remoteDefaultAccountBookVo;
- (id)localDefaultAccountBookVoIfShowed;
- (id)remoteDefaultAccountBookVoIfExist;
- (id)localDefaultAccountBookVo;
- (_Bool)removeDirectory:(id)arg1;
- (id)errorWithMessage:(id)arg1;
- (void)writeAccountBookEntry:(id)arg1 forKey:(id)arg2 toExistFile:(id)arg3;
- (void)writeRemoteAccountBookEntry:(id)arg1 forKey:(id)arg2;
- (void)writeLocalAccountBookEntry:(id)arg1 forKey:(id)arg2 onPath:(id)arg3;
- (void)writeLocalAccountBookEntry:(id)arg1 forKey:(id)arg2;
- (id)removePrefixAndSuffixSpaceString:(id)arg1;
- (_Bool)connectDatabaseDataSuite:(id)arg1;
- (id)readSyncAccountInDatabaseFromDataSuite:(id)arg1;
- (void)addAccountBookVo:(id)arg1 toConfigFile:(id)arg2;
- (void)createConfigToFile:(id)arg1 withAccountBookVo:(id)arg2;
- (id)createAccountBookConfigForAccountBook:(id)arg1 inDataSuite:(id)arg2;
- (id)createAccountBookConfigForDataSuite:(id)arg1 withName:(id)arg2;
- (id)homeAccountScrollHeaderIndexForCurrentAccountBook;
- (_Bool)updateHomeAccountScrollHeaderIndexForCurrentAccountBook:(long long)arg1;
- (_Bool)updateLocalAccountBook:(id)arg1;
- (_Bool)updateNeedAddMemberWithSharedAccountBook:(id)arg1;
- (_Bool)updateRemoteAccountBook:(id)arg1 withEverSharedToSubsriber:(_Bool)arg2;
- (_Bool)updateRemoteAccountBook:(id)arg1 withHasParticipant:(_Bool)arg2;
- (_Bool)replaceConfigFileForRemoteAccountBook:(id)arg1;
- (_Bool)updateRemoteAccountBook:(id)arg1;
- (id)upgradeLocalAccountBook:(id)arg1 toAccount:(id)arg2 syncId:(long long)arg3 occuredError:(id *)arg4;
- (_Bool)mergeAndDeleteLocalAccountBook:(id)arg1 occurredError:(id *)arg2;
- (id)mergeDefaultAccountBookFromLocal:(id)arg1 toAccount:(id)arg2 occurredError:(id *)arg3;
- (id)createAccountBookConfigFilesIfNeeded;
- (void)fixMutableConfigVersion1:(id)arg1 atPath:(id)arg2;
- (void)upgradeAccountBookConfigFiles;
- (id)moveLocalDefaultAccountBookTo:(id)arg1;
- (id)localMutableConfigDict;
- (id)localAccountBookDictionary;
- (id)remoteMutableConfigDict;
- (id)remoteAccountBookDictionary;
- (_Bool)setCurrentAccountBook:(id)arg1 occurredError:(id *)arg2;
- (void)signOut;
- (_Bool)isSignedIn;
- (void)setBindAccountListForCurrentUser:(id)arg1;
- (void)setPasswordBindForCurrentUser:(_Bool)arg1;
- (id)bindAccountListForCurrentUser;
- (_Bool)isPasswordBindForCurrentUser;
- (id)lastTimeUserEnterPasswordWhenDeletingAccountBook;
- (void)setTimeUserEnterPasswordWhenDeletingAccountBook;
- (_Bool)needUserEnterPasswordWhenDeletingAccountBook;
- (void)setUserDoNotNeedEnterPasswordWhenDeletingAccountBook:(_Bool)arg1;
- (_Bool)isValidPassword:(id)arg1;
- (void)removeLastSignInEmailOrMobile;
- (id)lastSignInEmailOrMobile;
- (void)setLastSignInEmailOrMobile:(id)arg1;
- (id)currentSignInPasswordWithPermanentStorageIfNoPList;
- (id)currentSignInPassword;
- (id)currentSignInAccountWithPermanentStorageIfNoPList;
- (id)currentSignInMobileOrEmail;
- (id)currentSignInMobileEmailOrAccount;
- (id)currentSignInAccount;
- (id)currentSignInMobile;
- (id)currentSignInEmail;
- (unsigned long long)accountSignInType;
- (id)currentSignInAccountId;
- (void)setCurrentSignInAccountId:(id)arg1;
- (void)setCurrentSignInMobile:(id)arg1;
- (void)setCurrentSignInEmail:(id)arg1;
- (void)setAccountSignInType:(unsigned long long)arg1;
- (void)signInAccount:(id)arg1 password:(id)arg2 email:(id)arg3 mobile:(id)arg4;
- (void)signInAccount:(id)arg1 password:(id)arg2;
- (void)signInAccount:(id)arg1;
- (void)setUserDefaultsCurrentAccountVo:(id)arg1;
- (id)localAccountBookWithKey:(id)arg1;
- (id)remoteAccountBookWithKey:(id)arg1;
- (id)findBookWithSyncId:(id)arg1 InDataSuite:(id)arg2;
- (id)accountBookWithKey:(id)arg1 inAccount:(id)arg2;
- (id)defaultAccountBookWithAccountName:(id)arg1;
- (id)defaultAccountBookInDataSuite:(id)arg1;
- (id)homePathForAccount:(id)arg1;
- (id)currentAccountBook;
- (id)currentAccountBookKey;
- (id)pathForCurrentAccountBook;
- (_Bool)changeDatabaseInAccountBookName:(id)arg1 cover:(unsigned long long)arg2;
- (_Bool)updateAccountBook:(id)arg1 newShareCode:(id)arg2;
- (_Bool)updateAccountBook:(id)arg1 coverName:(id)arg2;
- (_Bool)removeAccountBookCoverName:(id)arg1;
- (_Bool)changeCurrentAccountBookName:(id)arg1 oldCoverType:(unsigned long long)arg2;
- (_Bool)changeCurrentAccountBookName:(id)arg1 cover:(unsigned long long)arg2;
- (_Bool)renameAccountBook:(id)arg1 toName:(id)arg2 occurredError:(id *)arg3;
- (void)deleteRemoteAccountBookEntryWithKey:(id)arg1;
- (void)deleteLocalAccountBookEntry:(id)arg1;
- (_Bool)deleteLocalDefaultAccountBookOccurError:(id *)arg1;
- (_Bool)deleteRemoteDefaultAccountBookOccurError:(id *)arg1;
- (_Bool)deleteAccountBook:(id)arg1 occurredError:(id *)arg2;
- (_Bool)deleteRemoteAccountBook:(id)arg1 occurredError:(id *)arg2;
- (_Bool)validateQuitShareAccountBook:(id)arg1 occurredError:(id *)arg2;
- (_Bool)validateDeleteRemoteAccountBook:(id)arg1 occurredError:(id *)arg2;
- (_Bool)addAccountBook:(id)arg1 isRemote:(_Bool)arg2 occurredError:(id *)arg3 atPath:(id)arg4 dbCallback:(CDUnknownBlockType)arg5;
- (_Bool)addAccountBook:(id)arg1 isRemote:(_Bool)arg2 occurredError:(id *)arg3 atPath:(id)arg4;
- (_Bool)copyRemoteAccountBookResourcesFrom:(id)arg1 to:(id)arg2;
- (_Bool)addRemoteAccountBook:(id)arg1 toDataSuite:(id)arg2 occurredError:(id *)arg3;
- (_Bool)addRemoteAccountBook:(id)arg1 occurredError:(id *)arg2;
- (_Bool)isExistAccountBookName:(id)arg1 isRemoteAccountBook:(_Bool)arg2;
- (_Bool)isExistAccountBookName:(id)arg1;
- (_Bool)isExistRemoteAccountBookName:(id)arg1;
- (_Bool)isExistLocalAccountBookName:(id)arg1;
- (_Bool)addLocalAccountBook:(id)arg1 occurredError:(id *)arg2 dbCallback:(CDUnknownBlockType)arg3;
- (_Bool)addLocalAccountBook:(id)arg1 occurredError:(id *)arg2;
- (_Bool)hasOnlyOneRemoteAccountBook;
- (_Bool)doesLocalDefaultBookIsTheOnlyOne;
- (id)sortedLocalAccountBooksSelectedDefault:(id *)arg1;
- (id)allLocalAccountBooksIncludeDefaultAccountBook:(_Bool)arg1;
- (id)allLocalAccountBooks;
- (void)setLocalDefaultAccountBookHidden:(_Bool)arg1;
- (_Bool)shouldHiddenLocalDefaultAccountBook;
- (id)excludeRemoteAccountBooksFromBooks:(id)arg1;
- (_Bool)findAccountBook:(id)arg1 index:(unsigned long long *)arg2 inArray:(id)arg3;
- (id)nextAccountBookAfter:(id)arg1 in:(id)arg2;
- (id)nextAccountBookIfNeedToDeleteAccountBook:(id)arg1;
- (id)anyAccountBook;
- (id)allRemoteAccountBooksIcludeJoinedShareAccountBook:(_Bool)arg1;
- (id)allRemoteAccountBooks;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

