//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class CategoryVo, NSMutableArray;

@interface BudgetItemCategorySelectionViewController : UITableViewController
{
    CategoryVo *_categoryVo;
    NSMutableArray *_categories;
    id <BudgetItemCategorySelectionViewControllerDelegate> delegate;
}

@property(nonatomic) __weak id <BudgetItemCategorySelectionViewControllerDelegate> delegate; // @synthesize delegate;
@property(readonly, nonatomic) __weak CategoryVo *categoryVo; // @synthesize categoryVo=_categoryVo;
@property(retain, nonatomic) NSMutableArray *categories; // @synthesize categories=_categories;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end
