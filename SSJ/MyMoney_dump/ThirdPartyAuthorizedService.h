//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FDTencentOpenAPIAuthManagerDelegate.h"
#import "FDWeChatAPIManagerDelegate.h"
#import "FDWeiboAuthManagerDelegate.h"

@class NSString;

@interface ThirdPartyAuthorizedService : NSObject <FDWeiboAuthManagerDelegate, FDTencentOpenAPIAuthManagerDelegate, FDWeChatAPIManagerDelegate>
{
    CDUnknownBlockType _authorizedSuccessCallback;
}

+ (void)getThirdPartyUserProfile:(unsigned long long)arg1 callback:(CDUnknownBlockType)arg2;
+ (_Bool)isInstalledForPlatform:(unsigned long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType authorizedSuccessCallback; // @synthesize authorizedSuccessCallback=_authorizedSuccessCallback;
- (void).cxx_destruct;
- (void)authManagerAuthorizeSuccessfully:(id)arg1;
- (void)weiboAuthManagerAuthorizeSuccessfully:(id)arg1;
- (void)weChatAPIManagerDidAuthorizedSuccessfully:(id)arg1;
- (_Bool)isValidAvatar:(id)arg1;
- (_Bool)needSetAvatarFromThirdParty;
- (void)setUserAvatarFromThirdParty:(id)arg1;
- (void)handleAuthorizedSuccessfully:(unsigned long long)arg1;
- (void)doAuthorizedWithPlatform:(unsigned long long)arg1 successCallback:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

