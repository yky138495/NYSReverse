//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BusinessFactory : NSObject
{
}

+ (id)sharedInstance;
+ (_Bool)isProductEnvironment;
- (id)accountBookThumbnailService;
- (id)accountBookCoverService;
- (id)todayDynamicAdvertisementService;
- (id)multiDimensionBudgetService;
- (id)recurrenceService;
- (id)financeMarketService;
- (id)ACLPermissionService;
- (id)ACLService;
- (id)superTransactionService;
- (id)preferenceService;
- (id)remindRemoteService;
- (id)transactionService;
- (id)checkAppVersionService;
- (id)accountBookCarryForwardService;
- (id)accountBookService;
- (id)loanService;
- (id)propertyService;
- (id)accountBookImportService;
- (id)importService;
- (id)billMailboxImportHistoryService;
- (id)notificationService;
- (id)recentUsedService;
- (id)memberService;
- (id)syncAccelerationService;
- (id)messageCenterService;
- (id)remindService;
- (id)expenseTemplateService;
- (id)dataSuiteService;
- (id)projectService;
- (id)exchangeService;
- (id)maintainService;
- (id)reportService;
- (id)budgetService;
- (id)userService;
- (id)corporationService;
- (id)accountGroupService;
- (id)accountService;
- (id)settingService;
- (id)categoryService;
- (id)expenseService;
- (id)stockRemoteService;
- (id)stockTransactionService;
- (id)stockHodlingService;
- (id)stockRecordService;
@property(readonly, nonatomic) id <ForumTaskManager> forumTaskManager;
@property(readonly, nonatomic) id <SplashConfigService> splashConfigService;
@property(readonly, nonatomic) id <UserBehaviorGatheringService> userBehaviorGatheringService;
- (id)fundHoldingService;
- (id)fundRecordService;
- (id)fundRemoteService;
- (id)fundTransactionService;

@end

