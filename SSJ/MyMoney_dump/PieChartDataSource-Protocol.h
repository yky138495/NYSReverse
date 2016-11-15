//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSAttributedString, NSString, PieChartView;

@protocol PieChartDataSource
- (NSString *)categoryNameInPieChartView:(PieChartView *)arg1;
- (NSString *)displayNameInPieChartView:(PieChartView *)arg1;
- (NSString *)totalLabelFormatWithAmountOfNumber:(double)arg1;
- (NSAttributedString *)pieChartView:(PieChartView *)arg1 descriptionInSector:(long long)arg2;
- (NSString *)pieChartView:(PieChartView *)arg1 nameInSector:(long long)arg2;
- (double)pieChartView:(PieChartView *)arg1 valueInSector:(long long)arg2;
- (long long)numberOfSectorsInPieChartView:(PieChartView *)arg1;
@end

