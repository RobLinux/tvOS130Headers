/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString;

@interface RMModelManagementTestCommandCommand_Status : RMModelPayloadBase {

	NSString* _statusEcho;

}

@property (nonatomic,copy) NSString * statusEcho;              //@synthesize statusEcho=_statusEcho - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildWithEcho:(id)arg1 ;
+(id)buildRequiredOnlyWithEcho:(id)arg1 ;
-(void)setStatusEcho:(NSString *)arg1 ;
-(NSString *)statusEcho;
-(BOOL)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
@end

