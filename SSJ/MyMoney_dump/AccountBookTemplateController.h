//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AccountBookTemplateContext, AccountBookTemplateSortManager, NSMutableArray;

@interface AccountBookTemplateController : NSObject
{
    AccountBookTemplateSortManager *_sortManager;
    NSMutableArray *_currentDownloadingTemplates;
    NSMutableArray *_currentImportingTemplates;
    NSMutableArray *_downloaders;
    NSMutableArray *_importers;
    AccountBookTemplateContext *_context;
}

+ (id)sharedTemplateController;
@property(retain, nonatomic) AccountBookTemplateContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSMutableArray *importers; // @synthesize importers=_importers;
@property(retain, nonatomic) NSMutableArray *downloaders; // @synthesize downloaders=_downloaders;
@property(retain, nonatomic) NSMutableArray *currentImportingTemplates; // @synthesize currentImportingTemplates=_currentImportingTemplates;
@property(retain, nonatomic) NSMutableArray *currentDownloadingTemplates; // @synthesize currentDownloadingTemplates=_currentDownloadingTemplates;
@property(retain, nonatomic) AccountBookTemplateSortManager *sortManager; // @synthesize sortManager=_sortManager;
- (void).cxx_destruct;
- (void)importTemplate:(id)arg1;
- (void)importTemplate:(id)arg1 accountBookName:(id)arg2 cover:(unsigned long long)arg3;
- (_Bool)canImportTemplate:(id)arg1;
- (_Bool)updateLocalTemplates:(id)arg1 resourcePath:(id)arg2 errorString:(id *)arg3;
- (_Bool)initUpdateLocalTemplates:(id)arg1 resourcePath:(id)arg2 errorString:(id *)arg3;
- (void)downloadTemplateFilesWithTemplate:(id)arg1;
- (void)prepareForDownloadingTemplate:(id)arg1;
- (_Bool)canDownloadTemplate:(id)arg1;
- (id)notificationCenter;
- (void)synchronize:(id *)arg1;
- (void)permanentlyRemoveTemplateWithTemplateID:(id)arg1;
- (id)templateWithTemplateID:(id)arg1;
- (id)validTemplates;
- (void)coordinate;
- (id)initWithContext:(id)arg1;

@end

