//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class DayWeekContentView;

@interface DayWeekTableViewCell : UITableViewCell
{
    DayWeekContentView *_dayWeekContentView;
    int positionType;
    _Bool _isLastSectionLastRow;
    _Bool _isInLastSection;
}

+ (int)positionTypeAtRow:(long long)arg1 sectionCount:(long long)arg2;
@property(nonatomic) _Bool isInLastSection; // @synthesize isInLastSection=_isInLastSection;
@property(nonatomic) _Bool isLastSectionLastRow; // @synthesize isLastSectionLastRow=_isLastSectionLastRow;
@property(nonatomic) int positionType; // @synthesize positionType;
- (void).cxx_destruct;
- (void)displayDay:(id)arg1 andWeekday:(id)arg2;
- (void)setNeedsDisplay;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
