//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDao.h"

#import "MaintainDao.h"

@interface MaintainDaoImpl : BaseDao <MaintainDao>
{
    _Bool _tryFix;
    unsigned long long _accountBookTemplate;
}

- (_Bool)emptyProfileSyncLabelAndSyncOffsetTime;
- (_Bool)checkDBFileIsBroken;
- (_Bool)hasPhotoNeedUpload;
- (id)timestampForPullDataFromServer;
- (_Bool)deletePullDataFromServerRequestTimestamp;
- (_Bool)createPullDataFromServerTimestamp;
- (_Bool)onlyAddTransactionsSineDate:(id)arg1;
- (_Bool)hasChangedDataAfterTime:(id)arg1;
- (_Bool)setEmptyBasicDataFlag:(_Bool)arg1;
- (_Bool)isNeedDeleteBasicTablesData;
- (_Bool)hasSynchronizedBefore;
- (_Bool)hasDataInTransactionTable;
- (_Bool)setLocalization;
- (_Bool)deleteDatabaseDefaultData;
- (_Bool)emptyDatabaseDefaultData:(id *)arg1;
- (_Bool)vacuumDatabase;
- (void)calculateAccountBalanceInVersion5;
- (id)removeEmoji:(id)arg1;
- (id)csvRows;
- (id)displayNameFromTransactionType:(long long)arg1;
- (_Bool)upgradeDatabaseFromVersion:(long long)arg1;
- (_Bool)forceFullSynchronizationNextTime;
- (_Bool)addLocalServerIdMapWithLocalID:(long long)arg1 serverID:(long long)arg2 tableName:(id)arg3;
- (_Bool)insertSystemMessage:(id)arg1;
- (_Bool)updateDatabaseSchemaVersion:(int)arg1;
- (_Bool)increaseDatabaseSchemaVersion;
- (_Bool)execBatchSql:(id)arg1;
- (_Bool)execSql:(id)arg1;
- (id)agentVersion;
- (_Bool)setAgentVersion;
- (_Bool)updateDatabaseVersion:(long long)arg1 forTemplate:(unsigned long long)arg2;
- (_Bool)setAccountBookTemplate:(unsigned long long)arg1;
- (unsigned long long)accountBookTemplate;
- (id)platform;
- (_Bool)updateDatabaseVersion:(long long)arg1;
- (long long)databaseVersion;
- (long long)requiredDatabaseVersion;
- (_Bool)updateAccountType:(long long)arg1;
- (void)cleanDd;
- (void)deleteSubcategoryById:(long long)arg1;
@property(readonly) _Bool tryFix;
- (_Bool)addColumnToT_deleted_account;
- (_Bool)addColumnToT_account;
- (_Bool)createT_import_history;
- (_Bool)upgradeDatabaseToVersion31;
- (_Bool)upgradeDatabaseToVersion14;
- (_Bool)upgradeDatabaseToVersion61;
- (_Bool)upgradeDatabaseToVersion50;
- (id)findAllCategoryName65:(id)arg1;
- (id)checkBudgetEventData65:(id)arg1;
- (void)addBudgetEvents65:(id)arg1;
- (void)addRecurrenceRules65:(id)arg1;
- (void)createBudgetRetentionPreference65;
- (void)moveDataFromOldBudgetItemTable65;
- (_Bool)cleanBudgetTableAndRecurrenceRuleTable;
- (_Bool)needToFixBudgetTabel;
- (_Bool)fixWrongDataOfBudget;
- (_Bool)upgradeDatabaseToVersion65;
- (_Bool)createTableForPermission;
- (_Bool)upgradeDatabaseToVersion62;
- (_Bool)setNeedToFixTransactionPhotoFlag;
- (_Bool)fixUserRecord;
- (_Bool)addClientIdColumns;
- (_Bool)insertPropertyIdentifer;
- (_Bool)updateDefaultIncomeSetting;
- (_Bool)upgradeDatabaseToVersion30;
- (_Bool)setAccountGroupFixedOrders;
- (_Bool)initializeOrders;
- (_Bool)addOrderedColumnsToDeletedTable;
- (_Bool)addOrderedColumns;
- (_Bool)addDatabaseSchemaColumn;
- (_Bool)upgradeDatabaseToVersion13;
- (id)findAllCategoryName64:(id)arg1;
- (id)checkBudgetEventData64:(id)arg1;
- (void)addBudgetEvents64:(id)arg1;
- (void)addRecurrenceRules64:(id)arg1;
- (void)createBudgetRetentionPreference64;
- (void)moveDataFromOldBudgetItemTable64;
- (_Bool)createTableForBudget;
- (_Bool)upgradeDatabaseToVersion64;
- (_Bool)upgradeDatabaseToVersion60;
- (_Bool)upgradeDatabaseToVersion4;
- (_Bool)encryptSyncPassword;
- (_Bool)upgradeDatabaseToVersion12;
- (long long)addProjectWithName45:(id)arg1 withMaxOrdered:(_Bool)arg2;
- (_Bool)projectIsExistWithName45:(id)arg1;
- (_Bool)upgradeDatabaseToVersion45;
- (void)addBalanceChangedAmount:(id)arg1 withType:(int)arg2 forAccount:(id)arg3;
- (void)fixAccounts:(id)arg1 oldAccountDict:(id)arg2 isAddBalanceChanged:(_Bool)arg3;
- (_Bool)hasSynchronizedBefore21;
- (_Bool)upgradeDatabaseToVersion21;
- (_Bool)addTypeColumnInTable_t_transaction_projectcategory_map;
- (void)addRecentCorporationsAndProjects;
- (void)addRecentProjects;
- (void)addRecentCorporations;
- (_Bool)insertIntoRecentTableName:(const char *)arg1 type:(int)arg2 order:(int)arg3;
- (_Bool)create_T_lolcal_recent_Table;
- (_Bool)addStatusColumnInTable:(id)arg1;
- (_Bool)updateMessageCenterTableScheme;
- (_Bool)addDefaultIncomeAccountAndIncomeProjectColumn;
- (_Bool)upgradeDatabaseToVersion25;
- (_Bool)upgradeDatabaseToVersion63;
- (_Bool)upgradeDatabaseToVersion18;
- (_Bool)dropFundStockInfoTables;
- (_Bool)upgradeDatabaseToVersion56;
- (_Bool)emptyProfileSyncLabel;
- (_Bool)updateTransactionCreatedTimeWithIllegalValue;
- (_Bool)upgradeDatabaseToVersion43;
- (_Bool)upgradeDatabaseToVersion42;
- (_Bool)recreateTradeItemView;
- (_Bool)upgradeDatabaseToVersion10;
- (_Bool)addColumnWithName:(id)arg1 toTable:(id)arg2;
- (_Bool)addColumnsToT_Message;
- (_Bool)upgradeDatabaseToVersion28;
- (_Bool)createTable;
- (_Bool)upgradeDatabaseToVersion57;
- (_Bool)upgradeDatabaseToVersion22;
- (_Bool)upgradeTemplateOrderColumn;
- (id)templateOidArr;
- (_Bool)addColumnInTable:(id)arg1;
- (_Bool)upgradeDatabaseToVersion51;
- (void)insertSQLs:(id)arg1 intoArray:(id)arg2;
- (_Bool)createAccountBookTables;
- (_Bool)createTemplateForTravel;
- (_Bool)createTemplateForMarry;
- (_Bool)createTemplateForDecorate;
- (_Bool)createTemplateForBaby;
- (_Bool)createTemplateForAuto;
- (_Bool)createAccountBookColumns;
- (_Bool)createAccountBookTemplateColumn;
- (_Bool)upgradeDatabaseToVersion39;
- (_Bool)addColumnToProfile;
- (_Bool)upgradeDatabaseToVersion32;
- (_Bool)upgradeDatabaseForSyncVersion64;
- (_Bool)upgradeDatabaseForSyncVersion61;
- (id)defaultCurrencyCode48;
- (long long)newOrderedWithGroupID46:(long long)arg1;
- (_Bool)addAccountWithName46:(id)arg1 accountGroupId:(long long)arg2;
- (_Bool)isExistAccountByName46:(id)arg1;
- (_Bool)upgradeDatabaseToVersion48;
- (long long)insertCategory35:(id)arg1 atParent:(long long)arg2 intoTable:(id)arg3;
- (long long)addCategoryAt35:(long long)arg1 withName:(id)arg2 type:(long long)arg3 iconName:(id)arg4;
- (_Bool)categoryIsExist35:(id)arg1;
- (id)extractCategoryFromStatement35:(struct sqlite3_stmt *)arg1;
- (id)kdCategoryWithName35:(id)arg1;
- (id)categoryWithName35:(id)arg1;
- (_Bool)isExistedCategoryName35:(id)arg1;
- (_Bool)upgradeDatabaseToVersion35;
- (double)benchmark;
- (void)calculateAccountBalanceInVersion9;
- (long long)deleteRowsFromTable:(id)arg1 whereColumn:(id)arg2 equalTo:(long long)arg3;
- (long long)addRedundantTradeItemWithCurrencyType:(id)arg1 currencyValue:(id)arg2 name:(id)arg3 type:(int)arg4 categoryId:(long long)arg5 transactionId:(long long)arg6 lastUpdateTime:(double)arg7 toTable:(id)arg8;
- (_Bool)addTradeItemsToDeletedTableByTransactionId:(long long)arg1;
- (void)transferRedundantTransactionToDeletedTableById:(long long)arg1;
- (_Bool)deleteRedundantTransactionById:(long long)arg1;
- (_Bool)hasOnlyTransactionByRelation:(id)arg1;
- (id)relationByID:(long long)arg1;
- (_Bool)hasRedundantBalanceChangeTransactionByid:(long long)arg1;
- (_Bool)deleteRedundantBalanceChangeTransactions;
- (_Bool)deleteRedundantBorrowTransactions;
- (_Bool)createGroupTypeField;
- (_Bool)createLiabilityAndCreditAmountFields;
- (_Bool)upgradeDatabaseToVersion9;
- (_Bool)deleteBakTables;
- (_Bool)fixCategoryPathAndTypeColumns;
- (_Bool)upgradeDatabaseToVersion23;
- (_Bool)createJctAccountGroup;
- (_Bool)createJctTables;
- (_Bool)upgradeDatabaseToVersion38;
- (_Bool)upgradeDatabaseToVersion16;
- (_Bool)addColumnToDeleteTables;
- (_Bool)messageCenterAddTable;
- (_Bool)createTMessageTable;
- (_Bool)deleteRedundancyTransactions;
- (id)allTransferRedundancyTransaction;
- (_Bool)deleteTransactionById:(long long)arg1;
- (_Bool)deleteProjectsWithTransactionId:(long long)arg1;
- (void)transferTransactionToDeletedTableById:(long long)arg1;
- (id)transactionById:(long long)arg1;
- (id)transactionFromStatement:(struct sqlite3_stmt *)arg1;
- (long long)insertTransactionToDeleteTable:(id)arg1;
- (id)LogOfDelete;
- (_Bool)lendCenterAddColumn;
- (_Bool)addTypeColumnInTable:(id)arg1;
- (_Bool)addDefaultAccountIfNeed;
- (_Bool)addAccountWithName24:(id)arg1 accountGroupId:(long long)arg2;
- (id)defaultCurrencyCode24;
- (long long)newOrderedWithGroupID:(long long)arg1;
- (long long)nextIdForTable:(id)arg1;
- (_Bool)isExistAccountByName:(id)arg1;
- (_Bool)insertMessage:(id)arg1;
- (_Bool)upgradeDatabaseToVersion24;
- (_Bool)upgradeSyncProtocolVersionFrom6_0To6_1;
- (_Bool)upgradeDatabaseToVersion47;
- (_Bool)increaseProjectOrder;
- (long long)addProjectWithName:(id)arg1 withMaxOrdered:(_Bool)arg2;
- (_Bool)projectIsExistWithName:(id)arg1;
- (_Bool)hasExistProject;
- (_Bool)upgradeDatabaseToVersion34;
- (_Bool)updateAccount:(id)arg1;
- (id)extractAccountGroupStatement:(struct sqlite3_stmt *)arg1;
- (id)accountGroupById:(long long)arg1;
- (id)accountById:(long long)arg1;
- (id)accountsImportByMycard;
- (id)nameWithoutSpace:(id)arg1;
- (void)removeSpcaceInAccountName;
- (_Bool)upgradeDatabaseToVersion55;
- (_Bool)upgradeDatabaseToVersion15;
- (_Bool)fixDuplicateProject;
- (_Bool)deleteProjects:(id)arg1;
- (_Bool)updateTransaction_Projectcategory_MapWithPOID:(long long)arg1 name:(const char *)arg2;
- (_Bool)deleteRedundancyRecentUsedData;
- (_Bool)modifyDefaultTransaction_projectcategory_mapType;
- (_Bool)updateSyncAccelerationLastUpdateTime;
- (_Bool)addLastUpdateTimeColumnToProperty;
- (_Bool)upgradeDatabaseToVersion27;
- (void)updateBalanceAndAmountOfCreditValueByAccountId:(long long)arg1;
- (_Bool)insertLendingRecordFromTransferInRecordWithRelation:(id)arg1;
- (int)numberOfRecordsWithRelation19:(id)arg1;
- (_Bool)upgradeDatabaseToVersion19;
- (_Bool)addCreditorWithName:(id)arg1;
- (_Bool)isExistCreditorByName:(id)arg1;
- (id)defaultCurrencyCode;
- (long long)newOrderedWithGroupID40:(long long)arg1;
- (_Bool)addAccountWithName:(id)arg1 accountGroupId:(long long)arg2;
- (_Bool)isExistAccountByName40:(id)arg1;
- (_Bool)upgradeDatabaseToVersion40;
- (_Bool)isExistMemberWithName:(id)arg1;
- (_Bool)insertMemberWithName:(id)arg1 order:(int)arg2;
- (_Bool)addDefaultMemberColumnsOnProfileTable;
- (_Bool)addMemberColumnOnTable:(id)arg1;
- (_Bool)upgradeDatabaseToVersion26;
- (_Bool)upgradeDatabaseToVersion44;
- (_Bool)deleteRedundantCorporations;
- (_Bool)deleteRedundantCategories;
- (_Bool)deleteRedundantTradeItems;
- (_Bool)deleteRedundantTransactions;
- (_Bool)deleteRedundantRecordWithTable:(id)arg1 primaryField:(id)arg2;
- (void)calculateAccountBalanceInVersion11;
- (id)generateSqlStringFromTable:(id)arg1 field:(id)arg2 ownerTable:(id)arg3;
- (id)changeLocalIdNegativeSqlString:(id)arg1 field:(id)arg2;
- (_Bool)upgradeDatabaseToVersion11;
- (_Bool)updateDefaultPayoutCategoryId:(long long)arg1;
- (long long)defaultPayoutCateogroyId;
- (_Bool)updateDefaultIncomeCategoryId:(long long)arg1;
- (long long)defaultIncomeCateogoryId;
- (_Bool)updateTemplatesWithNewCategoryId:(long long)arg1 removedCategoryWithId:(long long)arg2;
- (_Bool)deleteCategory:(long long)arg1;
- (_Bool)updateTransactionCategoryWithOldId:(long long)arg1 newCategoryId:(long long)arg2;
- (id)categoryById:(long long)arg1;
- (_Bool)addToDeleteTableWithCategory:(id)arg1;
- (id)extractCategoryFromStatement:(struct sqlite3_stmt *)arg1;
- (id)listSubCategory:(long long)arg1;
- (long long)insertCategory:(id)arg1 atParent:(long long)arg2 intoTable:(id)arg3;
- (id)categoryArrWithDepth3;
- (_Bool)fixCategory;
- (_Bool)upgradeDatabaseToVersion29;
- (_Bool)convertSomeTablesClientIDToRight;
- (_Bool)upgradeDatabaseToVersion58;
- (_Bool)deleteLendTransactionWithRelation:(id)arg1;
- (int)numberOfRecordsWithRelation:(id)arg1;
- (_Bool)upgradeDatabaseToVersion20;
- (_Bool)addColumnToT_import_history;
- (_Bool)createT_import_source;
- (_Bool)upgradeDatabaseToVersion52;
- (_Bool)addColumns;
- (_Bool)upgradeDatabaseToVersion59;
- (_Bool)setAllTransactionsNeedUploadPhoto;
- (_Bool)upgradeDatabaseToVersion33;
- (_Bool)upgradeDatabaseToVersion49;
- (_Bool)createT_account_info;
- (_Bool)upgradeDatabaseToVersion54;
- (_Bool)upgradeDatabaseToVersion17;
- (long long)addCategory:(id)arg1 at:(long long)arg2;
- (long long)addAccountGroup:(id)arg1 atParent:(long long)arg2;
- (id)accountNameById:(long long)arg1;
- (id)listAccountName;
- (_Bool)updateAccountGroup:(id)arg1;
- (_Bool)upgradeDatabaseToVersion3;
- (_Bool)addSourceForPreviousMyCardHistory;
- (_Bool)addColumnT_Import_history;
- (_Bool)upgradeDatabaseToVersion41;
- (id)defaultCurrencyCode46;
- (void)insertSQLs46:(id)arg1 intoArray:(id)arg2;
- (_Bool)createTemplateForKindness;
- (_Bool)createTemplateForCatering;
- (_Bool)createTemplateForBusinessTrip;
- (_Bool)createTemplateForBusinese;
- (_Bool)upgradeDatabaseToVersion46;
- (_Bool)proccessDebtWithQueryTransaction:(struct sqlite3_stmt *)arg1 insertTransaction:(struct sqlite3_stmt *)arg2 updateTransaction:(struct sqlite3_stmt *)arg3 insertSubject:(struct sqlite3_stmt *)arg4 insertProject:(struct sqlite3_stmt *)arg5;
- (_Bool)produceDebtRecordIfDebtAccountHasExpense;
- (_Bool)createIndexes;
- (void)calculateAccountBalanceInVersion8;
- (_Bool)upgradeDatabaseToVersion8;
- (id)defaultCurrencyCode52;
- (long long)newOrderedWithGroupID52:(long long)arg1;
- (_Bool)addAccountWithName52:(id)arg1 accountGroupId:(long long)arg2;
- (_Bool)isExistAccountByName52:(id)arg1;
- (_Bool)upgradeDatabaseToVersion53;
- (_Bool)fixCategoryIconNameWithId:(long long)arg1 name:(id)arg2 path:(id)arg3;
- (_Bool)fixCategoryIconName36:(id)arg1;
- (_Bool)deleteMalformedPayoutRootCategory:(id)arg1;
- (_Bool)fixPayoutCategoryPathWithCategoryID:(long long)arg1 path:(id)arg2;
- (id)fixedPathWithPath:(id)arg1;
- (_Bool)fixPayoutCategoryPath;
- (_Bool)fixFirstLevelCategoryParentPOID;
- (_Bool)isExistedPayoutRootCategoryWithName:(id)arg1;
- (_Bool)upgradeDatabaseToVersion36;
- (_Bool)upgradeDatabaseToVersion37;

@end
