/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol INCExtensionProxy
@property (nonatomic,copy) id backgroundAppHandler; 
@optional
-(void)startSendingUpdatesToObserver:(id)arg1;
-(void)stopSendingUpdates;
-(void)getOptionsForParameterNamed:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getDefaultValueForParameterNamed:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)backgroundAppHandler;
-(void)setBackgroundAppHandler:(/*^block*/id)arg1;

@required
-(void)confirmIntentWithCompletionHandler:(/*^block*/id)arg1;
-(void)handleIntentWithCompletionHandler:(/*^block*/id)arg1;
-(void)resolveIntentSlotKeyPath:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)resolveIntentSlotKeyPaths:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end
