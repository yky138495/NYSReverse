//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseTableViewController.h"

#import "FilterBaseSelectionViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"

@class FilterCustomTimespanViewController, FilterUserDefaultsConfig, KDTabView, NSArray, NSMutableArray, NSMutableDictionary, NSString, ReportChartViewController, TimeSpan, UIDatePicker, UITextField;

@interface FilterViewController : BaseTableViewController <UIAlertViewDelegate, UITextFieldDelegate, FilterBaseSelectionViewControllerDelegate>
{
    UITextField *_memoTextField;
    UIDatePicker *_datePicker;
    _Bool _navOrReport;
    NSMutableArray *_filteredTransactions;
    NSArray *_accounts;
    NSMutableDictionary *_filteredAccounts;
    NSArray *_corporations;
    NSMutableDictionary *_filteredCorporations;
    NSArray *_categorys;
    NSMutableDictionary *_filteredCategorys;
    NSArray *_projects;
    NSMutableDictionary *_filteredProjects;
    NSArray *_members;
    NSMutableDictionary *_filteredMembers;
    NSString *_memo;
    TimeSpan *_filteredTimeSpan;
    NSString *_filteredAccountString;
    NSString *_filteredCategoryString;
    NSString *_filteredProjectString;
    NSString *_filteredCorporationString;
    NSString *_filteredMemberString;
    _Bool _isAnimating;
    KDTabView *_dateTabView;
    id <FilterViewControllerDelegate> delegate;
    NSString *_customTimespanDisabledFallbackType;
    _Bool _accountsFullySelected;
    _Bool _corpsFullySelected;
    _Bool _categoriesFullySelected;
    _Bool _projectsFullySelected;
    _Bool _membersFullySelected;
    _Bool _isCustomTimespanSelectorShown;
    _Bool _allDate;
    int _customTimespanSelectedIndex;
    ReportChartViewController *_reportViewController;
    FilterCustomTimespanViewController *_customTimespanSelector;
    FilterUserDefaultsConfig *_config;
}

@property(nonatomic) _Bool allDate; // @synthesize allDate=_allDate;
@property(retain, nonatomic) FilterUserDefaultsConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) FilterCustomTimespanViewController *customTimespanSelector; // @synthesize customTimespanSelector=_customTimespanSelector;
@property(nonatomic) int customTimespanSelectedIndex; // @synthesize customTimespanSelectedIndex=_customTimespanSelectedIndex;
@property(nonatomic) _Bool isCustomTimespanSelectorShown; // @synthesize isCustomTimespanSelectorShown=_isCustomTimespanSelectorShown;
@property(nonatomic) _Bool membersFullySelected; // @synthesize membersFullySelected=_membersFullySelected;
@property(nonatomic) _Bool projectsFullySelected; // @synthesize projectsFullySelected=_projectsFullySelected;
@property(nonatomic) _Bool categoriesFullySelected; // @synthesize categoriesFullySelected=_categoriesFullySelected;
@property(nonatomic) _Bool corpsFullySelected; // @synthesize corpsFullySelected=_corpsFullySelected;
@property(nonatomic) _Bool accountsFullySelected; // @synthesize accountsFullySelected=_accountsFullySelected;
@property(nonatomic) __weak id <FilterViewControllerDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) KDTabView *dateTabView; // @synthesize dateTabView=_dateTabView;
@property(nonatomic) __weak ReportChartViewController *reportViewController; // @synthesize reportViewController=_reportViewController;
@property(retain, nonatomic) NSString *filteredMemberString; // @synthesize filteredMemberString=_filteredMemberString;
@property(retain, nonatomic) NSString *filteredCorporationString; // @synthesize filteredCorporationString=_filteredCorporationString;
@property(retain, nonatomic) NSString *filteredProjectString; // @synthesize filteredProjectString=_filteredProjectString;
@property(retain, nonatomic) NSString *filteredCategoryString; // @synthesize filteredCategoryString=_filteredCategoryString;
@property(retain, nonatomic) NSString *filteredAccountString; // @synthesize filteredAccountString=_filteredAccountString;
@property(retain, nonatomic) NSMutableDictionary *filteredMembers; // @synthesize filteredMembers=_filteredMembers;
@property(retain, nonatomic) NSArray *members; // @synthesize members=_members;
@property(retain, nonatomic) TimeSpan *filteredTimeSpan; // @synthesize filteredTimeSpan=_filteredTimeSpan;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSMutableDictionary *filteredCorporations; // @synthesize filteredCorporations=_filteredCorporations;
@property(retain, nonatomic) NSArray *corporations; // @synthesize corporations=_corporations;
@property(retain, nonatomic) NSMutableDictionary *filteredProjects; // @synthesize filteredProjects=_filteredProjects;
@property(retain, nonatomic) NSArray *projects; // @synthesize projects=_projects;
@property(retain, nonatomic) NSMutableDictionary *filteredCategorys; // @synthesize filteredCategorys=_filteredCategorys;
@property(retain, nonatomic) NSArray *categorys; // @synthesize categorys=_categorys;
@property(retain, nonatomic) NSMutableDictionary *filteredAccounts; // @synthesize filteredAccounts=_filteredAccounts;
@property(retain, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
@property(retain, nonatomic) NSMutableArray *filteredTransactions; // @synthesize filteredTransactions=_filteredTransactions;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) UITextField *memoTextField; // @synthesize memoTextField=_memoTextField;
- (void).cxx_destruct;
- (_Bool)isEmptySelection;
- (void)readCustomTimespanFilter;
- (void)saveCustomTimespanFilter;
- (void)tapViewAddAllEvents:(id)arg1;
- (struct CGRect)tabViewFrameWithSize:(struct CGSize)arg1;
- (id)stringFromFilteredDict:(id)arg1 type:(id)arg2 fullySelected:(_Bool)arg3;
- (void)filter;
- (void)filterAction;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldContentsDidChange:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)clearTableViewSelectionMark;
- (void)customTimespanSwitchClicked:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)insertNoCoorporationItemInCoorporations:(id)arg1;
- (id)insertNoProjectItemInProjects:(id)arg1;
- (id)insertNoMemberItemInMembers:(id)arg1;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)filterBaseSelectionViewControllerSelectionChanged:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)initFilteredArrays;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithReportViewController:(id)arg1;
- (id)initWithNavExpense;
- (void)closeTabAction:(id)arg1;
- (void)showAlert;
- (void)slideDownAnimation;
- (void)slideUpAnimation;
- (void)tabViewWasSlideDown:(id)arg1;
- (void)tabViewWillSlideDown:(id)arg1;
- (void)tabViewWasSlideUp:(id)arg1;
- (void)tabViewWillSlideUp:(id)arg1;
- (void)dateChangedAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

