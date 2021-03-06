//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDao.h"

#import "TransactionTemplateDao.h"

@class NSString;

@interface TransactionTemplateDaoImpl : BaseDao <TransactionTemplateDao>
{
}

- (id)getTransactionTemplateById:(long long)arg1;
- (_Bool)deleteAllTemplates;
- (_Bool)deleteTemplate:(long long)arg1;
- (_Bool)updateTemplateOrders:(id)arg1;
- (_Bool)updateTemplate:(long long)arg1 withName:(id)arg2;
- (_Bool)changeTemplate:(id)arg1;
- (_Bool)existTemplateWithName:(id)arg1;
- (id)inactiveTemplates;
- (id)activeTemplates;
- (id)templateInfo;
- (long long)addTemplate:(id)arg1;
- (_Bool)updateTemplatesWithLastUpdatetime:(double)arg1 wheRemovedCoporationWithId:(long long)arg2;
- (_Bool)updateTemplatesWithLastUpdatetime:(double)arg1 wheRemovedAccountWithId:(long long)arg2;
- (_Bool)updateTemplatesWithLastUpdatetime:(double)arg1 wheRemovedCategoryWithId:(long long)arg2;
- (_Bool)updateTemplatesWithLastUpdatetime:(double)arg1 whenRemovedMemberWithId:(long long)arg2;
- (_Bool)updateTemplatesWithLastUpdatetime:(double)arg1 whenRemovedProjectWithId:(long long)arg2;
- (_Bool)deleteTemplate:(long long)arg1 inTable:(id)arg2;
- (_Bool)changeTemplate:(id)arg1 inTable:(id)arg2;
- (id)getTransactionTemplateById:(long long)arg1 inTable:(id)arg2;
- (long long)insertTransactionTemplate:(id)arg1 intoTable:(id)arg2;
- (int)nextOrderedWithTemplateType:(long long)arg1;
- (long long)nextIdForTable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

