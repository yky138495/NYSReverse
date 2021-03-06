//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AddTemplateContainerViewControllerDelegate.h"
#import "BottomEditViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "UIWebViewDelegate.h"

@class BottomEditView, ExpenseVo, NSArray, NSDateFormatter, NSDictionary, NSNumberFormatter, NSString, UITableView, UITextField, UIView;

@interface TemplateManagerViewController : UIViewController <UITableViewDataSource, UITextFieldDelegate, UITableViewDelegate, UIWebViewDelegate, AddTemplateContainerViewControllerDelegate, BottomEditViewDelegate>
{
    NSNumberFormatter *_numberFormatter;
    _Bool _showTopHeader;
    _Bool _showNavigationBar;
    _Bool _hideBottom;
    _Bool _shouldPopToRootViewController;
    ExpenseVo *_expenseForAddingNewTemplate;
    UIView *_noDataPlaceholderView;
    UITableView *_tableView;
    NSArray *_templates;
    NSArray *_payoutTemplates;
    NSArray *_incomeTemplates;
    NSArray *_transferTemplates;
    NSArray *_smartTemplates;
    NSDictionary *_templatesDescriptionDict;
    UITextField *_templateNameTextField;
    BottomEditView *_bottomEditView;
    NSDateFormatter *_dateFormatter;
    NSArray *_repeatIntervals;
}

@property(retain, nonatomic) NSArray *repeatIntervals; // @synthesize repeatIntervals=_repeatIntervals;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) BottomEditView *bottomEditView; // @synthesize bottomEditView=_bottomEditView;
@property(retain, nonatomic) UITextField *templateNameTextField; // @synthesize templateNameTextField=_templateNameTextField;
@property(retain, nonatomic) NSDictionary *templatesDescriptionDict; // @synthesize templatesDescriptionDict=_templatesDescriptionDict;
@property(retain, nonatomic) NSArray *smartTemplates; // @synthesize smartTemplates=_smartTemplates;
@property(readonly, nonatomic) NSArray *transferTemplates; // @synthesize transferTemplates=_transferTemplates;
@property(readonly, nonatomic) NSArray *incomeTemplates; // @synthesize incomeTemplates=_incomeTemplates;
@property(readonly, nonatomic) NSArray *payoutTemplates; // @synthesize payoutTemplates=_payoutTemplates;
@property(retain, nonatomic) NSArray *templates; // @synthesize templates=_templates;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *noDataPlaceholderView; // @synthesize noDataPlaceholderView=_noDataPlaceholderView;
@property(nonatomic) _Bool shouldPopToRootViewController; // @synthesize shouldPopToRootViewController=_shouldPopToRootViewController;
@property(retain, nonatomic) ExpenseVo *expenseForAddingNewTemplate; // @synthesize expenseForAddingNewTemplate=_expenseForAddingNewTemplate;
@property(nonatomic) _Bool hideBottom; // @synthesize hideBottom=_hideBottom;
@property(nonatomic) _Bool showNavigationBar; // @synthesize showNavigationBar=_showNavigationBar;
@property(nonatomic) _Bool showTopHeader; // @synthesize showTopHeader=_showTopHeader;
- (void).cxx_destruct;
- (_Bool)validateTemplateName:(id)arg1 error:(id *)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)saveTemplateAction;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)helpForSmartTemplate;
- (_Bool)isLastRowWithIndexPath:(id)arg1;
- (_Bool)isLastTemplateInfo:(id)arg1;
- (id)templateInfoAtIndexPath:(id)arg1;
- (_Bool)hasImported;
- (void)handleHeaderMyCardClicked:(id)arg1;
- (void)editButtonDidClick;
- (void)addButtonDidClick;
- (void)addTemplateContainerViewControllerWillDismissSaved:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)isValidateTemplateWithPOID:(long long)arg1 errorMessage:(id *)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)headerViewForSection:(long long)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData;
- (void)tryAddDefaultTemplates;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

