//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KDTabView.h"

#import "FDPOISearchManagerDelegate.h"
#import "UIPickerViewAccessibilityDelegate.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UIButton, UIPickerView;

@interface CorporationPickerView : KDTabView <UIPickerViewDelegate, UIPickerViewDataSource, FDPOISearchManagerDelegate, UIPickerViewAccessibilityDelegate>
{
    UIPickerView *_corporationPickerView;
    NSArray *_corporations;
    NSMutableArray *_recentCorporations;
    unsigned long long _selectedRowInComponent0AtCorporationPicker;
    UIPickerView *_lbsPickerView;
    NSMutableArray *_lbsPOIArr;
    UIButton *_defaultCorporationButton;
    UIButton *_lbsPoisButton;
    UIButton *_corporationEditButton;
    id <CorporationPickerViewDelegate> _delegate;
    _Bool _isEditMode;
}

@property _Bool isEditMode; // @synthesize isEditMode=_isEditMode;
@property(nonatomic) __weak id <CorporationPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *lbsPOIArr; // @synthesize lbsPOIArr=_lbsPOIArr;
@property(retain, nonatomic) NSMutableArray *recentCorporations; // @synthesize recentCorporations=_recentCorporations;
@property(retain, nonatomic) NSArray *corporations; // @synthesize corporations=_corporations;
@property unsigned long long selectedRowInComponent0AtCorporationPicker; // @synthesize selectedRowInComponent0AtCorporationPicker=_selectedRowInComponent0AtCorporationPicker;
- (void).cxx_destruct;
- (id)pickerView:(id)arg1 accessibilityLabelForComponent:(long long)arg2;
- (void)defaultCorporationAction;
- (void)moreLBSPoiAction;
- (void)FDPOISearchManager:(id)arg1 didRequestPoiFailWithError:(id)arg2;
- (void)FDPOISearchManager:(id)arg1 didLocatedFailWithError:(id)arg2;
- (void)FDPOISearchManager:(id)arg1 didFinishAcquireNearbyPOIs:(id)arg2;
- (void)reloadCorporationsWithLBSInfo;
- (void)setDefaultCorporation;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (void)updateRecentUsedCorporationsByCurrentCorporation:(id)arg1;
- (void)loadCorporationsAndRecentCorporations;
- (void)switchButtonsState:(_Bool)arg1;
- (void)willSlideUpAction;
- (void)layoutSubviews;
- (void)dealloc;
- (void)initButtons;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

