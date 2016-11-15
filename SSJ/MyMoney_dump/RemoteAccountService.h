//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RemoteAccountService : NSObject
{
}

+ (id)urlForFinanceActivityWithUsername:(id)arg1 andPassword:(id)arg2;
+ (id)urlForFinanceWalletWithUsername:(id)arg1 andPassword:(id)arg2;
+ (void)querySignInCharacterWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
+ (void)queryNewUserPushNotification:(id)arg1 password:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)queryIsWalletMarketUser:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (id)completedTasksString;
+ (void)queryFinancialWalletInfoWithEnterStyle:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)queryAccountInfoAndActivityInFinanceMarketWithUsername:(id)arg1 andPassword:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)queryAccountInfoInFinanceMarketWithUsername:(id)arg1 andPassword:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)queryBBSUidForUserName:(id)arg1 andPassword:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)queryAccountInfoInBBSWithUsername:(id)arg1 andPassword:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)uploadJpegImageWithImage:(id)arg1 username:(id)arg2 andPassword:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)generateBoundaryString;
+ (void)queryHasNewFeatureInForumWithUsername:(id)arg1 password:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)isQueryingAccount;
- (void)postLinkToFinanceFormWithUsername:(id)arg1 andPassword:(id)arg2 andTitle:(id)arg3 andDescription:(id)arg4 boardType:(id)arg5 imageIds:(id)arg6 andLink:(id)arg7 isShareFromAccBookDetail:(_Bool)arg8 andCompletion:(CDUnknownBlockType)arg9;
- (void)queryHasActivityInFinanceMarket:(CDUnknownBlockType)arg1;
- (id)sharedAccountBookSourceUrlStringWithInvitationCode:(id)arg1;
- (void)queryShortURLForURLString:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)querySyncedDevicesWithUserName:(id)arg1 accountBookId:(id)arg2 callbackSuccessBlock:(CDUnknownBlockType)arg3 orFailureBlock:(CDUnknownBlockType)arg4;
- (void)queryReviewInviteCodeWithUsername:(id)arg1 andPassword:(id)arg2 andAccountBookId:(id)arg3 callbackSuccessBlock:(CDUnknownBlockType)arg4 orFailureBlock:(CDUnknownBlockType)arg5;
- (void)reviewInviteApplyWithUsername:(id)arg1 andPassword:(id)arg2 andInvitationCode:(id)arg3 callbackSuccessBlock:(CDUnknownBlockType)arg4 orFailureBlock:(CDUnknownBlockType)arg5;
- (void)fetchBBSAccoutInfoWithUID:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)fetchAccountInfoWithUsername:(id)arg1 password:(id)arg2 URL:(id)arg3 sucess:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)fetchAccountInfoWithUsername:(id)arg1 password:(id)arg2 sucess:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)shareAccountBooks:(id)arg1 toMaster:(id)arg2 sucess:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)deleteAccountBookWithUsername:(id)arg1 password:(id)arg2 syncAccountBookId:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)registerWithUsername:(id)arg1 password:(id)arg2 accountBookName:(id)arg3 accountBookTemplate:(unsigned long long)arg4 accountBookCover:(unsigned long long)arg5 sucess:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)preSynchronizeCheckingWithUsername:(id)arg1 andPassword:(id)arg2 andAccountBooks:(id)arg3 andApplyForVIP:(_Bool)arg4 andSuccessCompletion:(CDUnknownBlockType)arg5 andFailureCompletion:(CDUnknownBlockType)arg6;
- (void)queryAccountRequest:(id)arg1 username:(id)arg2 password:(id)arg3 isDetail:(_Bool)arg4 sucess:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)queryAccountWithUsername:(id)arg1 password:(id)arg2 isDetail:(_Bool)arg3 sucess:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)queryAccountWithUsername:(id)arg1 password:(id)arg2 deviceKey:(id)arg3 sucess:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)signInWithUsername:(id)arg1 password:(id)arg2 sucess:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)lightWeighSignInWithAccount:(id)arg1 password:(id)arg2 sucess:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)lightWeighSignInWithAccount:(id)arg1 password:(id)arg2 isVerify:(_Bool)arg3 sucess:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;

@end

