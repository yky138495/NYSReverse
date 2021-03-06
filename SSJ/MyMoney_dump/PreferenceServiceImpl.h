//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PreferenceService.h"

@class NSDictionary, NSString;

@interface PreferenceServiceImpl : NSObject <PreferenceService>
{
    NSDictionary *_payoutPreferenceDic;
    NSDictionary *_incomePreferenceDic;
}

@property(retain, nonatomic) NSDictionary *incomePreferenceDic; // @synthesize incomePreferenceDic=_incomePreferenceDic;
@property(retain, nonatomic) NSDictionary *payoutPreferenceDic; // @synthesize payoutPreferenceDic=_payoutPreferenceDic;
- (void).cxx_destruct;
- (_Bool)setHasMovedBudgetDataFromOldVersion:(_Bool)arg1;
- (_Bool)hasMovedBudgetDataFromOldVersion;
- (_Bool)setBudgetRetentionNum:(id)arg1;
- (id)getBudgetRetentionNum;
- (_Bool)removeStringPreferenceForKey:(id)arg1;
- (_Bool)updateStringPreferenceValueOnly:(id)arg1 ifExistedKey:(id)arg2;
- (_Bool)setStringPreferenceValue:(id)arg1 forKey:(id)arg2;
- (id)getStringPreferenceForKey:(id)arg1;
- (_Bool)setDefaultOpenPage:(id)arg1;
- (id)getDefaultOpenPage;
- (_Bool)removeAccountBookCover;
- (_Bool)setAccountBookCover:(id)arg1;
- (id)accountBookCover;
- (_Bool)removeAccountBookThumbnail;
- (_Bool)updateAccountBookThumbnailWithoutUpdatingModifyTime:(id)arg1;
- (_Bool)setAccountBookThumbnail:(id)arg1;
- (id)accountBookThumbnail;
- (_Bool)updateAccountBookCoverNameWithoutUpdatingModifyTime:(id)arg1;
- (_Bool)setAccountBookCoverName:(id)arg1;
- (id)accountBookCoverName;
- (_Bool)setOrderedTransactionTypes:(id)arg1;
- (id)getOrderedTransactionTypes;
- (_Bool)setHasAddDefaultTemplate:(_Bool)arg1;
- (_Bool)hasAddDefaultTemplate;
- (_Bool)setDefaultForIncome:(id)arg1;
- (id)getDefaultForIncome;
- (_Bool)setDefaultForPayout:(id)arg1;
- (id)getDefaultForPayout;
- (_Bool)setReportChartSettingConfig:(id)arg1;
- (id)getReportChartSettingConfig;
- (_Bool)setCustomToolbarChoiceList:(id)arg1;
- (id)getCustomToolbarChoiceList;
- (_Bool)setHomeBottomBoardConfig:(id)arg1;
- (id)getHomeBottomBoardConfig;
- (_Bool)setHasAddAllTimeTransactionListTemplate:(_Bool)arg1;
- (_Bool)getHasAddAllTimeTransactionListTemplate;
- (_Bool)setHasAddDefaultTransactionListTemplate:(_Bool)arg1;
- (_Bool)getHasAddDefaultTransactionListTemplate;
- (_Bool)updateMainPageStyleConfigWithoutUpdatingModifyTime:(id)arg1;
- (_Bool)setMainPageStyleConfig:(id)arg1;
- (id)getMainPageStyleConfig;
- (id)convertSuperTzTemplateFidFromPositiveToNegativeInDictionary:(id)arg1;
- (void)convertSuperTzTemplateFidFromPositiveToNegativeInHomeBottomBoardConfig;
- (id)convertToStringWithJsonObject:(id)arg1;
- (id)jsonDicWithJsonString:(id)arg1;
- (id)loadAllIncomeConfigFromProfileTable;
- (id)loadAllPayoutConfigFromProfileTable;
- (id)loadIncomePreferences;
- (id)loadPayoutPreferences;
- (void)setPreferenceDictionary:(id)arg1 withValue:(long long)arg2 forKey:(id)arg3;
- (_Bool)updateIncomePreferenceValue:(id)arg1 forKey:(id)arg2;
- (_Bool)updatePayoutPreferenceValue:(id)arg1 forKey:(id)arg2;
- (id)convertPreferencesFromPositiveToNegative:(id)arg1;
- (id)defaultCorporationForKey:(id)arg1;
- (id)defaultMemberForKey:(id)arg1;
- (id)defaultProjectForKey:(id)arg1;
- (id)defaultAccountWithoutHiddenForKey:(id)arg1;
- (void)convertAddExpensePreferencesForSharedAccountBook;
- (id)defaultIncomeCorporation;
- (id)defaultPayoutCorporation;
- (id)defaultIncomeMember;
- (id)defaultPayoutMember;
- (id)defaultIncomeProject;
- (id)defaultPayoutProject;
- (id)defaultIncomeAccountWithoutHidden;
- (id)defaultPayoutAccountWithoutHidden;
- (id)defaultIncomeCategory;
- (id)defaultPayoutCategory;
- (id)subCategoryByCategory:(id)arg1 withDefaultCategoryKey:(id)arg2;
- (_Bool)updateIncomeConfigWithCategoryId:(long long)arg1 accountId:(long long)arg2 memberId:(long long)arg3 corporationId:(long long)arg4 projectId:(long long)arg5;
- (_Bool)updatePayoutConfigWithCategoryId:(long long)arg1 accountId:(long long)arg2 memberId:(long long)arg3 corporationId:(long long)arg4 projectId:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

