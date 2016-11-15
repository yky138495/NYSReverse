//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseTableViewController.h"

#import "DateStartSelectionViewControllerDelegate.h"

@class CalendarStartSettingVo, NSString;

@interface DateStaticsController : BaseTableViewController <DateStartSelectionViewControllerDelegate>
{
    CalendarStartSettingVo *_calendarStartSettingVo;
}

@property(retain, nonatomic) CalendarStartSettingVo *calendarStartSettingVo; // @synthesize calendarStartSettingVo=_calendarStartSettingVo;
- (void).cxx_destruct;
- (void)tableViewWillReload;
- (void)reloadCalendarStartSettingData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

