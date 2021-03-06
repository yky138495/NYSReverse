//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AccountVo, CategoryVo, CorporationVo, MemberVo, ProjectVo;

@interface BudgetDimensionVo : NSObject
{
    CategoryVo *_categoryVo;
    AccountVo *_accountVo;
    CorporationVo *_corporationVo;
    ProjectVo *_projectVo;
    MemberVo *_memberVo;
}

+ (id)createBudgetDimensionFromCategory:(id)arg1 account:(id)arg2 corporation:(id)arg3 project:(id)arg4 member:(id)arg5;
@property(retain, nonatomic) MemberVo *memberVo; // @synthesize memberVo=_memberVo;
@property(retain, nonatomic) ProjectVo *projectVo; // @synthesize projectVo=_projectVo;
@property(retain, nonatomic) CorporationVo *corporationVo; // @synthesize corporationVo=_corporationVo;
@property(retain, nonatomic) AccountVo *accountVo; // @synthesize accountVo=_accountVo;
@property(retain, nonatomic) CategoryVo *categoryVo; // @synthesize categoryVo=_categoryVo;
- (void).cxx_destruct;

@end

