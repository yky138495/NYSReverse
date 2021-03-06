//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseTableViewController.h"

@class CalendarStartSettingVo, NSArray;

@interface DateStartSelectionViewController : BaseTableViewController
{
    NSArray *_data;
    long long _startType;
    CalendarStartSettingVo *_calendarStartSettingVo;
    _Bool _isRemind;
    id <DateStartSelectionViewControllerDelegate> _delegate;
}

+ (id)RemindIntervals;
+ (id)MonthDays;
+ (id)WeekDaysDictionary;
+ (id)WeekDays;
@property(nonatomic) __weak id <DateStartSelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CalendarStartSettingVo *calendarStartSettingVo; // @synthesize calendarStartSettingVo=_calendarStartSettingVo;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithStartType:(int)arg1;

@end

