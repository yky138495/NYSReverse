//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UIView;

@interface FDPersonalCenterTableViewBaseCell : UITableViewCell
{
    _Bool _lastCell;
    UIImageView *_rightArrow;
    UIView *_separatorLine;
}

@property(nonatomic) _Bool lastCell; // @synthesize lastCell=_lastCell;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UIImageView *rightArrow; // @synthesize rightArrow=_rightArrow;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

