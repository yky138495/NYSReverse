//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CustomDatePickerViewDelegate.h"
#import "ReportDateRangeSelectCustomCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CustomDatePickerView, FilterUserDefaultsConfig, MASConstraint, NSDate, NSString, ReportDateRangeSelectCustomCell, TimeSpanIterator, UIButton, UITableView, UIView;

@interface ReportDateRangeSelectViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, ReportDateRangeSelectCustomCellDelegate, CustomDatePickerViewDelegate>
{
    _Bool _hideCompleteButton;
    _Bool _dismissAfterDateRangeSelection;
    _Bool _shouldHandleCompletion;
    _Bool _isShowingDatePicker;
    NSDate *_startDate;
    NSDate *_endDate;
    id <ReportDateRangeSelectViewControllerDelegate> _delegate;
    long long _selectedDateRangeType;
    long long _reportType;
    TimeSpanIterator *_timeSpanIterator;
    UITableView *_tableView;
    MASConstraint *_datePickerViewTop;
    ReportDateRangeSelectCustomCell *_customCell;
    long long *_currentCustomDateType;
    CustomDatePickerView *_customDatePickerView;
    UIButton *_completeButton;
    UIView *_buttonSeparator;
    FilterUserDefaultsConfig *_chartConfig;
    long long _lastSelectedDateRange;
    NSDate *_lastStartDate;
    NSDate *_lastEndDate;
}

@property(retain, nonatomic) NSDate *lastEndDate; // @synthesize lastEndDate=_lastEndDate;
@property(retain, nonatomic) NSDate *lastStartDate; // @synthesize lastStartDate=_lastStartDate;
@property(nonatomic) long long lastSelectedDateRange; // @synthesize lastSelectedDateRange=_lastSelectedDateRange;
@property(retain, nonatomic) FilterUserDefaultsConfig *chartConfig; // @synthesize chartConfig=_chartConfig;
@property(retain, nonatomic) UIView *buttonSeparator; // @synthesize buttonSeparator=_buttonSeparator;
@property(retain, nonatomic) UIButton *completeButton; // @synthesize completeButton=_completeButton;
@property(retain, nonatomic) CustomDatePickerView *customDatePickerView; // @synthesize customDatePickerView=_customDatePickerView;
@property(nonatomic) _Bool isShowingDatePicker; // @synthesize isShowingDatePicker=_isShowingDatePicker;
@property(nonatomic) long long *currentCustomDateType; // @synthesize currentCustomDateType=_currentCustomDateType;
@property(retain, nonatomic) ReportDateRangeSelectCustomCell *customCell; // @synthesize customCell=_customCell;
@property(retain, nonatomic) MASConstraint *datePickerViewTop; // @synthesize datePickerViewTop=_datePickerViewTop;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool shouldHandleCompletion; // @synthesize shouldHandleCompletion=_shouldHandleCompletion;
@property(nonatomic) _Bool dismissAfterDateRangeSelection; // @synthesize dismissAfterDateRangeSelection=_dismissAfterDateRangeSelection;
@property(nonatomic) _Bool hideCompleteButton; // @synthesize hideCompleteButton=_hideCompleteButton;
@property(retain, nonatomic) TimeSpanIterator *timeSpanIterator; // @synthesize timeSpanIterator=_timeSpanIterator;
@property(nonatomic) long long reportType; // @synthesize reportType=_reportType;
@property(nonatomic) long long selectedDateRangeType; // @synthesize selectedDateRangeType=_selectedDateRangeType;
@property(nonatomic) __weak id <ReportDateRangeSelectViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)convertSelectdDateRangeTypeTovFilterTimeType:(long long)arg1;
- (long long)convertvFilterTypeToDateRangeType:(id)arg1;
- (void)updateDates;
- (void)safetyUpdateEndDateForDatePicker;
- (void)safetyUpdateStartDateForDatePicker;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unhookKVO;
- (void)hookKVO;
- (void)dismissDatePickerWithMoveDownTableView:(_Bool)arg1;
- (void)presentDatePicker;
- (void)reportDateRangeSelectCustomCell:(id)arg1 didClickBeginDateButton:(_Bool)arg2;
- (void)reportDateRangeSelectCustomCell:(id)arg1 didSwitchTo:(_Bool)arg2;
- (void)customDatePickerViewDidClickUnlimitedButton:(id)arg1;
- (void)customDatePickerView:(id)arg1 didChangeToDate:(id)arg2;
- (void)customDatePickerViewDidClickOnDismissButton:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateStartDateAndEndDate;
- (void)handleRightButton;
- (void)handleLeftButton;
- (double)timeintervalOfCustomDateRange;
- (void)reloadWithAnimation;
- (void)saveConfig;
- (_Bool)validateBeginDateBiggerThanEndDate;
- (void)handleCompleteButton;
- (void)updateViewConstraints;
- (void)initTableView;
- (void)initDatePicker;
- (id)buttonHighlightedImage;
- (void)initCompleteButton;
- (void)initSubviews;
- (void)updateIteratorThenUpdateDate;
- (void)loadFilterUserConfig;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
