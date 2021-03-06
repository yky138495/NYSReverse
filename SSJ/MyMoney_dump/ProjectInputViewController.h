//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseInputViewController.h"

#import "UIPickerViewAccessibilityDelegate.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UIPickerView;

@interface ProjectInputViewController : BaseInputViewController <UIPickerViewDelegate, UIPickerViewDataSource, UIPickerViewAccessibilityDelegate>
{
    _Bool _isLoading;
    UIPickerView *_projectPickerView;
    NSArray *_projects;
    NSMutableArray *_recentProjects;
    long long _selectedRowInComponentAtProjectPicker;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property long long selectedRowInComponentAtProjectPicker; // @synthesize selectedRowInComponentAtProjectPicker=_selectedRowInComponentAtProjectPicker;
@property(retain, nonatomic) NSMutableArray *recentProjects; // @synthesize recentProjects=_recentProjects;
@property(retain, nonatomic) NSArray *projects; // @synthesize projects=_projects;
@property(retain, nonatomic) UIPickerView *projectPickerView; // @synthesize projectPickerView=_projectPickerView;
- (void).cxx_destruct;
- (id)pickerView:(id)arg1 accessibilityLabelForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (void)updateRecentUsedProjectsByCurrentProject:(id)arg1;
- (void)loadProjectsAndRecentProjects;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

