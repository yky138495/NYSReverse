//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableOrderedSet, NSNotificationCenter, NSOrderedSet;

@interface AccountBookTemplateContext : NSObject
{
    NSNotificationCenter *_notifcationCenter;
    id <GlobalAccountBookTemplateDao> _templateDao;
    NSMutableOrderedSet *_allTemplates;
    NSMutableOrderedSet *_changedTempaltes;
    NSMutableOrderedSet *_deletedTemplates;
}

@property(retain) NSMutableOrderedSet *deletedTemplates; // @synthesize deletedTemplates=_deletedTemplates;
@property(retain) NSMutableOrderedSet *changedTempaltes; // @synthesize changedTempaltes=_changedTempaltes;
@property(retain) NSMutableOrderedSet *allTemplates; // @synthesize allTemplates=_allTemplates;
@property(retain) id <GlobalAccountBookTemplateDao> templateDao; // @synthesize templateDao=_templateDao;
@property(retain, nonatomic) NSNotificationCenter *notifcationCenter; // @synthesize notifcationCenter=_notifcationCenter;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserverForTemplate:(id)arg1;
- (void)observeTemplate:(id)arg1;
- (void)removeAllTemplates;
- (void)resetContext;
- (_Bool)synchronize:(id *)arg1;
- (id)templateWithTemplateID:(id)arg1;
- (void)rollbackTransaction;
- (void)endTransaction;
- (void)beginTransaction;
- (void)removeTemplate:(id)arg1;
- (void)insertTemplate:(id)arg1;
@property(readonly, nonatomic) NSOrderedSet *templates;
- (void)initContext;
- (id)initWithTemplateDao:(id)arg1;

@end

