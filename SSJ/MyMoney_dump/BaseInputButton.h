//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UILabel;

@interface BaseInputButton : UIButton
{
    _Bool _shouldCollectTappedStatistics;
    UILabel *_textLabel;
}

@property(nonatomic) _Bool shouldCollectTappedStatistics; // @synthesize shouldCollectTappedStatistics=_shouldCollectTappedStatistics;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)handleButtonTapped:(id)arg1;
- (id)closeButtonWithFrame:(struct CGRect)arg1;
- (void)labelHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)handleKeyboardWillHideNotification:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (id)statisticKey;
- (void)slideUpPickerView;
- (void)dealloc;
- (double)maxTitleWidth;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
