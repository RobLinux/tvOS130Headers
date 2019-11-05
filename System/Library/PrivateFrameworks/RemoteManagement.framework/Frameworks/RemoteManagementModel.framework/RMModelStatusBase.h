/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString;

@interface RMModelStatusBase : RMModelPayloadBase {

	NSString* _statusType;

}

@property (nonatomic,copy) NSString * statusType;              //@synthesize statusType=_statusType - In the implementation block
+(id)load:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)statusType;
-(void)setStatusType:(NSString *)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadStatusFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
@end

