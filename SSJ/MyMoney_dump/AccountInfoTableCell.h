//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SimpleTableViewCell.h"

@class UIButton;

@interface AccountInfoTableCell : SimpleTableViewCell
{
    id <AccountInfoTableCellDelegate> _delegate;
    UIButton *_activateVIPButton;
}

@property(nonatomic) __weak id <AccountInfoTableCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *activateVIPButton; // @synthesize activateVIPButton=_activateVIPButton;
- (void).cxx_destruct;
- (void)activateVIPAction;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

