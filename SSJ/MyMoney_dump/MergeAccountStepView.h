//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface MergeAccountStepView : UIView
{
    UIImageView *_selectAccountStepImgView;
    UIImageView *_transactionHandleImgView;
    UIImageView *_mergeActionImgView;
    UIView *_lineView1;
    UIView *_lineView2;
    UILabel *_selectAccountLabel;
    UILabel *_transactionHandleLabel;
    UILabel *_mergeActionLabel;
    int _currentStep;
}

- (void).cxx_destruct;
- (void)showStep;
- (void)layoutSubviews;
- (id)initWithStep:(int)arg1;

@end
