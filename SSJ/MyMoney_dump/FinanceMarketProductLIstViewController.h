//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class FinanceMarketProductListNoticeModel, NSArray, UITableView;

@interface FinanceMarketProductLIstViewController : UIViewController
{
    NSArray *_listData;
    NSArray *_bottomData;
    FinanceMarketProductListNoticeModel *_notice;
    id <FinanceTableViewScrollDelegate><FinanceProductTableViewActionDelegate> _delegate;
    UITableView *_tableView;
    id <FDFinanceProductListDatasource> _dataSource;
    double _height;
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) id <FDFinanceProductListDatasource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <FinanceTableViewScrollDelegate><FinanceProductTableViewActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FinanceMarketProductListNoticeModel *notice; // @synthesize notice=_notice;
@property(retain, nonatomic) NSArray *bottomData; // @synthesize bottomData=_bottomData;
@property(retain, nonatomic) NSArray *listData; // @synthesize listData=_listData;
- (void).cxx_destruct;
- (void)setupView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end
