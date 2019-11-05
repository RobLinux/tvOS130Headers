/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelStatusBase.h>
#import <RemoteManagementModel/RMModelRegisteredTypeProtocol.h>

@class NSString;

@interface RMModelStatusSystemVersion : RMModelStatusBase <RMModelRegisteredTypeProtocol> {

	NSString* _statusOSVersion;
	NSString* _statusBuildVersion;

}

@property (nonatomic,copy) NSString * statusOSVersion;                 //@synthesize statusOSVersion=_statusOSVersion - In the implementation block
@property (nonatomic,copy) NSString * statusBuildVersion;              //@synthesize statusBuildVersion=_statusBuildVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)allowedStatusKeys;
+(id)buildWithOSVersion:(id)arg1 buildVersion:(id)arg2 ;
+(id)buildRequiredOnlyWithOSVersion:(id)arg1 buildVersion:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStatusOSVersion:(NSString *)arg1 ;
-(void)setStatusBuildVersion:(NSString *)arg1 ;
-(NSString *)statusOSVersion;
-(NSString *)statusBuildVersion;
-(BOOL)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
@end

