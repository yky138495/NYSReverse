//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, UILabel, UIView;

@interface SuperTzListTimelineCell : UITableViewCell
{
    UILabel *_contentLabel;
    UIView *_separatorView;
    NSLayoutConstraint *_separatorViewHeightCon;
}

@property(retain, nonatomic) NSLayoutConstraint *separatorViewHeightCon; // @synthesize separatorViewHeightCon=_separatorViewHeightCon;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (struct UIEdgeInsets)layoutMargins;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
