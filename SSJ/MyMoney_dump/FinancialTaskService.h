//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FinancialTaskService : NSObject
{
}

- (_Bool)isTaskCompleted:(long long)arg1;
- (void)initTasksWithInstalledCardniu:(_Bool)arg1;
- (id)completedTasks;
- (id)allTasks;
- (void)completeTask:(long long)arg1 withMessage:(_Bool)arg2;
- (void)completeTask:(long long)arg1;

@end
