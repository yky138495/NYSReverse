//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ExpenseTemplateVo, NSArray, NSString;

@protocol ExpenseTemplateService <NSObject>
- (_Bool)insertDefaultTemplates;
- (_Bool)existTemplateWithName:(NSString *)arg1;
- (ExpenseTemplateVo *)getExpenseTemplateById:(long long)arg1;
- (_Bool)deleteTemplate:(long long)arg1;
- (_Bool)updateTemplateOrders:(NSArray *)arg1;
- (_Bool)updateTemplate:(long long)arg1 withName:(NSString *)arg2;
- (NSArray *)inactiveTemplates;
- (NSArray *)activeTemplates;
- (NSArray *)templateInfo;
- (_Bool)changeTemplate:(ExpenseTemplateVo *)arg1 withId:(long long)arg2;
- (_Bool)saveTemplate:(ExpenseTemplateVo *)arg1;
@end
