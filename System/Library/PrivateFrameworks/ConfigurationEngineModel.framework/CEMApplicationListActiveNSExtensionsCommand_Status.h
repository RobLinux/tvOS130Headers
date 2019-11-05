/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMApplicationListActiveNSExtensionsCommand_Status : CEMPayloadBase {

	NSArray* _statusExtensions;

}

@property (nonatomic,copy) NSArray * statusExtensions;              //@synthesize statusExtensions=_statusExtensions - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildWithExtensions:(id)arg1 ;
+(id)buildRequiredOnlyWithExtensions:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusExtensions:(NSArray *)arg1 ;
-(NSArray *)statusExtensions;
@end

