/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/MTLModel.h>
#import <VoiceShortcuts/MTLJSONSerializing.h>

@class NSString, NSDate, NSDictionary;

@interface VCIDApplicationSyncState : MTLModel <MTLJSONSerializing> {

	NSString* _checksum;
	NSDate* _registeredDate;

}

@property (nonatomic,copy) NSString * checksum;                                  //@synthesize checksum=_checksum - In the implementation block
@property (nonatomic,copy) NSDate * registeredDate;                              //@synthesize registeredDate=_registeredDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)JSONKeyPathsByPropertyKey;
-(NSString *)checksum;
-(void)setChecksum:(NSString *)arg1 ;
-(NSDate *)registeredDate;
-(void)setRegisteredDate:(NSDate *)arg1 ;
@end

