//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PreBaseInputViewController.h"

#import "FDPOISearchManagerDelegate.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UIButton, UIPickerView;

@interface PreCorporationInputViewController : PreBaseInputViewController <UIPickerViewDelegate, UIPickerViewDataSource, FDPOISearchManagerDelegate>
{
    unsigned long long _selectedRowInComponent0AtCorporationPicker;
    UIPickerView *_corporationPickerView;
    NSArray *_corporations;
    NSMutableArray *_recentCorporations;
    UIPickerView *_lbsPickerView;
    NSMutableArray *_lbsPOIArr;
    UIButton *_defaultCorporationButton;
    UIButton *_lbsPoisButton;
}

@property(retain, nonatomic) UIButton *lbsPoisButton; // @synthesize lbsPoisButton=_lbsPoisButton;
@property(retain, nonatomic) UIButton *defaultCorporationButton; // @synthesize defaultCorporationButton=_defaultCorporationButton;
@property(retain, nonatomic) NSMutableArray *lbsPOIArr; // @synthesize lbsPOIArr=_lbsPOIArr;
@property(retain, nonatomic) UIPickerView *lbsPickerView; // @synthesize lbsPickerView=_lbsPickerView;
@property(retain, nonatomic) NSMutableArray *recentCorporations; // @synthesize recentCorporations=_recentCorporations;
@property(retain, nonatomic) NSArray *corporations; // @synthesize corporations=_corporations;
@property(retain, nonatomic) UIPickerView *corporationPickerView; // @synthesize corporationPickerView=_corporationPickerView;
@property unsigned long long selectedRowInComponent0AtCorporationPicker; // @synthesize selectedRowInComponent0AtCorporationPicker=_selectedRowInComponent0AtCorporationPicker;
- (void).cxx_destruct;
- (void)defaultCorporationAction;
- (void)moreLBSPoiAction;
- (void)reloadCorporationsWithLBSInfo;
- (void)setDefaultCorporation;
- (void)FDPOISearchManager:(id)arg1 didRequestPoiFailWithError:(id)arg2;
- (void)FDPOISearchManager:(id)arg1 didLocatedFailWithError:(id)arg2;
- (void)FDPOISearchManager:(id)arg1 didFinishAcquireNearbyPOIs:(id)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (void)loadCorporationsAndRecentCorporations;
- (void)initButtons;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

