//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSDate, NSString, UIButton, UIImageView, UILabel;

@interface ImportFilterView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _enabled;
    UIButton *_filterDateButton;
    UILabel *_importTitleLabel;
    id <ImportFilterViewDelegate> _delegate;
    NSDate *_filteredDate;
    UIImageView *_backgroundImageView;
    UIImageView *_importAllCheck;
    UIImageView *_importFilterCheck;
}

@property(retain, nonatomic) UIImageView *importFilterCheck; // @synthesize importFilterCheck=_importFilterCheck;
@property(retain, nonatomic) UIImageView *importAllCheck; // @synthesize importAllCheck=_importAllCheck;
@property(nonatomic) __weak UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSDate *filteredDate; // @synthesize filteredDate=_filteredDate;
@property(nonatomic) __weak id <ImportFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *importTitleLabel; // @synthesize importTitleLabel=_importTitleLabel;
@property(nonatomic) __weak UIButton *filterDateButton; // @synthesize filterDateButton=_filterDateButton;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setFilterDate:(id)arg1;
- (void)selectRow:(unsigned long long)arg1;
- (void)filterDateAction:(id)arg1;
- (void)didImportFilterDataRowSelected:(id)arg1;
- (void)didImportAllDataRowSelected:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
