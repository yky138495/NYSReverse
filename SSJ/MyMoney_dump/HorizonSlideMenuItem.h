//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class UILabel;

@interface HorizonSlideMenuItem : UIImageView
{
    UIImageView *_contentImageView;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
    struct CGPoint _nearPoint;
    struct CGPoint _farPoint;
    UILabel *_nameLabel;
    id <SlideMenuItemDelegate> _delegate;
}

@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) struct CGPoint farPoint; // @synthesize farPoint=_farPoint;
@property(nonatomic) struct CGPoint nearPoint; // @synthesize nearPoint=_nearPoint;
@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) __weak id <SlideMenuItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 backgroundImage:(id)arg2 highlightedBackgroundImage:(id)arg3 ContentImage:(id)arg4 highlightedContentImage:(id)arg5 title:(id)arg6;

@end
