//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MultipleCopyChecker : NSObject
{
}

- (id)checkMember:(id)arg1;
- (id)checkCorporation:(id)arg1;
- (id)checkProject:(id)arg1;
- (id)checkCreditor:(id)arg1;
- (id)createCategoryUnder:(long long)arg1 withName:(id)arg2 type:(long long)arg3 iconName:(id)arg4 parentDepth:(unsigned long long)arg5;
- (id)checkFirstLevelCategoryWithRootCategory:(id)arg1 firstLevelCategoeyName:(id)arg2;
- (id)checkSecondLevelCategoryWithFirstLevelCategory:(id)arg1 originRoot:(id)arg2 secondLevelCategryName:(id)arg3;
- (id)checkCategory:(id)arg1;
- (id)checkAccount:(id)arg1 withName:(id)arg2;

@end

