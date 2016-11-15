//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FloatBackgroundWallViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CurrencyFormatter, FDAccountAssetsChart, FloatBackgroundHeaderView, FloatBackgroundWallView, NSDateFormatter, NSMutableArray, NSMutableDictionary, NSPredicate, NSString, ReportChartFilterData, ReportEntryVo, UIButton, UILabel, UISearchBar, UITableView, UIView;

@interface NavExpenseViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchDisplayDelegate, UISearchBarDelegate, FloatBackgroundWallViewDelegate>
{
    UITableView *_tableView;
    NSDateFormatter *_dateFormatter;
    NSMutableDictionary *_dict;
    NSMutableArray *_sortedSections;
    id <ExpenseDelegate> _expenseSource;
    double _startTimeInterval;
    double _endTimeInterval;
    double _currentStartTimeInterval;
    double _lastStartTimeInterval;
    _Bool _isEnableNavigation;
    long long _timeSpanIndex;
    NSPredicate *_currentPredicate;
    NSPredicate *_allPredicate;
    NSPredicate *_expensePredicate;
    NSPredicate *_incomePredicate;
    _Bool _isWithoutSegmentedControl;
    NSString *_systemCurrencyCode;
    CurrencyFormatter *_currencyFormatter;
    UISearchBar *_searchBar;
    NSMutableDictionary *_filteredDict;
    NSMutableArray *_filteredSortedSections;
    NSString *_savedSearchTerm;
    long long _savedScopeButtonIndex;
    _Bool _searchIsActive;
    UILabel *_noRecordLabel;
    UILabel *_memoProjectLabel;
    _Bool _isDisableEditing;
    _Bool _isWithTendencyChart;
    UIButton *_editBarButton;
    UIView *_rightBarView;
    long long _reportGroupType;
    long long _dateRangeType;
    ReportEntryVo *_reportEntryVo;
    ReportChartFilterData *_reportChartFilterData;
    FloatBackgroundWallView *_wallView;
    FloatBackgroundHeaderView *_tableHeaderView;
    FDAccountAssetsChart *_assetsChart;
}

@property(retain, nonatomic) FDAccountAssetsChart *assetsChart; // @synthesize assetsChart=_assetsChart;
@property(retain, nonatomic) FloatBackgroundHeaderView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) FloatBackgroundWallView *wallView; // @synthesize wallView=_wallView;
@property(nonatomic) _Bool isWithTendencyChart; // @synthesize isWithTendencyChart=_isWithTendencyChart;
@property(retain, nonatomic) ReportChartFilterData *reportChartFilterData; // @synthesize reportChartFilterData=_reportChartFilterData;
@property(retain, nonatomic) ReportEntryVo *reportEntryVo; // @synthesize reportEntryVo=_reportEntryVo;
@property(nonatomic) long long dateRangeType; // @synthesize dateRangeType=_dateRangeType;
@property(nonatomic) long long reportGroupType; // @synthesize reportGroupType=_reportGroupType;
@property(retain, nonatomic) UIView *rightBarView; // @synthesize rightBarView=_rightBarView;
@property(retain, nonatomic) UIButton *editBarButton; // @synthesize editBarButton=_editBarButton;
@property(retain, nonatomic) UILabel *noRecordLabel; // @synthesize noRecordLabel=_noRecordLabel;
@property(retain, nonatomic) UILabel *memoProjectLabel; // @synthesize memoProjectLabel=_memoProjectLabel;
@property _Bool searchIsActive; // @synthesize searchIsActive=_searchIsActive;
@property long long savedScopeButtonIndex; // @synthesize savedScopeButtonIndex=_savedScopeButtonIndex;
@property(retain, nonatomic) NSString *savedSearchTerm; // @synthesize savedSearchTerm=_savedSearchTerm;
@property(retain, nonatomic) NSMutableArray *filteredSortedSections; // @synthesize filteredSortedSections=_filteredSortedSections;
@property(retain, nonatomic) NSMutableDictionary *filteredDict; // @synthesize filteredDict=_filteredDict;
@property(retain, nonatomic) NSString *systemCurrencyCode; // @synthesize systemCurrencyCode=_systemCurrencyCode;
@property(readonly) __weak NSPredicate *currentPredicate; // @synthesize currentPredicate=_currentPredicate;
@property double lastStartTimeInterval; // @synthesize lastStartTimeInterval=_lastStartTimeInterval;
@property double currentStartTimeInterval; // @synthesize currentStartTimeInterval=_currentStartTimeInterval;
@property long long timeSpanIndex; // @synthesize timeSpanIndex=_timeSpanIndex;
@property _Bool isEnableNavigation; // @synthesize isEnableNavigation=_isEnableNavigation;
@property(readonly) double endTimeInterval; // @synthesize endTimeInterval=_endTimeInterval;
@property(readonly) double startTimeInterval; // @synthesize startTimeInterval=_startTimeInterval;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSMutableArray *sortedSections; // @synthesize sortedSections=_sortedSections;
@property(retain, nonatomic) NSMutableDictionary *dict; // @synthesize dict=_dict;
@property __weak id <ExpenseDelegate> expenseSource; // @synthesize expenseSource=_expenseSource;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)needSetNavigationBarBackground:(id)arg1;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchScope:(long long)arg2;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)filterContentForSearchText:(id)arg1 scope:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)setTimeBetween:(double)arg1 and:(double)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)deleteRelatedRecordwith:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)editAction:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)reloadExpense;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)setupMenu;
- (void)loadChartData;
- (void)viewDidLoad;
- (void)segmentAction:(id)arg1;
- (void)nextAction;
- (void)previousAction;
- (void)handleNotification:(id)arg1;
- (void)removeNotificationObserver;
- (void)addNotificationObserver;
- (void)setNaviBarTitle:(id)arg1;
- (void)loadView;
- (id)initWithDisableEditing;
- (id)initWithoutSegmentedControl;
- (id)initWithNavigatorBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
