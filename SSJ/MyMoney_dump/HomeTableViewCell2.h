//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class HomeCompositeCellContentView, UIButton, UIImageView;

@interface HomeTableViewCell2 : UITableViewCell
{
    UIImageView *_separatorLine;
    UIImageView *_verticalSeparatorLine;
    _Bool _showSeparatorLine;
    HomeCompositeCellContentView *_leftContentView;
    HomeCompositeCellContentView *_rightContentView;
    UIButton *_leftButton;
    UIButton *_rightButton;
}

@property(nonatomic) _Bool showSeparatorLine; // @synthesize showSeparatorLine=_showSeparatorLine;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) HomeCompositeCellContentView *rightContentView; // @synthesize rightContentView=_rightContentView;
@property(retain, nonatomic) HomeCompositeCellContentView *leftContentView; // @synthesize leftContentView=_leftContentView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

