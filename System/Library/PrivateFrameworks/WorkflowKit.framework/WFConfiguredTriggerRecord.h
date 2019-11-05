/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFRecord.h>

@class NSData;

@interface WFConfiguredTriggerRecord : WFRecord {

	BOOL _shouldPrompt;
	BOOL _enabled;
	NSData* _triggerData;

}

@property (nonatomic,copy) NSData * triggerData;                         //@synthesize triggerData=_triggerData - In the implementation block
@property (assign,nonatomic) BOOL shouldPrompt;                          //@synthesize shouldPrompt=_shouldPrompt - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(BOOL)shouldPrompt;
-(NSData *)triggerData;
-(void)setTriggerData:(NSData *)arg1 ;
-(void)setShouldPrompt:(BOOL)arg1 ;
@end
