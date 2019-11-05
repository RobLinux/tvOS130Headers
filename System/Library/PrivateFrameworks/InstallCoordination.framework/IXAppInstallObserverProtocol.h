/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IXAppInstallObserverProtocol <NSObject>
@required
-(oneway void)_client_coordinatorShouldPrioritizeWithSeed:(id)arg1;
-(oneway void)_client_shouldPrioritizeAppWithBundleID:(id)arg1;
-(oneway void)_client_coordinatorShouldResumeWithSeed:(id)arg1;
-(oneway void)_client_coordinatorShouldPauseWithSeed:(id)arg1;
-(oneway void)_client_coordinatorWithSeed:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
-(oneway void)_client_coordinatorShouldBeginRestoringUserDataWithSeed:(id)arg1;
-(oneway void)_client_coordinatorDidInstallPlaceholderWithSeed:(id)arg1;
-(oneway void)_client_coordinatorDidCompleteSuccessfullyWithSeed:(id)arg1;
-(oneway void)_client_coordinatorWithSeed:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;

@end

