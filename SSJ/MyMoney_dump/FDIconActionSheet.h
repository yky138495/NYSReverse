//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDViewBase.h"

@class UIScrollView, UIView;

@interface FDIconActionSheet : FDViewBase
{
    UIScrollView *_scrollview;
    double _buttonWidth;
    double _buttonHeight;
    long long _numOfBtns;
    UIView *_separatorLine;
}

+ (id)imageWithImage:(id)arg1 scaledToSize:(struct CGSize)arg2;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(nonatomic) long long numOfBtns; // @synthesize numOfBtns=_numOfBtns;
@property(nonatomic) double buttonHeight; // @synthesize buttonHeight=_buttonHeight;
@property(nonatomic) double buttonWidth; // @synthesize buttonWidth=_buttonWidth;
@property(retain, nonatomic) UIScrollView *scrollview; // @synthesize scrollview=_scrollview;
- (void).cxx_destruct;
- (id)backgroundBaseView;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (void)showInSharedWindow;
- (long long)addButtonWithTitle:(id)arg1;
- (long long)addButtonWithButton:(id)arg1;
- (long long)addCancelButton;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 buttonsWithTitleAndImage:(id)arg3;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;

@end

