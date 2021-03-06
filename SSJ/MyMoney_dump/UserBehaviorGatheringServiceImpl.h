//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UserBehaviorGatheringService.h"

@class NSString;

@interface UserBehaviorGatheringServiceImpl : NSObject <UserBehaviorGatheringService>
{
}

- (void)setUserBehaviourMultipartRequest:(id)arg1 withData:(id)arg2;
- (void)logUserBehaviour:(id)arg1;
- (int)randomNumberInRange:(int)arg1 high:(int)arg2;
- (id)encodeUserBehaviourData:(id)arg1 withKey:(int)arg2;
- (id)generalKeyAndValueInEventDictionary;
- (void)logBusinessID:(id)arg1 departmentID:(id)arg2 operation:(id)arg3 action:(id)arg4 extraValues:(id)arg5;
- (void)logFinanceHeadline:(id)arg1 action:(id)arg2 extraValues:(id)arg3;
- (void)logFinanceHeadlineForRefresh:(id)arg1 channelID:(id)arg2;
- (void)logFinanceHeadlineForClick:(id)arg1 channelID:(id)arg2 topicID:(id)arg3;
- (void)logFinanceHeadlineForClick:(id)arg1 channelID:(id)arg2;
- (void)logFinanceHeadlineForView:(id)arg1 channelID:(id)arg2;
- (void)logFinanceBusinessID:(id)arg1 action:(id)arg2 productID:(id)arg3 pageName:(id)arg4;
- (void)logFinanceBusinessIDForClick:(id)arg1 productID:(id)arg2;
- (void)logFinanceBusinessIDForClick:(id)arg1 pageName:(id)arg2;
- (void)logFinanceBusinessIDForView:(id)arg1 pageName:(id)arg2;
- (void)logFinanceBusinessIDForView:(id)arg1;
- (void)logBusinessID:(id)arg1 action:(id)arg2 extraValue:(id)arg3;
- (void)logAdSpaceWithEventType:(id)arg1 adOid:(id)arg2 adPresentaionArea:(id)arg3;
- (void)logBusinessIDForPush:(id)arg1 extraValue:(id)arg2;
- (void)logBusinessIDForClick:(id)arg1 extraValue:(id)arg2;
- (void)logBusinessID:(id)arg1 action:(id)arg2;
- (void)logBusinessIDForView:(id)arg1 extraValue:(id)arg2;
- (void)logBusinessIDForView:(id)arg1;
- (void)logBusinessID:(id)arg1;
- (void)sendForumVisitingBehaviorWithAccount:(id)arg1 CompletionCallback:(CDUnknownBlockType)arg2;
- (void)sendUserGeographyBehavior:(id)arg1 withCompletionCallback:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

