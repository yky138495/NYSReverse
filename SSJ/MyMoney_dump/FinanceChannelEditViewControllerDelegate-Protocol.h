//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FinanceChannel, FinanceChannelEditViewController, NSArray;

@protocol FinanceChannelEditViewControllerDelegate <NSObject>

@optional
- (void)channelEditViewWillDisappearWithSelectedChannel:(FinanceChannel *)arg1 commonChannels:(NSArray *)arg2 recommendChannels:(NSArray *)arg3;
- (void)channelEditViewController:(FinanceChannelEditViewController *)arg1 didSwitchToEdit:(_Bool)arg2;
- (void)channelEditViewController:(FinanceChannelEditViewController *)arg1 didSelectedChannel:(FinanceChannel *)arg2;
@end
