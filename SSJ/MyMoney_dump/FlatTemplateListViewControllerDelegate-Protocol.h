//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FlatTemplateListViewController;

@protocol FlatTemplateListViewControllerDelegate <NSObject>

@optional
- (void)flatTemplateListViewControllerdidBeginEdit:(FlatTemplateListViewController *)arg1;
- (void)flatTemplateListViewControllerdidTapAddButton:(FlatTemplateListViewController *)arg1;
- (void)flatTemplateListViewController:(FlatTemplateListViewController *)arg1 didSelectTemplate:(long long)arg2 isEditing:(_Bool)arg3;
@end
