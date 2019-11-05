/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSXPCListenerEndpoint, DMFReportingRequirements;

@interface DMFRegisterConfigurationSourceRequest : DMFTaskRequest {

	NSString* _configurationSourceName;
	NSString* _organizationIdentifier;
	NSString* _machServiceName;
	NSXPCListenerEndpoint* _listenerEndpoint;
	DMFReportingRequirements* _reportingRequirements;

}

@property (nonatomic,copy) NSString * configurationSourceName;                            //@synthesize configurationSourceName=_configurationSourceName - In the implementation block
@property (nonatomic,copy) NSString * organizationIdentifier;                             //@synthesize organizationIdentifier=_organizationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * machServiceName;                                    //@synthesize machServiceName=_machServiceName - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * listenerEndpoint;                    //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
@property (nonatomic,copy) DMFReportingRequirements * reportingRequirements;              //@synthesize reportingRequirements=_reportingRequirements - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)machServiceName;
-(void)setMachServiceName:(NSString *)arg1 ;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(void)setListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(NSString *)organizationIdentifier;
-(DMFReportingRequirements *)reportingRequirements;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(void)setReportingRequirements:(DMFReportingRequirements *)arg1 ;
-(NSString *)configurationSourceName;
-(void)setConfigurationSourceName:(NSString *)arg1 ;
@end

