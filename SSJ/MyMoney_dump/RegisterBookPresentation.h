//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RequestCmdPresentation.h"

@interface RegisterBookPresentation : RequestCmdPresentation
{
    unsigned long long _accountBookCover;
    unsigned long long _accountBookTemplate;
}

+ (id)registerBookPresentationWithResponseXmlString:(id)arg1;
@property(nonatomic) unsigned long long accountBookTemplate; // @synthesize accountBookTemplate=_accountBookTemplate;
- (id)xmlString;
- (id)initWithUsername:(id)arg1 password:(id)arg2 accountBookName:(id)arg3 accountBookTemple:(unsigned long long)arg4 accountBookCover:(unsigned long long)arg5;

@end
