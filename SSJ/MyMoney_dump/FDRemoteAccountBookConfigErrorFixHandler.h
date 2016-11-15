//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FDRemoteAccountBookConfigErrorFixHandler : NSObject
{
    id <FDErrorFixHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <FDErrorFixHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)changeStatus:(unsigned long long)arg1;
- (_Bool)folderIsExited:(id)arg1;
- (id)getRemoteAccountBookConfigItemByKey:(id)arg1;
- (_Bool)moveBadRomoteAccountBookToLocalAccountBook:(id)arg1;
- (_Bool)checkAndFixConfigErrors:(id)arg1;
- (id)allRemoteAccountBooks;
- (id)getAllBadAccountBookConfigItems;
- (void)startFix;

@end

