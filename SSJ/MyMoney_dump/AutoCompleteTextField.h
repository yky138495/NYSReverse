//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSArray, NSMutableArray, NSString, UIColor, UIFont, UITableView, UIView;

@interface AutoCompleteTextField : UITextField <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>
{
    _Bool _isSelectRow;
    int _filterType;
    UIView *_contentView;
    double _autoCompleteListWidthAdjustment;
    double _autoCompleteListItemHorizontalMargin;
    id <AutoCompleteViewDelegate> _autoCompleteDelegate;
    UIFont *_autoCompleteListFont;
    double _autoCompleteListMinHeight;
    long long _autoCompleteListTextAlignment;
    UITableView *_recommendsTableView;
    NSMutableArray *_recommendsArray;
    NSArray *_filteredRecommendsArray;
    struct CGSize _autoCompleteListOriginAdjustment;
}

+ (id)newAutoCompleteTableViewForTextField:(id)arg1;
+ (struct CGRect)autoCompleteTableViewFrameForTextField:(id)arg1;
@property(nonatomic) _Bool isSelectRow; // @synthesize isSelectRow=_isSelectRow;
@property(retain, nonatomic) NSArray *filteredRecommendsArray; // @synthesize filteredRecommendsArray=_filteredRecommendsArray;
@property(retain, nonatomic) NSMutableArray *recommendsArray; // @synthesize recommendsArray=_recommendsArray;
@property(retain, nonatomic) UITableView *recommendsTableView; // @synthesize recommendsTableView=_recommendsTableView;
@property(nonatomic) long long autoCompleteListTextAlignment; // @synthesize autoCompleteListTextAlignment=_autoCompleteListTextAlignment;
@property(nonatomic) double autoCompleteListMinHeight; // @synthesize autoCompleteListMinHeight=_autoCompleteListMinHeight;
@property(retain, nonatomic) UIFont *autoCompleteListFont; // @synthesize autoCompleteListFont=_autoCompleteListFont;
@property(nonatomic) __weak id <AutoCompleteViewDelegate> autoCompleteDelegate; // @synthesize autoCompleteDelegate=_autoCompleteDelegate;
@property(nonatomic) int filterType; // @synthesize filterType=_filterType;
@property(nonatomic) double autoCompleteListItemHorizontalMargin; // @synthesize autoCompleteListItemHorizontalMargin=_autoCompleteListItemHorizontalMargin;
@property(nonatomic) double autoCompleteListWidthAdjustment; // @synthesize autoCompleteListWidthAdjustment=_autoCompleteListWidthAdjustment;
@property(nonatomic) struct CGSize autoCompleteListOriginAdjustment; // @synthesize autoCompleteListOriginAdjustment=_autoCompleteListOriginAdjustment;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)resignFirstResponder;
- (void)textFieldDidChangeWithNotification:(id)arg1;
- (void)refreshLayout;
- (long long)maxListVisibleRow;
- (void)hiddenRecommendsTableView;
- (id)filterDataWhenDataChange:(id)arg1;
- (void)beginObservingKeyPathsAndNotifications;
- (void)commonInit;
@property(nonatomic) _Bool autoCompleteListShowBorder;
@property(retain, nonatomic) UIColor *autoCompleteListBackgroundColor;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

