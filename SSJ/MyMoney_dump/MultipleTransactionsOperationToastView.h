//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface MultipleTransactionsOperationToastView : UIView
{
    UIView *_toastView;
    UILabel *_toastLabel;
}

+ (id)showInView:(id)arg1 withToastText:(id)arg2;
@property(retain, nonatomic) UILabel *toastLabel; // @synthesize toastLabel=_toastLabel;
@property(retain, nonatomic) UIView *toastView; // @synthesize toastView=_toastView;
- (void).cxx_destruct;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

