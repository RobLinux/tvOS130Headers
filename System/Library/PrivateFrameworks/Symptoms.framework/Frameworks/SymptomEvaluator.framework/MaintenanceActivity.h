/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface MaintenanceActivity : NSObject {

	/*^block*/id _activityBlock;
	NSObject*<OS_dispatch_queue> _activityQueue;
	NSString* _activityIdentifier;

}

@property (nonatomic,copy) id activityBlock;                                          //@synthesize activityBlock=_activityBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> activityQueue;              //@synthesize activityQueue=_activityQueue - In the implementation block
@property (nonatomic,retain) NSString * activityIdentifier;                           //@synthesize activityIdentifier=_activityIdentifier - In the implementation block
-(NSObject*<OS_dispatch_queue>)activityQueue;
-(void)setActivityQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)activityIdentifier;
-(void)setActivityIdentifier:(NSString *)arg1 ;
-(id)activityBlock;
-(void)setActivityBlock:(id)arg1 ;
@end

