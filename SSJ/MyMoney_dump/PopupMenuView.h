//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface PopupMenuView : UIView
{
    id <PopupMenuViewDelegate> _delegate;
    NSMutableArray *_buttons;
    NSMutableArray *_buttonImages;
    NSMutableArray *_buttonTitles;
    UIView *_contentView;
    double _menuWidth;
    struct CGPoint _popupPoint;
}

@property(nonatomic) double menuWidth; // @synthesize menuWidth=_menuWidth;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSMutableArray *buttonTitles; // @synthesize buttonTitles=_buttonTitles;
@property(retain, nonatomic) NSMutableArray *buttonImages; // @synthesize buttonImages=_buttonImages;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) id <PopupMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGPoint popupPoint; // @synthesize popupPoint=_popupPoint;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
- (id)menuButtonWithImage:(id)arg1 title:(id)arg2;
- (void)setContentViewOriginPoint:(struct CGPoint)arg1;
- (void)dismiss;
- (void)show;
- (void)handleTapGestureRecognizer:(id)arg1;
- (void)handleButtonClicked:(id)arg1;
- (id)initWithImagesAndTitles:(id)arg1;

@end

