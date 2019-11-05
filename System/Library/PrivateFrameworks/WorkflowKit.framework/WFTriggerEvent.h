/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSString;

@interface WFTriggerEvent : NSObject {

	NSString* _triggerID;
	id<NSObject> _currentValue;

}

@property (nonatomic,copy,readonly) NSString * triggerID;              //@synthesize triggerID=_triggerID - In the implementation block
@property (nonatomic,readonly) id<NSObject> currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
-(id)description;
-(id<NSObject>)currentValue;
-(id)initWithTriggerID:(id)arg1 currentValue:(id)arg2 ;
-(NSString *)triggerID;
@end

