//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSArray, NSMutableArray, NSString, UIImage, UIImageView, UITableView, UITextField;

@interface BaseCategoryViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>
{
    UITableView *_tableView;
    UITextField *textFieldName;
    NSMutableArray *_imageNameArray;
    NSArray *_iconArray;
    UIImage *_buttonBackgroundImage;
    long long _selectedIndex;
    UIImageView *_headerSelectedImageView;
    long long _shouldBeSelectedIndex;
}

+ (id)buttonBackgroundImageWithSize:(struct CGSize)arg1;
@property(nonatomic) long long shouldBeSelectedIndex; // @synthesize shouldBeSelectedIndex=_shouldBeSelectedIndex;
@property(retain, nonatomic) UIImageView *headerSelectedImageView; // @synthesize headerSelectedImageView=_headerSelectedImageView;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *iconArray; // @synthesize iconArray=_iconArray;
@property(retain, nonatomic) NSMutableArray *imageNameArray; // @synthesize imageNameArray=_imageNameArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)save:(id)arg1;
- (void)cancel:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
@property(readonly, nonatomic) UITextField *textFieldName; // @synthesize textFieldName;
- (void)buttonClicked:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)buttonBackgroundImage;
@property(readonly) __weak NSString *iconName;
@property(readonly) __weak UIImage *selectedImage;
- (void)selectIndex:(long long)arg1;
- (void)selectIconWithName:(id)arg1;
- (void)reloadHeaderImage;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadView;
- (void)loadAllImages;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

