//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AccountBookImportService.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface AccountBookImportServiceImpl : NSObject <AccountBookImportService>
{
    long long _importedTime;
    NSMutableDictionary *_listOfSecondLevelPayoutCategoryDict;
    NSMutableDictionary *_listOfSecondLevelIncomeCategoryDict;
    NSMutableDictionary *_listOfFirstLevelPayoutCategoryDict;
    NSMutableDictionary *_listOfFirstLevelIncomeCategoryDict;
    NSMutableDictionary *_listOfProjectDict;
    NSMutableDictionary *_listOfMemberDict;
    NSMutableDictionary *_listOfCorporationDict;
    NSMutableDictionary *_listOfModifiedAccountDict;
    NSMutableArray *_createdCategoriesNameOnBase;
}

@property(retain, nonatomic) NSMutableArray *createdCategoriesNameOnBase; // @synthesize createdCategoriesNameOnBase=_createdCategoriesNameOnBase;
@property(retain, nonatomic) NSMutableDictionary *listOfModifiedAccountDict; // @synthesize listOfModifiedAccountDict=_listOfModifiedAccountDict;
@property(retain, nonatomic) NSMutableDictionary *listOfCorporationDict; // @synthesize listOfCorporationDict=_listOfCorporationDict;
@property(retain, nonatomic) NSMutableDictionary *listOfMemberDict; // @synthesize listOfMemberDict=_listOfMemberDict;
@property(retain, nonatomic) NSMutableDictionary *listOfProjectDict; // @synthesize listOfProjectDict=_listOfProjectDict;
@property(retain, nonatomic) NSMutableDictionary *listOfFirstLevelIncomeCategoryDict; // @synthesize listOfFirstLevelIncomeCategoryDict=_listOfFirstLevelIncomeCategoryDict;
@property(retain, nonatomic) NSMutableDictionary *listOfFirstLevelPayoutCategoryDict; // @synthesize listOfFirstLevelPayoutCategoryDict=_listOfFirstLevelPayoutCategoryDict;
@property(retain, nonatomic) NSMutableDictionary *listOfSecondLevelIncomeCategoryDict; // @synthesize listOfSecondLevelIncomeCategoryDict=_listOfSecondLevelIncomeCategoryDict;
@property(retain, nonatomic) NSMutableDictionary *listOfSecondLevelPayoutCategoryDict; // @synthesize listOfSecondLevelPayoutCategoryDict=_listOfSecondLevelPayoutCategoryDict;
- (void).cxx_destruct;
- (void)copyPhotoWithName:(id)arg1 path:(id)arg2;
- (id)createCorporationWithName:(id)arg1;
- (void)createMemberWithName:(id)arg1 transactionId:(long long)arg2;
- (void)createProjectWithName:(id)arg1 transactionId:(long long)arg2;
- (id)listOfImportedTime;
- (_Bool)isNeedUndoTransaction;
- (_Bool)calculateAndUpdateBalanceById:(long long)arg1 withType:(long long)arg2;
- (_Bool)updateAccountBalanceOrValue:(long long)arg1;
- (_Bool)isNameExist:(id)arg1;
- (id)getCategoryNameWithName:(id)arg1;
- (id)createCategoryWithName:(id)arg1 icon:(id)arg2 type:(unsigned long long)arg3 parentId:(long long)arg4;
- (id)findCategoryWithName:(id)arg1 inCategorys:(id)arg2;
- (id)getCategoryWithSecondLevelName:(id)arg1 secondLevelIcon:(id)arg2 firstLevelName:(id)arg3 firstLevelIcon:(id)arg4 inFirstLevelCategory:(id)arg5 inSecondLevelCategory:(id)arg6 type:(unsigned long long)arg7;
- (_Bool)addExpensesWithCreatedTime:(double)arg1 transactionData:(id)arg2 accountBook:(id)arg3;
- (id)createAccountWithName:(id)arg1 parentId:(long long)arg2 currencyType:(id)arg3 groupID:(long long)arg4 memo:(id)arg5;
- (id)accountVoWithName:(id)arg1 group:(long long)arg2 currencyCode:(id)arg3 accountBook:(id)arg4;
- (_Bool)insertImportHistory:(id)arg1;
- (void)endImportingWithTransactions;
- (void)importWithTransaction:(id)arg1 fromAccountBook:(id)arg2;
- (void)beiginImportingWithTransactions:(id)arg1;
- (void)importWithTransactions:(id)arg1 accountBook:(id)arg2;
- (id)mapCategoryWithCategorys:(id)arg1;
- (id)mapOfSecondLevelCategory:(id)arg1;
- (void)assembleCategoryMapsIfNeeds;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

