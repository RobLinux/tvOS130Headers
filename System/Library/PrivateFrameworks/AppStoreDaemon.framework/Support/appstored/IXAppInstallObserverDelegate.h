/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IXAppInstallObserverDelegate <NSObject>
@optional
-(void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;
-(void)coordinatorDidCompleteSuccessfully:(id)arg1;
-(void)coordinatorShouldPrioritize:(id)arg1;
-(void)coordinatorShouldResume:(id)arg1;
-(void)coordinatorShouldPause:(id)arg1;
-(void)coordinator:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
-(void)coordinatorShouldBeginRestoringUserData:(id)arg1;
-(void)coordinatorDidInstallPlaceholder:(id)arg1;
-(void)shouldPrioritizeAppWithBundleID:(id)arg1;

@end

