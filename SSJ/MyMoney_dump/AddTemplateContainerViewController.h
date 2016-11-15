//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "KDHorizontalSlideMenuDelegate.h"
#import "UIScrollViewDelegate.h"

@class AddExpenseTemplateViewController, AddIncomeTemplateViewController, AddTransferTemplateViewController, KDHorizontalSlideMenu, NSMutableArray, NSString, UIScrollView;

@interface AddTemplateContainerViewController : UIViewController <KDHorizontalSlideMenuDelegate, UIScrollViewDelegate>
{
    long long _currentPageIndex;
    id <AddTemplateContainerViewControllerDelegate> _delegate;
    UIScrollView *_containerScrollView;
    KDHorizontalSlideMenu *_slideMenu;
    AddExpenseTemplateViewController *_expenseViewController;
    AddIncomeTemplateViewController *_incomeViewController;
    AddTransferTemplateViewController *_transferViewController;
    NSMutableArray *_childViewControllers;
}

@property(retain, nonatomic) NSMutableArray *childViewControllers; // @synthesize childViewControllers=_childViewControllers;
@property(retain, nonatomic) AddTransferTemplateViewController *transferViewController; // @synthesize transferViewController=_transferViewController;
@property(retain, nonatomic) AddIncomeTemplateViewController *incomeViewController; // @synthesize incomeViewController=_incomeViewController;
@property(retain, nonatomic) AddExpenseTemplateViewController *expenseViewController; // @synthesize expenseViewController=_expenseViewController;
@property(retain, nonatomic) KDHorizontalSlideMenu *slideMenu; // @synthesize slideMenu=_slideMenu;
@property(retain, nonatomic) UIScrollView *containerScrollView; // @synthesize containerScrollView=_containerScrollView;
@property(nonatomic) __weak id <AddTemplateContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)saveTemplateAction;
- (void)scrollViewDidDrag;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)clickMenuAtIndex:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)addViewController:(id)arg1 atPageIndex:(long long)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
