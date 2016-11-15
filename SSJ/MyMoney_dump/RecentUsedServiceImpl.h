//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RecentUsedService.h"

@class NSString;

@interface RecentUsedServiceImpl : NSObject <RecentUsedService>
{
}

- (_Bool)resetIncomeCategories:(id)arg1;
- (_Bool)resetExpenseCategories:(id)arg1;
- (_Bool)resetAccounts:(id)arg1;
- (_Bool)resetCreditors:(id)arg1;
- (_Bool)setMembers:(id)arg1;
- (_Bool)resetProjects:(id)arg1;
- (_Bool)resetCorporations:(id)arg1;
- (_Bool)resetRecentUsed:(id)arg1 withType:(int)arg2;
- (id)listOfIncomeCategories;
- (id)listOfExpenseCategories;
- (id)listOfAccounts;
- (id)listOfCreditors;
- (id)members;
- (id)listOfProjects;
- (id)listOfCorporations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

